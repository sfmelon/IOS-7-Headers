/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iWorkImport/GQDBGPlaceholder.h>

#import "GQDNameMappable.h"

@class GQDDrawable;

__attribute__((visibility("hidden")))
@interface GQDBGObjectPlaceholder : GQDBGPlaceholder <GQDNameMappable>
{
    char *mContentType;
    GQDDrawable *mDrawable;
}

+ (const struct StateSpec *)stateForReading;
- (id)drawable;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

