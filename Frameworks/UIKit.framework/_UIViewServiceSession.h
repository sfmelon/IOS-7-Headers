/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "_UIViewServiceDeputyDelegate.h"
#import "_UIViewServiceSession_HostInterface.h"
#import "_UIViewServiceViewControllerOperatorDelegate.h"

@class NSLock, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSXPCConnection, _UIAsyncInvocation;

__attribute__((visibility("hidden")))
@interface _UIViewServiceSession : NSObject <_UIViewServiceDeputyDelegate, _UIViewServiceViewControllerOperatorDelegate, _UIViewServiceSession_HostInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSMutableDictionary *_connectionHandlers;
    NSLock *_connectionHandlersLock;
    _UIAsyncInvocation *_invalidationInvocation;
    NSMutableSet *_deputies;
    id _terminationHandler;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1;
+ (id)sessionWithConnection:(id)arg1;
@property(copy, nonatomic) id terminationHandler; // @synthesize terminationHandler=_terminationHandler;
- (void)__requestConnectionToDeputyOfType:(id)arg1 withReplyHandler:(id)arg2;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;
- (void)deputy:(id)arg1 didFailWithError:(id)arg2;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (void)checkDeputyForRotation:(id)arg1;
- (void)unregisterDeputyClass:(Class)arg1;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(byref id)arg2 replyHandler:(id)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(id)arg2;
- (Class)_deputyClassForConnectionSelector:(SEL)arg1;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

@end
