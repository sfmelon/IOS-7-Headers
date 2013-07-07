/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol AASetupAssistantDelegateService
- (void)completeSetupWithResponseParameters:(id)arg1 handler:(id)arg2;
- (id)accountSetupRequestParameters;
- (id)delegateServiceIdentifier;

@optional
- (void)completeEnablingCloudServicesWithHandler:(id)arg1;
- (void)setBackupEnabled:(BOOL)arg1 handler:(id)arg2;
- (void)setDeviceLocatorEnabled:(BOOL)arg1;
- (void)setCloudServicesEnabled:(BOOL)arg1 handler:(id)arg2;
- (void)verifyAccountWithAppleID:(id)arg1 handler:(id)arg2;
- (void)setupMailAccount:(id)arg1 password:(id)arg2 handler:(id)arg3;
- (BOOL)needSetupForMailAccount:(id)arg1;
- (BOOL)canAutoSetupMailAccount:(id)arg1;
- (void)setupOperationFailed;
@end
