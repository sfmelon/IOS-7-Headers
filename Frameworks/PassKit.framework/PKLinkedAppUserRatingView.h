/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSMutableArray;

@interface PKLinkedAppUserRatingView : UIView
{
    NSMutableArray *_starViews;
    float _userRating;
}

@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

