//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString;

@interface _TtC8AppStore14EmptyStateView : UICollectionReusableView
{
    // Error parsing type: , name: divider
    // Error parsing type: , name: descriptionTextSpace
    // Error parsing type: , name: title
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: descriptionText
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: hasDivider
}

+ (struct CGSize)sizeWithFitting:(struct CGSize)arg1 title:(id)arg2 description:(id)arg3 hasDivider:(_Bool)arg4 traitCollection:(id)arg5;
+ (id)supplementaryViewKind;
- (CDUnknownBlockType).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 description:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool hasDivider; // @synthesize hasDivider;
@property(nonatomic, copy) NSString *descriptionText; // @synthesize descriptionText;
@property(nonatomic, copy) NSString *title; // @synthesize title;

@end

