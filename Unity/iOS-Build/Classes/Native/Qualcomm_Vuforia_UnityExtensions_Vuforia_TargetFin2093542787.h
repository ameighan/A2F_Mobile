﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType_103494864.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// Vuforia.TargetFinder/TargetSearchResult
struct  TargetSearchResult_t2093542787_0 
{
	// System.String Vuforia.TargetFinder/TargetSearchResult::TargetName
	String_t* ___TargetName_0;
	// System.String Vuforia.TargetFinder/TargetSearchResult::UniqueTargetId
	String_t* ___UniqueTargetId_1;
	// System.Single Vuforia.TargetFinder/TargetSearchResult::TargetSize
	float ___TargetSize_2;
	// System.String Vuforia.TargetFinder/TargetSearchResult::MetaData
	String_t* ___MetaData_3;
	// System.Byte Vuforia.TargetFinder/TargetSearchResult::TrackingRating
	uint8_t ___TrackingRating_4;
	// System.IntPtr Vuforia.TargetFinder/TargetSearchResult::TargetSearchResultPtr
	IntPtr_t ___TargetSearchResultPtr_5;
};
// Native definition for marshalling of: Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_t2093542787_0_marshaled
{
	char* ___TargetName_0;
	char* ___UniqueTargetId_1;
	float ___TargetSize_2;
	char* ___MetaData_3;
	uint8_t ___TrackingRating_4;
	intptr_t ___TargetSearchResultPtr_5;
};
