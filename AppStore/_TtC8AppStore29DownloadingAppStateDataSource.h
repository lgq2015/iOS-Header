//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OS_dispatch_queue, _TtC8AppStore18JobManagerObserver;

@interface _TtC8AppStore29DownloadingAppStateDataSource : NSObject
{
    // Error parsing type: , name: expectedAppStates
    // Error parsing type: , name: loadState
    // Error parsing type: , name: loadedAccessQueue
    // Error parsing type: , name: loadedCallbacks
    // Error parsing type: , name: delegate
    // Error parsing type: , name: accessQueue
    // Error parsing type: , name: jobManagerObserver
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)performAfterLoading:(CDUnknownBlockType)arg1;
- (void)refreshDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)phaseChangedTo:(long long)arg1 forJob:(id)arg2;
- (id)initWithJobManagerObserver:(id)arg1;
@property(nonatomic, readonly) _TtC8AppStore18JobManagerObserver *jobManagerObserver; // @synthesize jobManagerObserver;
@property(nonatomic, readonly) OS_dispatch_queue *accessQueue; // @synthesize accessQueue;

@end
