/*
 * ShaderConductor
 *
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT License.
 *
 * MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this
 * software and associated documentation files (the "Software"), to deal in the Software
 * without restriction, including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons
 * to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
 * FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef SHADER_CONDUCTOR_HPP
#define SHADER_CONDUCTOR_HPP

#pragma once

#include <functional>

#if defined(__clang__)
#define SC_SYMBOL_EXPORT __attribute__((__visibility__("default")))
#define SC_SYMBOL_IMPORT
#elif defined(__GNUC__)
#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
#define SC_SYMBOL_EXPORT __attribute__((__dllexport__))
#define SC_SYMBOL_IMPORT __attribute__((__dllimport__))
#else
#define SC_SYMBOL_EXPORT __attribute__((__visibility__("default")))
#define SC_SYMBOL_IMPORT
#endif
#elif defined(_MSC_VER)
#define SC_SYMBOL_EXPORT __declspec(dllexport)
#define SC_SYMBOL_IMPORT __declspec(dllimport)
#endif

#ifdef SHADER_CONDUCTOR_SOURCE
#define SC_API SC_SYMBOL_EXPORT
#else
#define SC_API SC_SYMBOL_IMPORT
#endif

namespace ShaderConductor
{
    enum class ShaderStage : uint32_t
    {
        VertexShader,
        PixelShader,
        GeometryShader,
        HullShader,
        DomainShader,
        ComputeShader,

        // UE Change Begin: Add ray tracing stages.
        RayGen,
        RayMiss,
        RayHitGroup,
        RayCallable,
        // UE Change End: Add ray tracing stages.

        // UE Change Begin: Add mesh shading stages,
        MeshShader,
        AmplificationShader,
        // UE Change Begin: Add mesh shading stages,
        
        NumShaderStages,
    };

    enum class ShadingLanguage : uint32_t
    {
        Dxil = 0,
        SpirV,

        Hlsl,
        Glsl,
        Essl,
        Msl_macOS,
        Msl_iOS,

        NumShadingLanguages,
    };

    enum class ShaderResourceType : uint32_t
    {
        ConstantBuffer,
        Parameter,
        Texture,
        Sampler,
        ShaderResourceView,
        UnorderedAccessView,

        NumShaderResourceType,
    };

    struct MacroDefine
    {
        const char* name;
        const char* value;
    };

    class SC_API Blob
    {
    public:
        Blob() noexcept;
        Blob(const void* data, uint32_t size);
        Blob(const Blob& other);
        Blob(Blob&& other) noexcept;
        ~Blob() noexcept;

        Blob& operator=(const Blob& other);
        Blob& operator=(Blob&& other) noexcept;

        void Reset();
        void Reset(const void* data, uint32_t size);

        const void* Data() const noexcept;
        uint32_t Size() const noexcept;

    private:
        class BlobImpl;
        BlobImpl* m_impl = nullptr;
    };

    class SC_API Compiler
    {
    public:
        struct ShaderModel
        {
            // UE Change Begin: Spread the bits more evenly to support shader models such as 6.6
            uint8_t major_ver : 4; // originally 6
            uint8_t minor_ver : 4; // originally 2

            uint32_t FullVersion() const noexcept
            {
                return (major_ver << 4) | minor_ver;
            }
            // UE Change End: Spread the bits more evenly to support shader models such as 6.6

            bool operator<(const ShaderModel& other) const noexcept
            {
                return this->FullVersion() < other.FullVersion();
            }
            bool operator==(const ShaderModel& other) const noexcept
            {
                return this->FullVersion() == other.FullVersion();
            }
            bool operator>(const ShaderModel& other) const noexcept
            {
                return other < *this;
            }
            bool operator<=(const ShaderModel& other) const noexcept
            {
                return (*this < other) || (*this == other);
            }
            bool operator>=(const ShaderModel& other) const noexcept
            {
                return (*this > other) || (*this == other);
            }
        };

        struct SourceDesc
        {
            const char* source;
            const char* fileName;
            const char* entryPoint;
            ShaderStage stage;
            const MacroDefine* defines;
            uint32_t numDefines;
            std::function<Blob(const char* includeName)> loadIncludeCallback;
        };

        struct Options
        {
            bool packMatricesInRowMajor = true;          // Experimental: Decide how a matrix get packed
            bool enable16bitTypes = false;               // Enable 16-bit types, such as half, uint16_t. Requires shader model 6.2+
            bool enableDebugInfo = false;                // Embed debug info into the binary
            bool disableOptimizations = false;           // Force to turn off optimizations. Ignore optimizationLevel below.
            bool inheritCombinedSamplerBindings = false; // If textures and samplers are combined, inherit the binding of the texture
            // UE Change Begin: Add functionality to rewrite HLSL to remove unused code and globals.
            bool removeUnusedGlobals = false;
            // UE Change End: Add functionality to rewrite HLSL to remove unused code and globals.
            // UE Change Begin: Specify the Fused-Multiply-Add pass for Metal - we'll define it away later when we can.
            bool enableFMAPass = false;
            // UE Change End: Specify the Fused-Multiply-Add pass for Metal - we'll define it away later when we can.
            // UE Change Begin: Allow separate samplers in GLSL via extensions.
            bool enableSeparateSamplers = false;
            // UE Change End: Allow separate samplers in GLSL via extensions.
			// UE Change Begin: Support for specifying direct arguments to DXC
            uint32_t numDXCArgs = 0;
            const char** DXCArgs = nullptr;
            // UE Change End: Support for specifying direct arguments to DXC

            int optimizationLevel = 3; // 0 to 3, no optimization to most optimization
            ShaderModel shaderModel = {6, 0};

            int shiftAllTexturesBindings = 0;
            int shiftAllSamplersBindings = 0;
            int shiftAllCBuffersBindings = 0;
            int shiftAllUABuffersBindings = 0;
        };

        struct TargetDesc
        {
            ShadingLanguage language;
            const char* version;
            bool asModule;

            // UE Change Begin: Support reflection & overriding Metal options & resource bindings to generate correct code.
            const MacroDefine* options;
            uint32_t numOptions;
            // UE Change End: Support reflection & overriding Metal options & resource bindings to generate correct code.

            // UE Change Begin: Allow variable typenames to be renamed to support samplerExternalOES in ESSL.
            std::function<Blob(const char* variableName, const char* typeName)> variableTypeRenameCallback;
            // UE Change End: Allow variable typenames to be renamed to support samplerExternalOES in ESSL.
        };

        struct ReflectionDesc
        {
            char name[256];           // Name of the resource
            ShaderResourceType type;  // Type of resource (e.g. texture, cbuffer, etc.)
            uint32_t bufferBindPoint; // Buffer's starting bind point
            uint32_t bindPoint;       // Starting bind point
            uint32_t bindCount;       // Number of contiguous bind points (for arrays)
        };

        struct ReflectionResultDesc
        {
            Blob descs; // The underneath type is ReflectionDesc
            uint32_t descCount = 0;
            uint32_t instructionCount = 0;
        };

        struct ResultDesc
        {
            Blob target;
            bool isText;

            Blob errorWarningMsg;
            bool hasError;

            ReflectionResultDesc reflection;
        };

        struct DisassembleDesc
        {
            ShadingLanguage language;
            const uint8_t* binary;
            uint32_t binarySize;
        };

        struct ModuleDesc
        {
            const char* name;
            Blob target;
        };

        struct LinkDesc
        {
            const char* entryPoint;
            ShaderStage stage;

            const ModuleDesc** modules;
            uint32_t numModules;
        };

    public:
        static ResultDesc Compile(const SourceDesc& source, const Options& options, const TargetDesc& target);
        static void Compile(const SourceDesc& source, const Options& options, const TargetDesc* targets, uint32_t numTargets,
                            ResultDesc* results);
        static ResultDesc Disassemble(const DisassembleDesc& source);

        // UE Change Begin: Two stage compilation is preferable for UE4 as it avoids polluting SC with SPIRV->MSL complexities.
        static ResultDesc ConvertBinary(const ResultDesc& binaryResult, const SourceDesc& source, const Compiler::Options& options,
                                        const TargetDesc& target);
        // UE Change End: Two stage compilation is preferable for UE4 as it avoids polluting SC with SPIRV->MSL complexities.
        // UE Change Begin: Add functionality to rewrite HLSL to remove unused code and globals.
        static ResultDesc Rewrite(SourceDesc source, const Compiler::Options& options);
        // UE Change End: Add functionality to rewrite HLSL to remove unused code and globals.
        // UE Change Begin: Allow optimization after source-to-spirv conversion and before spirv-to-source cross-compilation
        static ResultDesc Optimize(const ResultDesc& binaryResult, const char* const* optConfigs, uint32_t numOptConfigs);
        // UE Change End: Allow optimization after source-to-spirv conversion and before spirv-to-source cross-compilation

        // Currently only Dxil on Windows supports linking
        static bool LinkSupport();
        static ResultDesc Link(const LinkDesc& modules, const Options& options, const TargetDesc& target);

        // UE Change Begin: Allow to manually shutdown compiler to avoid dangling mutex on Linux.
        static void Shutdown();
        // UE Change End: Allow to manually shutdown compiler to avoid dangling mutex on Linux.
    };
} // namespace ShaderConductor

#endif // SHADER_CONDUCTOR_HPP
