//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreKit-1103/ASKLoadResourceOperation.h>

@class NSArray, NSString;

@interface ASKLoadBundleResourceOperation : ASKLoadResourceOperation
{
    NSString *_resourceName;
    NSArray *_searchBundles;
}

@property(readonly, copy, nonatomic) NSArray *searchBundles; // @synthesize searchBundles=_searchBundles;
@property(readonly, copy, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
- (void).cxx_destruct;
- (void)main;
- (id)initWithResourceName:(id)arg1 searchBundles:(id)arg2;

@end

