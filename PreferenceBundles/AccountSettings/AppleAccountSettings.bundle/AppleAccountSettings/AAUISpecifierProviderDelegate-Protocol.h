//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIViewController;
@protocol AAUISpecifierProvider;

@protocol AAUISpecifierProviderDelegate <NSObject>
- (void)showViewController:(UIViewController *)arg1 sender:(id)arg2;
- (void)reloadSpecifiersForProvider:(id <AAUISpecifierProvider>)arg1 oldSpecifiers:(NSArray *)arg2 animated:(_Bool)arg3;
@end

