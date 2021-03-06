/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOPlaceSearchResponse, NSMutableArray;

@interface GEOETAResponse : PBCodable
{
    CDStruct_c55e649d *_problemDetails;
    unsigned int _problemDetailsCount;
    unsigned int _problemDetailsSpace;
    NSMutableArray *_etaResults;
    GEOPlaceSearchResponse *_originPlaceSearchResponse;
    int _status;
    CDStruct_47fe53f2 _has;
}

@property(retain, nonatomic) GEOPlaceSearchResponse *originPlaceSearchResponse; // @synthesize originPlaceSearchResponse=_originPlaceSearchResponse;
@property(retain, nonatomic) NSMutableArray *etaResults; // @synthesize etaResults=_etaResults;
@property(nonatomic) int status; // @synthesize status=_status;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setProblemDetails:(CDStruct_c55e649d *)arg1 count:(unsigned int)arg2;
- (CDStruct_c55e649d)problemDetailAtIndex:(unsigned int)arg1;
- (void)addProblemDetail:(CDStruct_c55e649d)arg1;
- (void)clearProblemDetails;
@property(readonly, nonatomic) CDStruct_c55e649d *problemDetails;
@property(readonly, nonatomic) unsigned int problemDetailsCount;
@property(readonly, nonatomic) BOOL hasOriginPlaceSearchResponse;
- (id)etaResultAtIndex:(unsigned int)arg1;
- (unsigned int)etaResultsCount;
- (void)addEtaResult:(id)arg1;
- (void)clearEtaResults;
@property(nonatomic) BOOL hasStatus;
- (void)dealloc;

@end

