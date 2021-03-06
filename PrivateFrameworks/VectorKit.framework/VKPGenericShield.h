/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPGenericShield : PBCodable
{
    int _style;
    NSMutableArray *_variants;
}

@property(retain, nonatomic) NSMutableArray *variants; // @synthesize variants=_variants;
@property(nonatomic) int style; // @synthesize style=_style;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)variantAtIndex:(unsigned int)arg1;
- (unsigned int)variantsCount;
- (void)addVariant:(id)arg1;
- (void)clearVariants;
- (void)dealloc;

@end

