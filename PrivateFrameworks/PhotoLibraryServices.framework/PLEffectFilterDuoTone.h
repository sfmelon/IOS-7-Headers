/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLEffectFilter.h>

@class NSNumber;

@interface PLEffectFilterDuoTone : PLEffectFilter
{
    NSNumber *inputValue;
    NSNumber *inputDoAddColor;
}

@property(retain, nonatomic) NSNumber *inputDoAddColor; // @synthesize inputDoAddColor;
@property(retain, nonatomic) NSNumber *inputValue; // @synthesize inputValue;
- (id)duotoneFilterWithFraction:(float)arg1 doAddColor:(BOOL)arg2;
- (id)_filtersForCurrentInputValues;
- (void)dealloc;

@end

