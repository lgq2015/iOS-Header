//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface Supervisor : NSObject
{
    Supervisor *_parentSupervisor;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
- (id)initWithParentSupervisor:(id)arg1;
- (id)init;

@end

