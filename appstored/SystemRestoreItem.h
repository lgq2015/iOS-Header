//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SystemRestoreItem : NSObject
{
    NSString *_bundleID;
    long long _jobID;
}

@property(readonly, nonatomic) long long jobID; // @synthesize jobID=_jobID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)initWithJobID:(long long)arg1;

@end

