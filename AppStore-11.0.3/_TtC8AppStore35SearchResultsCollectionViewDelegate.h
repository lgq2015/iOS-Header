//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC8AppStore24VideoPlaybackCoordinator;

@interface _TtC8AppStore35SearchResultsCollectionViewDelegate : NSObject
{
    // Error parsing type: , name: presenter
    // Error parsing type: , name: storeDataProvider
    // Error parsing type: , name: artworkLoader
    // Error parsing type: , name: artworkIconFetcher
    // Error parsing type: , name: impressionsReporter
    // Error parsing type: , name: advertFrequencyCapper
    // Error parsing type: , name: pageTraits
    // Error parsing type: , name: infiniteScrollCoordinator
    // Error parsing type: , name: videoPlaybackCoordinator
    // Error parsing type: , name: scrollViewDelegateCoordinator
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)hideNextPageLoading;
- (void)showNextPageLoading;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
@property(nonatomic, retain) _TtC8AppStore24VideoPlaybackCoordinator *videoPlaybackCoordinator; // @synthesize videoPlaybackCoordinator;
@property(nonatomic, readonly) _Bool isCompact;
- (long long)backgroundStyleForItemAt:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;

@end

