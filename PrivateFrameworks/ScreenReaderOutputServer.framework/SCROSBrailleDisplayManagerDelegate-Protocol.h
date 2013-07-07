/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol SCROSBrailleDisplayManagerDelegate <NSObject>
- (void)handleDisplayModeChanged:(id)arg1;
- (void)handleBrailleTableFailedToLoad:(id)arg1;
- (void)handleBrailleDidShowNextAnnouncement:(id)arg1;
- (void)handleBrailleDidShowPreviousAnnouncement:(id)arg1;
- (void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBrailleDidDisplay:(id)arg1;
- (void)handleBrailleKeyMemorize:(id)arg1;
- (void)handleBrailleKeyWillMemorize:(id)arg1;
- (void)handleBrailleKeypress:(id)arg1;
- (void)handleFailedToLoadBluetoothDevice:(id)arg1;
- (void)configurationDidChange;
- (void)handleBrailleDriverDisconnected;
- (void)handleBrailleDriverDidLoad;
@end
