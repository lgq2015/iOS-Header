//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class _TtC8AppStore11ArtworkView, _TtC8AppStore15SmallLockupView;

@interface _TtC8AppStore26TodayCardLockupOverlayView : UIControl
{
    // Error parsing type: , name: lockupView
    // Error parsing type: , name: dividerView
    // Error parsing type: , name: wantsDividerView
    // Error parsing type: , name: isExpanded
    // Error parsing type: , name: clickActionHandler
}

+ (double)minimumHeight;
- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic, copy) CDUnknownBlockType clickActionHandler; // @synthesize clickActionHandler;
@property(nonatomic) _Bool wantsCardConsistentMargins;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded;
@property(nonatomic, readonly) _TtC8AppStore11ArtworkView *artworkView;
@property(nonatomic, readonly) struct CGSize preferredArtworkSize;
- (void)clickActionHandlerTrampoline;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) _TtC8AppStore15SmallLockupView *lockupView; // @synthesize lockupView;

@end
