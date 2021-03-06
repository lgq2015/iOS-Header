//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AKAppleIDAuthenticationContext, NSData, NSURLRequest;

@protocol AKURLRequestProvider <NSObject>
@property(readonly, nonatomic) AKAppleIDAuthenticationContext *context;
- (unsigned long long)expectedResponseType;
- (_Bool)validateResponseData:(NSData *)arg1 error:(id *)arg2;
- (NSURLRequest *)buildRequest:(id *)arg1;
@end

