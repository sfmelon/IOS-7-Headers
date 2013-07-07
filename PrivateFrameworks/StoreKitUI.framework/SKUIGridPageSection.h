/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIArtworkRequestDelegate.h"
#import "SKUIItemStateCenterObserver.h"
#import "SKUIMissingItemDelegate.h"
#import "SKUIProductPageOverlayDelegate.h"

@class NSMapTable, NSMutableIndexSet, NSString, SKUIClientContext, SKUIGridComponent, SKUIItemArtworkContext, SKUIMissingItemLoader, SKUIProductPageOverlayController;

@interface SKUIGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate>
{
    NSMapTable *_artworkRequests;
    SKUIClientContext *_clientContext;
    NSMapTable *_editorialLayouts;
    NSMutableIndexSet *_hiddenIconIndexSet;
    BOOL _isLandscape;
    BOOL _isPad;
    SKUIMissingItemLoader *_missingItemLoader;
    NSString *_moreButtonTitle;
    int _numberOfColumns;
    SKUIProductPageOverlayController *_overlayController;
    int _overlaySourceItemIndex;
    int _screenScale;
    NSMapTable *_lockupArtworkContexts;
    SKUIItemArtworkContext *_itemArtworkContext;
}

- (void).cxx_destruct;
- (void)_setPositionForClickEvent:(id)arg1 withElementIndex:(int)arg2;
- (void)_reloadLockupCell:(id)arg1 withLockup:(id)arg2 index:(int)arg3;
- (void)_reloadItemCell:(id)arg1 withLockup:(id)arg2 index:(int)arg3;
- (id)_popSourceViewForOverlayController:(id)arg1;
- (id)_missingItemLoader;
- (id)_lockupCellWithLockups:(id)arg1 indexPath:(id)arg2;
- (void)_loadMissingItemsFromIndex:(int)arg1 withReason:(int)arg2;
- (void)_loadImageForItem:(id)arg1 lockupSize:(int)arg2 loader:(id)arg3 reason:(int)arg4;
- (id)_itemForIndex:(int)arg1;
- (id)_itemCellWithLockups:(id)arg1 indexPath:(id)arg2;
- (float)_heightForEditorialLockup:(id)arg1;
- (void)_enumateVisibleItemsWithBlock:(id)arg1;
- (void)_enumerateItemsFromStartIndex:(int)arg1 withBlock:(id)arg2;
- (id)_editorialLayoutForComponent:(id)arg1;
- (id)_cellImageForItem:(id)arg1 lockupSize:(int)arg2;
- (id)_artworkContextForLockupSize:(int)arg1;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)prefetchResourcesWithReason:(int)arg1;
- (int)numberOfCells;
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(int)arg3;
- (int)coloringOffset;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(int)arg3;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIGridComponent *pageComponent; // @dynamic pageComponent;

@end
