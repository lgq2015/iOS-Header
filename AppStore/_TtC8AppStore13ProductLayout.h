//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8AppStore25ShelfDisplayingFlowLayout.h"

@class NSSet;

@interface _TtC8AppStore13ProductLayout : _TtC8AppStore25ShelfDisplayingFlowLayout
{
    // Error parsing type: , name: topBackgroundFrame
    // Error parsing type: , name: bottomBackgroundFrame
    // Error parsing type: , name: pendingPrepareObserver
}

+ (id)bottomBackgroundReusableViewKind;
+ (id)topBackgroundReusableViewKind;
- (CDUnknownBlockType).cxx_destruct;
- (void)observeNextPreparationWith:(CDUnknownBlockType)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, readonly) NSSet *visibleSections;

@end

