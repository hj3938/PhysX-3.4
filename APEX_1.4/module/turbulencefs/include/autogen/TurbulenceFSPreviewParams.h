// This code contains NVIDIA Confidential Information and is disclosed to you
// under a form of NVIDIA software license agreement provided separately to you.
//
// Notice
// NVIDIA Corporation and its licensors retain all intellectual property and
// proprietary rights in and to this software and related documentation and
// any modifications thereto. Any use, reproduction, disclosure, or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA Corporation is strictly prohibited.
//
// ALL NVIDIA DESIGN SPECIFICATIONS, CODE ARE PROVIDED "AS IS.". NVIDIA MAKES
// NO WARRANTIES, EXPRESSED, IMPLIED, STATUTORY, OR OTHERWISE WITH RESPECT TO
// THE MATERIALS, AND EXPRESSLY DISCLAIMS ALL IMPLIED WARRANTIES OF NONINFRINGEMENT,
// MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE.
//
// Information and code furnished is believed to be accurate and reliable.
// However, NVIDIA Corporation assumes no responsibility for the consequences of use of such
// information or for any infringement of patents or other rights of third parties that may
// result from its use. No license is granted by implication or otherwise under any patent
// or patent rights of NVIDIA Corporation. Details are subject to change without notice.
// This code supersedes and replaces all information previously supplied.
// NVIDIA Corporation products are not authorized for use as critical
// components in life support devices or systems without express written approval of
// NVIDIA Corporation.
//
// Copyright (c) 2008-2015 NVIDIA Corporation. All rights reserved.

// This file was generated by NvParameterized/scripts/GenParameterized.pl


#ifndef HEADER_TurbulenceFSPreviewParams_h
#define HEADER_TurbulenceFSPreviewParams_h

#include "NvParametersTypes.h"

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
#include "nvparameterized/NvParameterized.h"
#include "nvparameterized/NvParameterizedTraits.h"
#include "NvParameters.h"
#include "NvTraitsInternal.h"
#endif

namespace nvidia
{
namespace turbulencefs
{

#if PX_VC
#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())
#endif

namespace TurbulenceFSPreviewParamsNS
{



struct ParametersStruct
{

	physx::PxMat44 globalPose;
	float iconScale;
	bool drawIcon;
	bool drawBox;
	bool drawGrid;
	bool drawAssetInfo;
	uint64_t userData;

};

static const uint32_t checksum[] = { 0x3fa1f1f3, 0xea11179b, 0xd694cf15, 0xf0f49353, };

} // namespace TurbulenceFSPreviewParamsNS

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
class TurbulenceFSPreviewParams : public NvParameterized::NvParameters, public TurbulenceFSPreviewParamsNS::ParametersStruct
{
public:
	TurbulenceFSPreviewParams(NvParameterized::Traits* traits, void* buf = 0, int32_t* refCount = 0);

	virtual ~TurbulenceFSPreviewParams();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("TurbulenceFSPreviewParams");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const uint32_t ClassVersion = ((uint32_t)0 << 16) + (uint32_t)0;

	static uint32_t staticVersion(void)
	{
		return ClassVersion;
	}

	uint32_t version(void) const
	{
		return(staticVersion());
	}

	static const uint32_t ClassAlignment = 8;

	static const uint32_t* staticChecksum(uint32_t& bits)
	{
		bits = 8 * sizeof(TurbulenceFSPreviewParamsNS::checksum);
		return TurbulenceFSPreviewParamsNS::checksum;
	}

	static void freeParameterDefinitionTable(NvParameterized::Traits* traits);

	const uint32_t* checksum(uint32_t& bits) const
	{
		return staticChecksum(bits);
	}

	const TurbulenceFSPreviewParamsNS::ParametersStruct& parameters(void) const
	{
		TurbulenceFSPreviewParams* tmpThis = const_cast<TurbulenceFSPreviewParams*>(this);
		return *(static_cast<TurbulenceFSPreviewParamsNS::ParametersStruct*>(tmpThis));
	}

	TurbulenceFSPreviewParamsNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<TurbulenceFSPreviewParamsNS::ParametersStruct*>(this));
	}

	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle) const;
	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle);

	void initDefaults(void);

protected:

	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void);
	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void) const;


	virtual void getVarPtr(const NvParameterized::Handle& handle, void*& ptr, size_t& offset) const;

private:

	void buildTree(void);
	void initDynamicArrays(void);
	void initStrings(void);
	void initReferences(void);
	void freeDynamicArrays(void);
	void freeStrings(void);
	void freeReferences(void);

	static bool mBuiltFlag;
	static NvParameterized::MutexType mBuiltFlagMutex;
};

class TurbulenceFSPreviewParamsFactory : public NvParameterized::Factory
{
	static const char* const vptr;

public:

	virtual void freeParameterDefinitionTable(NvParameterized::Traits* traits)
	{
		TurbulenceFSPreviewParams::freeParameterDefinitionTable(traits);
	}

	virtual NvParameterized::Interface* create(NvParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(TurbulenceFSPreviewParams), TurbulenceFSPreviewParams::ClassAlignment);
		if (!NvParameterized::IsAligned(newPtr, TurbulenceFSPreviewParams::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class TurbulenceFSPreviewParams");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(TurbulenceFSPreviewParams)); // always initialize memory allocated to zero for default values
		return NV_PARAM_PLACEMENT_NEW(newPtr, TurbulenceFSPreviewParams)(paramTraits);
	}

	virtual NvParameterized::Interface* finish(NvParameterized::Traits* paramTraits, void* bufObj, void* bufStart, int32_t* refCount)
	{
		if (!NvParameterized::IsAligned(bufObj, TurbulenceFSPreviewParams::ClassAlignment)
		        || !NvParameterized::IsAligned(bufStart, TurbulenceFSPreviewParams::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class TurbulenceFSPreviewParams");
			return 0;
		}

		// Init NvParameters-part
		// We used to call empty constructor of TurbulenceFSPreviewParams here
		// but it may call default constructors of members and spoil the data
		NV_PARAM_PLACEMENT_NEW(bufObj, NvParameterized::NvParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (TurbulenceFSPreviewParams*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (TurbulenceFSPreviewParams::staticClassName());
	}

	virtual uint32_t getVersion()
	{
		return (TurbulenceFSPreviewParams::staticVersion());
	}

	virtual uint32_t getAlignment()
	{
		return (TurbulenceFSPreviewParams::ClassAlignment);
	}

	virtual const uint32_t* getChecksum(uint32_t& bits)
	{
		return (TurbulenceFSPreviewParams::staticChecksum(bits));
	}
};
#endif // NV_PARAMETERIZED_ONLY_LAYOUTS

} // namespace turbulencefs
} // namespace nvidia

#if PX_VC
#pragma warning(pop)
#endif

#endif