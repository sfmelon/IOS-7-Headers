/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SKUIItemCollectionDelegate.h"
#import "SKUISearchRelatedViewDelegate.h"
#import "SKUISearchResultGroupControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableDictionary, NSString, SKUIClientContext, SKUIItemCollectionController, SKUIMetricsController, SKUISearchPage, SKUISearchRelatedView, SKUISearchResultGroupController, UICollectionView;

@interface SKUIIPhoneSearchViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, SKUISearchResultGroupControllerDelegate, SKUIItemCollectionDelegate, SKUISearchRelatedViewDelegate>
{
    SKUIClientContext *_clientContext;
    UICollectionView *_collectionView;
    id <SKUISearchChildViewControllerDelegate> _delegate;
    SKUIItemCollectionController *_itemCollectionController;
    NSMutableDictionary *_indexesByItemIndex;
    NSMutableDictionary *_itemIndexesByIndex;
    SKUIMetricsController *_metricsController;
    NSString *_previousRelatedSearchTerm;
    SKUISearchRelatedView *_relatedView;
    SKUISearchPage *_searchPage;
    SKUISearchResultGroupController *_searchResultGroupController;
}

@property(readonly, nonatomic) NSString *previousRelatedSearchTerm; // @synthesize previousRelatedSearchTerm=_previousRelatedSearchTerm;
@property(readonly, nonatomic) SKUISearchPage *searchPage; // @synthesize searchPage=_searchPage;
@property(retain, nonatomic) SKUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(nonatomic) __weak id <SKUISearchChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (int)_itemIndexForIndex:(int)arg1;
- (int)_indexForItemIndex:(int)arg1;
- (id)_visibleMetricsImpressionsDictionary;
- (void)_reloadView;
- (void)_reloadScreenshotHeight;
- (void)_recordClickEventForItemOffer:(id)arg1 atIndexPath:(id)arg2;
- (void)_recordClickEventForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)_recordClickEventForEditorial:(id)arg1 atIndexPath:(id)arg2;
- (void)_recordClickEvent:(id)arg1 withCell:(id)arg2;
- (id)_itemCollectionController;
- (void)_addImpressionWithItemID:(long long)arg1 type:(id)arg2 index:(int)arg3;
- (void)_noResultsAction:(id)arg1;
- (void)searchRelatedViewDidSelectBackButton:(id)arg1;
- (void)searchRelatedView:(id)arg1 didSelectRelatedQueryAtIndex:(int)arg2;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)arg1;
- (void)itemCollectionController:(id)arg1 applyScreenshotImage:(id)arg2 toCellLayout:(id)arg3;
- (struct _NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;
- (BOOL)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1;
- (id)itemCollectionController:(id)arg1 screenshotForItem:(id)arg2;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(int)arg2;
- (void)searchResultGroupController:(id)arg1 didLoadArtworkAtIndex:(unsigned int)arg2;
- (void)searchResultGroupController:(id)arg1 didLoadEntityAtIndex:(unsigned int)arg2;
- (id)contentScrollView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)setSearchPage:(id)arg1 previousRelatedSearchTerm:(id)arg2;
- (void)scrollToTop;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
