/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "XPCClientDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, XPCClient;

@interface WPDeviceScanner : NSObject <XPCClientDelegate>
{
    id <WPDeviceScannerDelegate> _delegate;
    XPCClient *_xpcClient;
    int _state;
    NSMutableArray *_liveDevices;
    NSMutableDictionary *_activeScans;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *activeScans; // @synthesize activeScans=_activeScans;
@property(retain, nonatomic) NSMutableArray *liveDevices; // @synthesize liveDevices=_liveDevices;
@property int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)timerFinished:(id)arg1;
- (void)messageArrived:(id)arg1;
- (void)connectionDied;
- (void)connectionInterrupted;
- (void)postDevices:(id)arg1;
- (void)postDevice:(id)arg1;
- (void)changeState:(int)arg1;
- (void)unregisterAllDeviceChanges;
- (void)unregisterForDevices:(id)arg1;
- (void)registerForDevicesMatching:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end

