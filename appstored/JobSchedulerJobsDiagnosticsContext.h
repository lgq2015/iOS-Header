//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface JobSchedulerJobsDiagnosticsContext : NSObject
{
    NSMutableArray *_nextItems;
    NSMutableArray *_skippedItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *skippedItems;
@property(readonly, nonatomic) NSArray *nextItems;
- (void)addSkippedItem:(id)arg1;
- (void)addNextItem:(id)arg1;

@end
