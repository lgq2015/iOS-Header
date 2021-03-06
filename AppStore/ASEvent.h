//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface ASEvent : NSObject
{
    NSDictionary *_elements;
    NSDictionary *_timingElements;
    NSDictionary *_commonElements;
    NSDictionary *_relyableUnderlyingDictionary;
}

@property(retain, nonatomic) NSDictionary *relyableUnderlyingDictionary; // @synthesize relyableUnderlyingDictionary=_relyableUnderlyingDictionary;
@property(retain, nonatomic) NSDictionary *commonElements; // @synthesize commonElements=_commonElements;
@property(retain, nonatomic) NSDictionary *timingElements; // @synthesize timingElements=_timingElements;
@property(retain, nonatomic) NSDictionary *elements; // @synthesize elements=_elements;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)pageContext;
- (id)eventType;
- (id)eventDate;
@property(readonly, nonatomic) NSDictionary *rawEvent;
@property(readonly, nonatomic) NSArray *sortedTimingKeys;
@property(readonly, nonatomic) NSArray *sortedCommonKeys;
@property(readonly, nonatomic) NSArray *sortedElementKeys;
- (id)initWithEventDictionary:(id)arg1 termCollater:(id)arg2;

@end

