//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ODRDownloadRequest.h"

@interface ODRLocalRequest : ODRDownloadRequest
{
}

- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 refreshHandler:(CDUnknownBlockType)arg2;
- (void)prefetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 destinationPath:(id)arg2 applicationBundleID:(id)arg3;

@end
