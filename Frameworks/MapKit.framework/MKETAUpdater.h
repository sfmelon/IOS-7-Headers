/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOClientETATrafficUpdateRequest, GEOLocation, GEORoute, GEORouteAttributes, GEOWaypoint, NSTimer, VKAttributedRouteMatch;

@interface MKETAUpdater : NSObject
{
    id <MKETAUpdaterDelegate> _delegate;
    id _willSendRequestHandler;
    id _receivedResponseHandler;
    GEOClientETATrafficUpdateRequest *_currentETARequest;
    GEOLocation *_userLocation;
    VKAttributedRouteMatch *_routeMatch;
    GEORoute *_route;
    GEOWaypoint *_destination;
    GEORouteAttributes *_routeAttributes;
    int _etaState;
    BOOL _allowRequests;
    BOOL _shouldUseConditionalRequest;
    double _requestInterval;
    NSTimer *_etaIdleTimer;
    double _lastETARequestTime;
}

@property(nonatomic) double requestInterval; // @synthesize requestInterval=_requestInterval;
@property(nonatomic) BOOL shouldUseConditionalRequest; // @synthesize shouldUseConditionalRequest=_shouldUseConditionalRequest;
@property(nonatomic) BOOL allowRequests; // @synthesize allowRequests=_allowRequests;
@property(retain, nonatomic) GEOWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(retain, nonatomic) GEORoute *route; // @synthesize route=_route;
@property(retain, nonatomic) VKAttributedRouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property(retain, nonatomic) GEOLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(readonly, nonatomic) GEOClientETATrafficUpdateRequest *currentRequest; // @synthesize currentRequest=_currentETARequest;
@property(copy, nonatomic) id receivedResponseHandler; // @synthesize receivedResponseHandler=_receivedResponseHandler;
@property(copy, nonatomic) id willSendRequestHandler; // @synthesize willSendRequestHandler=_willSendRequestHandler;
@property(nonatomic) id <MKETAUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)_handleETARequestFinished:(id)arg1 currentStep:(id)arg2 percentOfCurrentStepRemaining:(double)arg3;
- (void)_addCurrentRouteToETARequest:(id)arg1 currentStepIndex:(unsigned int)arg2 percentOfCurrentStepRemaining:(double)arg3;
- (BOOL)_shouldStartConditionalETARequest;
- (BOOL)_sendETARequest:(id)arg1 isUpdate:(BOOL)arg2;
- (void)_startConditionalConnectionETARequest;
- (void)_startStateWaitingForBestTimeStart:(id)arg1;
- (void)stopUpdateRequests;
- (void)startUpdateRequestsWithRequestHandler:(id)arg1 responseHandler:(void)arg2;
- (void)startUpdateRequests;
- (void)_clearCurrentETARequest;
- (void)_clearTimer;
- (void)setEtaState:(int)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (id)init;

@end
