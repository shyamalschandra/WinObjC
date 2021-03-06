//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

// WindowsGlobalizationNumberFormatting.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
#define OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT __declspec(dllimport)
#ifndef IN_OBJCUWP_BUILD
#pragma comment(lib, "ObjCUWP_Windows_Globalization_NumberFormatting.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WGNSignificantDigitsNumberRounder, WGNIncrementNumberRounder, WGNDecimalFormatter, WGNPercentFormatter, WGNPermilleFormatter,
    WGNCurrencyFormatter, WGNNumeralSystemTranslator;
@protocol WGNINumberRounder
, WGNISignificantDigitsNumberRounder, WGNIIncrementNumberRounder, WGNINumberFormatter, WGNINumberFormatter2, WGNINumberParser,
    WGNINumberFormatterOptions, WGNISignificantDigitsOption, WGNINumberRounderOption, WGNISignedZeroOption, WGNIDecimalFormatterFactory,
    WGNIPercentFormatterFactory, WGNIPermilleFormatterFactory, WGNICurrencyFormatterFactory, WGNICurrencyFormatter, WGNICurrencyFormatter2,
    WGNINumeralSystemTranslatorFactory, WGNINumeralSystemTranslator;

// Windows.Globalization.NumberFormatting.RoundingAlgorithm
enum _WGNRoundingAlgorithm {
    WGNRoundingAlgorithmNone = 0,
    WGNRoundingAlgorithmRoundDown = 1,
    WGNRoundingAlgorithmRoundUp = 2,
    WGNRoundingAlgorithmRoundTowardsZero = 3,
    WGNRoundingAlgorithmRoundAwayFromZero = 4,
    WGNRoundingAlgorithmRoundHalfDown = 5,
    WGNRoundingAlgorithmRoundHalfUp = 6,
    WGNRoundingAlgorithmRoundHalfTowardsZero = 7,
    WGNRoundingAlgorithmRoundHalfAwayFromZero = 8,
    WGNRoundingAlgorithmRoundHalfToEven = 9,
    WGNRoundingAlgorithmRoundHalfToOdd = 10,
};
typedef unsigned WGNRoundingAlgorithm;

// Windows.Globalization.NumberFormatting.CurrencyFormatterMode
enum _WGNCurrencyFormatterMode {
    WGNCurrencyFormatterModeUseSymbol = 0,
    WGNCurrencyFormatterModeUseCurrencyCode = 1,
};
typedef unsigned WGNCurrencyFormatterMode;

#import <Foundation/Foundation.h>

// Windows.Globalization.NumberFormatting.INumberRounder
#ifndef __WGNINumberRounder_DEFINED__
#define __WGNINumberRounder_DEFINED__

@protocol WGNINumberRounder
- (int)roundInt32:(int)value;
- (unsigned int)roundUInt32:(unsigned int)value;
- (int64_t)roundInt64:(int64_t)value;
- (uint64_t)roundUInt64:(uint64_t)value;
- (float)roundSingle:(float)value;
- (double)roundDouble:(double)value;
@end

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNINumberRounder : RTObject <WGNINumberRounder>
@end

#endif // __WGNINumberRounder_DEFINED__

// Windows.Globalization.NumberFormatting.INumberFormatter
#ifndef __WGNINumberFormatter_DEFINED__
#define __WGNINumberFormatter_DEFINED__

@protocol WGNINumberFormatter
- (NSString*)formatInt:(int64_t)value;
- (NSString*)formatUInt:(uint64_t)value;
- (NSString*)formatDouble:(double)value;
@end

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNINumberFormatter : RTObject <WGNINumberFormatter>
@end

#endif // __WGNINumberFormatter_DEFINED__

// Windows.Globalization.NumberFormatting.INumberFormatter2
#ifndef __WGNINumberFormatter2_DEFINED__
#define __WGNINumberFormatter2_DEFINED__

@protocol WGNINumberFormatter2
- (NSString*)formatInt:(int64_t)value;
- (NSString*)formatUInt:(uint64_t)value;
- (NSString*)formatDouble:(double)value;
@end

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNINumberFormatter2 : RTObject <WGNINumberFormatter2>
@end

#endif // __WGNINumberFormatter2_DEFINED__

// Windows.Globalization.NumberFormatting.INumberParser
#ifndef __WGNINumberParser_DEFINED__
#define __WGNINumberParser_DEFINED__

@protocol WGNINumberParser
- (id /* int64_t */)parseInt:(NSString*)text;
- (id /* uint64_t */)parseUInt:(NSString*)text;
- (id /* double */)parseDouble:(NSString*)text;
@end

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNINumberParser : RTObject <WGNINumberParser>
@end

#endif // __WGNINumberParser_DEFINED__

// Windows.Globalization.NumberFormatting.INumberFormatterOptions
#ifndef __WGNINumberFormatterOptions_DEFINED__
#define __WGNINumberFormatterOptions_DEFINED__

@protocol WGNINumberFormatterOptions
@property int fractionDigits;
@property (readonly) NSString* geographicRegion;
@property int integerDigits;
@property BOOL isDecimalPointAlwaysDisplayed;
@property BOOL isGrouped;
@property (readonly) NSArray* /* NSString * */ languages;
@property (retain) NSString* numeralSystem;
@property (readonly) NSString* resolvedGeographicRegion;
@property (readonly) NSString* resolvedLanguage;
@end

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNINumberFormatterOptions : RTObject <WGNINumberFormatterOptions>
@end

#endif // __WGNINumberFormatterOptions_DEFINED__

// Windows.Globalization.NumberFormatting.ISignificantDigitsOption
#ifndef __WGNISignificantDigitsOption_DEFINED__
#define __WGNISignificantDigitsOption_DEFINED__

@protocol WGNISignificantDigitsOption
@property int significantDigits;
@end

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNISignificantDigitsOption : RTObject <WGNISignificantDigitsOption>
@end

#endif // __WGNISignificantDigitsOption_DEFINED__

// Windows.Globalization.NumberFormatting.INumberRounderOption
#ifndef __WGNINumberRounderOption_DEFINED__
#define __WGNINumberRounderOption_DEFINED__

@protocol WGNINumberRounderOption
@property (retain) RTObject<WGNINumberRounder>* numberRounder;
@end

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNINumberRounderOption : RTObject <WGNINumberRounderOption>
@end

#endif // __WGNINumberRounderOption_DEFINED__

// Windows.Globalization.NumberFormatting.ISignedZeroOption
#ifndef __WGNISignedZeroOption_DEFINED__
#define __WGNISignedZeroOption_DEFINED__

@protocol WGNISignedZeroOption
@property BOOL isZeroSigned;
@end

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNISignedZeroOption : RTObject <WGNISignedZeroOption>
@end

#endif // __WGNISignedZeroOption_DEFINED__

// Windows.Globalization.NumberFormatting.SignificantDigitsNumberRounder
#ifndef __WGNSignificantDigitsNumberRounder_DEFINED__
#define __WGNSignificantDigitsNumberRounder_DEFINED__

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNSignificantDigitsNumberRounder : RTObject <WGNINumberRounder>
+ (instancetype)make ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property unsigned int significantDigits;
@property WGNRoundingAlgorithm roundingAlgorithm;
- (int)roundInt32:(int)value;
- (unsigned int)roundUInt32:(unsigned int)value;
- (int64_t)roundInt64:(int64_t)value;
- (uint64_t)roundUInt64:(uint64_t)value;
- (float)roundSingle:(float)value;
- (double)roundDouble:(double)value;
@end

#endif // __WGNSignificantDigitsNumberRounder_DEFINED__

// Windows.Globalization.NumberFormatting.IncrementNumberRounder
#ifndef __WGNIncrementNumberRounder_DEFINED__
#define __WGNIncrementNumberRounder_DEFINED__

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNIncrementNumberRounder : RTObject <WGNINumberRounder>
+ (instancetype)make ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property WGNRoundingAlgorithm roundingAlgorithm;
@property double increment;
- (int)roundInt32:(int)value;
- (unsigned int)roundUInt32:(unsigned int)value;
- (int64_t)roundInt64:(int64_t)value;
- (uint64_t)roundUInt64:(uint64_t)value;
- (float)roundSingle:(float)value;
- (double)roundDouble:(double)value;
@end

#endif // __WGNIncrementNumberRounder_DEFINED__

// Windows.Globalization.NumberFormatting.DecimalFormatter
#ifndef __WGNDecimalFormatter_DEFINED__
#define __WGNDecimalFormatter_DEFINED__

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNDecimalFormatter : RTObject <WGNINumberFormatterOptions,
                                           WGNINumberFormatter,
                                           WGNINumberFormatter2,
                                           WGNINumberParser,
                                           WGNISignificantDigitsOption,
                                           WGNINumberRounderOption,
                                           WGNISignedZeroOption>
+ (instancetype)make ACTIVATOR;
+ (WGNDecimalFormatter*)makeDecimalFormatter:(id<NSFastEnumeration> /* NSString * */)languages
                            geographicRegion:(NSString*)geographicRegion ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property BOOL isDecimalPointAlwaysDisplayed;
@property int integerDigits;
@property BOOL isGrouped;
@property int fractionDigits;
@property (retain) NSString* numeralSystem;
@property (readonly) NSString* geographicRegion;
@property (readonly) NSArray* /* NSString * */ languages;
@property (readonly) NSString* resolvedGeographicRegion;
@property (readonly) NSString* resolvedLanguage;
@property (retain) RTObject<WGNINumberRounder>* numberRounder;
@property BOOL isZeroSigned;
@property int significantDigits;
- (NSString*)formatInt:(int64_t)value;
- (NSString*)formatUInt:(uint64_t)value;
- (NSString*)formatDouble:(double)value;
- (id /* int64_t */)parseInt:(NSString*)text;
- (id /* uint64_t */)parseUInt:(NSString*)text;
- (id /* double */)parseDouble:(NSString*)text;
@end

#endif // __WGNDecimalFormatter_DEFINED__

// Windows.Globalization.NumberFormatting.PercentFormatter
#ifndef __WGNPercentFormatter_DEFINED__
#define __WGNPercentFormatter_DEFINED__

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNPercentFormatter : RTObject <WGNINumberFormatterOptions,
                                           WGNINumberFormatter,
                                           WGNINumberFormatter2,
                                           WGNINumberParser,
                                           WGNISignificantDigitsOption,
                                           WGNINumberRounderOption,
                                           WGNISignedZeroOption>
+ (WGNPercentFormatter*)makePercentFormatter:(id<NSFastEnumeration> /* NSString * */)languages
                            geographicRegion:(NSString*)geographicRegion ACTIVATOR;
+ (instancetype)make ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property BOOL isDecimalPointAlwaysDisplayed;
@property int integerDigits;
@property BOOL isGrouped;
@property int fractionDigits;
@property (retain) NSString* numeralSystem;
@property (readonly) NSString* geographicRegion;
@property (readonly) NSArray* /* NSString * */ languages;
@property (readonly) NSString* resolvedGeographicRegion;
@property (readonly) NSString* resolvedLanguage;
@property (retain) RTObject<WGNINumberRounder>* numberRounder;
@property BOOL isZeroSigned;
@property int significantDigits;
- (NSString*)formatInt:(int64_t)value;
- (NSString*)formatUInt:(uint64_t)value;
- (NSString*)formatDouble:(double)value;
- (id /* int64_t */)parseInt:(NSString*)text;
- (id /* uint64_t */)parseUInt:(NSString*)text;
- (id /* double */)parseDouble:(NSString*)text;
@end

#endif // __WGNPercentFormatter_DEFINED__

// Windows.Globalization.NumberFormatting.PermilleFormatter
#ifndef __WGNPermilleFormatter_DEFINED__
#define __WGNPermilleFormatter_DEFINED__

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNPermilleFormatter : RTObject <WGNINumberFormatterOptions,
                                            WGNINumberFormatter,
                                            WGNINumberFormatter2,
                                            WGNINumberParser,
                                            WGNISignificantDigitsOption,
                                            WGNINumberRounderOption,
                                            WGNISignedZeroOption>
+ (WGNPermilleFormatter*)makePermilleFormatter:(id<NSFastEnumeration> /* NSString * */)languages
                              geographicRegion:(NSString*)geographicRegion ACTIVATOR;
+ (instancetype)make ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property BOOL isDecimalPointAlwaysDisplayed;
@property int integerDigits;
@property BOOL isGrouped;
@property int fractionDigits;
@property (retain) NSString* numeralSystem;
@property (readonly) NSString* geographicRegion;
@property (readonly) NSArray* /* NSString * */ languages;
@property (readonly) NSString* resolvedGeographicRegion;
@property (readonly) NSString* resolvedLanguage;
@property (retain) RTObject<WGNINumberRounder>* numberRounder;
@property BOOL isZeroSigned;
@property int significantDigits;
- (NSString*)formatInt:(int64_t)value;
- (NSString*)formatUInt:(uint64_t)value;
- (NSString*)formatDouble:(double)value;
- (id /* int64_t */)parseInt:(NSString*)text;
- (id /* uint64_t */)parseUInt:(NSString*)text;
- (id /* double */)parseDouble:(NSString*)text;
@end

#endif // __WGNPermilleFormatter_DEFINED__

// Windows.Globalization.NumberFormatting.CurrencyFormatter
#ifndef __WGNCurrencyFormatter_DEFINED__
#define __WGNCurrencyFormatter_DEFINED__

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNCurrencyFormatter : RTObject <WGNINumberParser,
                                            WGNINumberFormatter2,
                                            WGNINumberFormatter,
                                            WGNINumberFormatterOptions,
                                            WGNISignificantDigitsOption,
                                            WGNINumberRounderOption,
                                            WGNISignedZeroOption>
+ (WGNCurrencyFormatter*)makeCurrencyFormatterCode:(NSString*)currencyCode ACTIVATOR;
+ (WGNCurrencyFormatter*)makeCurrencyFormatterCodeContext:(NSString*)currencyCode
                                                languages:(id<NSFastEnumeration> /* NSString * */)languages
                                         geographicRegion:(NSString*)geographicRegion ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (retain) NSString* currency;
@property WGNCurrencyFormatterMode mode;
@property BOOL isGrouped;
@property BOOL isDecimalPointAlwaysDisplayed;
@property int integerDigits;
@property int fractionDigits;
@property (retain) NSString* numeralSystem;
@property (readonly) NSString* geographicRegion;
@property (readonly) NSString* resolvedGeographicRegion;
@property (readonly) NSString* resolvedLanguage;
@property (readonly) NSArray* /* NSString * */ languages;
@property (retain) RTObject<WGNINumberRounder>* numberRounder;
@property BOOL isZeroSigned;
@property int significantDigits;
- (NSString*)formatInt:(int64_t)value;
- (NSString*)formatUInt:(uint64_t)value;
- (NSString*)formatDouble:(double)value;
- (id /* int64_t */)parseInt:(NSString*)text;
- (id /* uint64_t */)parseUInt:(NSString*)text;
- (id /* double */)parseDouble:(NSString*)text;
- (void)applyRoundingForCurrency:(WGNRoundingAlgorithm)roundingAlgorithm;
@end

#endif // __WGNCurrencyFormatter_DEFINED__

// Windows.Globalization.NumberFormatting.NumeralSystemTranslator
#ifndef __WGNNumeralSystemTranslator_DEFINED__
#define __WGNNumeralSystemTranslator_DEFINED__

OBJCUWP_WINDOWS_GLOBALIZATION_NUMBERFORMATTING_EXPORT
@interface WGNNumeralSystemTranslator : RTObject
+ (WGNNumeralSystemTranslator*)make:(id<NSFastEnumeration> /* NSString * */)languages ACTIVATOR;
+ (instancetype)make ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (retain) NSString* numeralSystem;
@property (readonly) NSArray* /* NSString * */ languages;
@property (readonly) NSString* resolvedLanguage;
- (NSString*)translateNumerals:(NSString*)value;
@end

#endif // __WGNNumeralSystemTranslator_DEFINED__
