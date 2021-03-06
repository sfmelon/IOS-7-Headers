/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PUPhotoSelectionManagerDelegate.h"

@class NSObject<PLAlbumProtocol>, NSOrderedSet, NSPointerArray, NSString, PUPhotoSelectionManager;

@interface PUSessionInfo : NSObject <PUPhotoSelectionManagerDelegate>
{
    NSPointerArray *_observers;
    BOOL _selectingAssets;
    BOOL _selectingTargetAlbum;
    BOOL _targetAlbumIsNewLocalAlbum;
    int _status;
    PUPhotoSelectionManager *_photoSelectionManager;
    struct NSObject *_sourceAlbum;
    NSOrderedSet *_transferredAssets;
    struct NSObject *_targetAlbum;
    NSString *_localizedPrompt;
    int _promptLocation;
    id _bannerGenerator;
}

@property(copy, nonatomic) id bannerGenerator; // @synthesize bannerGenerator=_bannerGenerator;
@property(nonatomic) int promptLocation; // @synthesize promptLocation=_promptLocation;
@property(copy, nonatomic) NSString *localizedPrompt; // @synthesize localizedPrompt=_localizedPrompt;
@property(nonatomic) BOOL targetAlbumIsNewLocalAlbum; // @synthesize targetAlbumIsNewLocalAlbum=_targetAlbumIsNewLocalAlbum;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *targetAlbum; // @synthesize targetAlbum=_targetAlbum;
@property(copy, nonatomic) NSOrderedSet *transferredAssets; // @synthesize transferredAssets=_transferredAssets;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *sourceAlbum; // @synthesize sourceAlbum=_sourceAlbum;
@property(retain, nonatomic) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;
@property(readonly, nonatomic, getter=isSelectingTargetAlbum) BOOL selectingTargetAlbum; // @synthesize selectingTargetAlbum=_selectingTargetAlbum;
@property(readonly, nonatomic, getter=isSelectingAssets) BOOL selectingAssets; // @synthesize selectingAssets=_selectingAssets;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)photoSelectionManagerSelectionDidChange:(id)arg1;
- (void)_enumerateObserversWithBlock:(id)arg1;
- (void)removeSessionInfoObserver:(id)arg1;
- (void)addSessionInfoObserver:(id)arg1;
- (id)init;

@end

