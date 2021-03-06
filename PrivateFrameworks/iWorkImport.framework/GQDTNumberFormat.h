/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable.h"

@class NSArray, NSIndexSet;

__attribute__((visibility("hidden")))
@interface GQDTNumberFormat : NSObject <GQDNameMappable>
{
    char *mUid;
    struct __CFString *mFormatString;
    struct __CFString *mCurrencyCode;
    long mDecimalPlaces;
    BOOL mUseAccountingStyle;
    BOOL mShowThousandsSeparator;
    int mValueType;
    int mNegativeStyle;
    int mFractionAccuracy;
    BOOL mFormatStringRequiresSuppressionOfMinusSign;
    double mScaleFactor;
    BOOL mIsCustom;
    BOOL mRequiresFractionReplacement;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    unsigned char mBase;
    unsigned short mBasePlaces;
    BOOL mBaseUsesMinusSign;
    BOOL mUseScientificFormattingAutomatically;
    BOOL mIgnoreDecimalPlacesForZeroValue;
    BOOL mIsTextFormat;
    BOOL mFormatContainsSpecialTokens;
    BOOL mFormatContainsIntegerToken;
    NSArray *mInterstitialStrings;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    struct __CFString *mSuffixString;
}

+ (const struct StateSpec *)stateForReading;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString *)arg9;
+ (BOOL)needToSuppressMinusSignForFormatString:(struct __CFString *)arg1;
- (BOOL)useAccountingStyle;
- (int)valueType;
- (struct __CFString *)createStringFromDouble:(double)arg1;
- (id)stringFromDouble:(double)arg1;
- (BOOL)hasValidDecimalPlaces;
- (void)dealloc;
- (int)fractionAccuracy;
- (BOOL)isTextFormat;
- (BOOL)isCustom;
- (id)customNumberFormatTokens;
- (BOOL)showThousandsSeparator;
- (id)currencyCode;
- (id)formatString;
- (id)numberFormatBySettingValueType:(int)arg1;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (void)setUseScientificFormattingAutomatically:(BOOL)arg1;
- (id)baseStringFromDouble:(double)arg1;
- (id)fractionStringFromDouble:(double)arg1;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString *)arg9 scaleFactor:(double)arg10 base:(unsigned short)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(BOOL)arg13 isCustom:(BOOL)arg14 interstitialStrings:(id)arg15 interstitialStringInsertionIndexes:(id)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(BOOL)arg22 formatName:(id)arg23;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end

