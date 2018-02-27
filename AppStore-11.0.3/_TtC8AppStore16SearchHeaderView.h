//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, _TtC8AppStore15TitleHeaderView, _TtC8AppStore21PaletteBackgroundView, _TtC8AppStore9SearchBar;

@interface _TtC8AppStore16SearchHeaderView : UIView
{
    // Error parsing type: , name: state
    // Error parsing type: , name: isSearchFieldActive
    // Error parsing type: , name: title
    // Error parsing type: , name: searchBar
    // Error parsing type: , name: actionButton
    // Error parsing type: , name: filterButton
    // Error parsing type: , name: showingDoneButton
    // Error parsing type: , name: dividerView
    // Error parsing type: , name: effectView
    // Error parsing type: , name: delegate
    // Error parsing type: , name: pageTraits
    // Error parsing type: , name: useBoldActionFont
}

+ (id)searchTitle;
+ (double)animationDuration;
+ (id)buttonColor;
+ (double)horizontalSpacing;
+ (id)reuseIdentifier;
+ (double)maxSearchBarWidth;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)becomeFirstResponder;
@property(nonatomic) _Bool isFilterButtonEnabled;
- (void)filterButtonTapped;
- (void)cancelButtonClicked;
- (void)clearButtonClickedWithSearchBar:(id)arg1;
- (void)termChangedTo:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (unsigned long long)animationOptionsFor:(id)arg1;
- (void)layoutFilterButtonWithAnimated:(_Bool)arg1;
- (void)layoutActionButtonWithAnimated:(_Bool)arg1;
- (void)layoutSearchBarWithAnimated:(_Bool)arg1;
- (void)layoutTitleWithAnimated:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool useBoldActionFont; // @synthesize useBoldActionFont;
@property(nonatomic, readonly) double activeSearchViewHeight;
@property(nonatomic, readonly) double searchViewHeight;
@property(nonatomic, readonly) struct CGRect readableLayoutFrame;
@property(nonatomic, readonly) _TtC8AppStore21PaletteBackgroundView *effectView; // @synthesize effectView;
@property(nonatomic) _Bool showingDoneButton; // @synthesize showingDoneButton;
@property(nonatomic, readonly) UIButton *actionButton; // @synthesize actionButton;
@property(nonatomic, readonly) _TtC8AppStore9SearchBar *searchBar; // @synthesize searchBar;
@property(nonatomic, readonly) _TtC8AppStore15TitleHeaderView *title; // @synthesize title;

@end

