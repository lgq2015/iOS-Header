//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class _TtC8AppStore11ArtworkView, _TtC8AppStore11OfferButton, _TtC8AppStore16DynamicTypeLabel, _TtC8AppStore17InAppPurchaseView, _TtC8AppStore22InAppPurchaseTiledView;

@interface _TtC8AppStore23InAppPurchaseLockupView : UIView
{
    // Error parsing type: , name: type
    // Error parsing type: , name: iconView
    // Error parsing type: , name: tiledIconView
    // Error parsing type: , name: theme
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: offerButton
}

+ (double)preferredHeightFor:(id)arg1 isInSpotlight:(_Bool)arg2;
+ (double)preferredIconDimension;
+ (double)imageTextMargin;
+ (double)spotlightPadding;
- (CDUnknownBlockType).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) _TtC8AppStore11OfferButton *offerButton; // @synthesize offerButton;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *descriptionLabel; // @synthesize descriptionLabel;
@property(nonatomic, retain) _TtC8AppStore16DynamicTypeLabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic, readonly) _TtC8AppStore11ArtworkView *mainArtworkView;
@property(nonatomic, readonly) _TtC8AppStore22InAppPurchaseTiledView *tiledIconView; // @synthesize tiledIconView;
@property(nonatomic, readonly) _TtC8AppStore17InAppPurchaseView *iconView; // @synthesize iconView;

@end

