//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface MappedPropertyList : NSObject
{
    NSData *_data;
    NSURL *_URL;
}

+ (id)readKeyPaths:(id)arg1 fromURL:(id)arg2 error:(id *)arg3;
+ (id)readKeyPath:(id)arg1 fromURL:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)readKeyPaths:(id)arg1 error:(id *)arg2;
- (id)readKeyPath:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1;

@end

