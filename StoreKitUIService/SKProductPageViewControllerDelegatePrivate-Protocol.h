//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKProductPageViewControllerDelegate-Protocol.h"

@class ISDialog, SKProductPageViewController, SKStorePageRequest, UIViewController;

@protocol SKProductPageViewControllerDelegatePrivate <SKProductPageViewControllerDelegate>

@optional
- (void)productPage:(SKProductPageViewController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)productPage:(SKProductPageViewController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)productPage:(SKProductPageViewController *)arg1 setStatusBarStyle:(long long)arg2 animated:(_Bool)arg3;
- (void)productPage:(SKProductPageViewController *)arg1 setStatusBarHidden:(_Bool)arg2 withAnimation:(long long)arg3;
- (void)productPage:(SKProductPageViewController *)arg1 presentProductPageWithRequest:(SKStorePageRequest *)arg2 animated:(_Bool)arg3;
- (void)productPage:(SKProductPageViewController *)arg1 presentAlertForDialog:(ISDialog *)arg2;
@end

