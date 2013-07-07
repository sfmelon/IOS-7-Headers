/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MPText, MRMarimbaLayer, MRTextRenderer;

@interface MRMarimbaLayoutManager : NSObject
{
    MRTextRenderer *_textRenderer;
    MRMarimbaLayer *_marimbaLayer;
    MPText *_text;
}

@property(retain, nonatomic) MPText *text; // @synthesize text=_text;
@property(retain, nonatomic) MRMarimbaLayer *marimbaLayer; // @synthesize marimbaLayer=_marimbaLayer;
- (struct CGPoint)shadowOffset;
- (struct CGRect)currentRectForEditedText;
- (id)_renderer;
- (void)updateWithString:(id)arg1;
- (int)lineCount;
- (id)textRenderer;
- (void)dealloc;
- (id)init;

@end
