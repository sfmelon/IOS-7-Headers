/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class TPBackgroundRoundedRectView, TPPathView, UIColor;

@interface TPRevealingRingView : UIView
{
    BOOL _revealed;
    TPBackgroundRoundedRectView *_outerView;
    TPPathView *_outerGammaView;
    TPPathView *_innerGammaView;
    TPPathView *_innerView;
    UIColor *_colorOutsideRing;
    UIColor *_colorInsideRing;
    struct UIEdgeInsets _paddingOutsideRing;
    float _defaultRingStrokeWidth;
    float _gammaBoost;
    float _revealAnimationDuration;
    float _unrevealAnimationDuration;
    float _minimumRevealingScale;
    float _cornerRadius;
    int _animationStyle;
    BOOL _isCircularRing;
    BOOL _innerGammaAlpha;
    BOOL _gammaBoostOuterRing;
    BOOL _gammaBoostInside;
    float _alphaInsideRing;
    float _alphaOutsideRing;
}

@property(nonatomic) BOOL gammaBoostInside; // @synthesize gammaBoostInside=_gammaBoostInside;
@property(nonatomic) BOOL gammaBoostOuterRing; // @synthesize gammaBoostOuterRing=_gammaBoostOuterRing;
@property(nonatomic) int animationStyle; // @synthesize animationStyle=_animationStyle;
@property(retain, nonatomic) UIColor *colorInsideRing; // @synthesize colorInsideRing=_colorInsideRing;
@property(retain, nonatomic) UIColor *colorOutsideRing; // @synthesize colorOutsideRing=_colorOutsideRing;
@property(nonatomic) float minimumRevealingScale; // @synthesize minimumRevealingScale=_minimumRevealingScale;
@property(nonatomic) float unrevealAnimationDuration; // @synthesize unrevealAnimationDuration=_unrevealAnimationDuration;
@property(nonatomic) float revealAnimationDuration; // @synthesize revealAnimationDuration=_revealAnimationDuration;
@property(nonatomic) float gammaBoost; // @synthesize gammaBoost=_gammaBoost;
@property(nonatomic) float defaultRingStrokeWidth; // @synthesize defaultRingStrokeWidth=_defaultRingStrokeWidth;
@property(readonly, nonatomic) struct UIEdgeInsets paddingOutsideRing; // @synthesize paddingOutsideRing=_paddingOutsideRing;
@property(nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) float alphaOutsideRing; // @synthesize alphaOutsideRing=_alphaOutsideRing;
@property(nonatomic) float alphaInsideRing; // @synthesize alphaInsideRing=_alphaInsideRing;
- (void)_animateForReveal:(BOOL)arg1 withDuration:(float)arg2 delay:(double)arg3;
- (id)_bezierPathForRect:(struct CGRect)arg1 cornerRadius:(float)arg2;
- (BOOL)_shouldDrawAsCircle:(struct CGSize)arg1 cornerRadius:(float)arg2;
- (BOOL)_isSquare:(struct CGSize)arg1;
- (void)_evaluateCircularness;
- (void)_setInnerGammaScale:(float)arg1;
- (void)_setOuterGammaScale:(float)arg1;
- (void)_setInnerCircleScale:(float)arg1;
- (void)_calculateOuter:(struct CGRect *)arg1 inner:(struct CGRect *)arg2 newXOffset:(float *)arg3 newYOffset:(float *)arg4 withScale:(float)arg5;
- (void)_adjustGammaBoostIfNecessary;
- (void)layoutSubviews;
- (void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 delay:(double)arg3;
- (void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)setPaddingOutsideRing:(struct UIEdgeInsets)arg1;
- (void)setRingGammaBoost:(float)arg1;
@property(readonly, nonatomic) struct CGSize ringSize; // @dynamic ringSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 paddingOutsideRing:(struct UIEdgeInsets)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
