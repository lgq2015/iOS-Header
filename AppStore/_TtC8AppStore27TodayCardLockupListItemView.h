//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, _TtC11AppStoreKit6Action, _TtC8AppStore11ArtworkView, _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore27TodayCardLockupListItemView : UIControl
{
    // Error parsing type: , name: artworkView
    // Error parsing type: , name: label
    // Error parsing type: , name: displaysLabel
    // Error parsing type: , name: clickAction
    // Error parsing type: , name: clickSender
}

+ (long long)lockupListLockupLimit;
+ (struct CGSize)iconArtworkSize;
- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic) _Bool isAccessibilityElement;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic, copy) id clickSender; // @synthesize clickSender;
@property(nonatomic, retain) _TtC11AppStoreKit6Action *clickAction; // @synthesize clickAction;
@property(nonatomic) _Bool displaysLabel; // @synthesize displaysLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *label; // @synthesize label;
@property(nonatomic, readonly) _TtC8AppStore11ArtworkView *artworkView; // @synthesize artworkView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

