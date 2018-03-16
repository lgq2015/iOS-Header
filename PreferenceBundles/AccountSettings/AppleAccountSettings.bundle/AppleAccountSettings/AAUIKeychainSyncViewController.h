//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSArray, NSMutableArray, NSString, PSSpecifier;

@interface AAUIKeychainSyncViewController : PSListController
{
    PSSpecifier *_switchCellSpecifier;
    NSMutableArray *_approvalSpecifiers;
    NSArray *_advancedSettingSpecifiers;
    int _keychainSyncStatus;
    int _keychainSyncNotificationToken;
    int _keychainViewNotificationToken;
    _Bool _isTogglingKeychainSync;
    NSString *_pendingApprovalText;
    id _restrictionChangeNotificationObserver;
}

- (void).cxx_destruct;
- (void)_stopListeningForKeychainSyncStatusChangeNotification;
- (void)_registerForKeychainSyncStatusChangeNotification;
- (void)_keychainSyncStatusDidChange;
- (void)_reloadParentSpecifier;
- (void)_handleKeychainSyncDisablingCompletionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_handleKeychainSyncEnablingCompletionWithNewState:(int)arg1 error:(id)arg2;
- (void)_showResetKeychainDialog:(id)arg1;
- (void)_showApproveWithSecurityCodeDialog:(id)arg1;
- (void)_setKeychainSyncEnabled:(id)arg1 withSpecifier:(id)arg2;
- (id)_isKeychainSyncEnabledForSpecifier:(id)arg1;
- (id)_specifierForKeychainSwitchCell;
- (id)_pendingApprovalTextWithSecureBackupEnabled:(_Bool)arg1;
- (id)_specifierForResetKeychainButton;
- (id)_specifierForApproveButton;
- (id)_specifierForPendingApprovalTextWithSecureBackupEnabled:(_Bool)arg1;
- (void)_addApprovalPendingSpecifierIfNecessary;
- (id)_advancedSettingsSpecifiers;
- (id)specifiers;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_updateKeychainSyncStatusAndReloadSpecifiers:(_Bool)arg1;
- (int)_keychainSyncStatus;
- (void)handleURL:(id)arg1;
- (void)dealloc;

@end

