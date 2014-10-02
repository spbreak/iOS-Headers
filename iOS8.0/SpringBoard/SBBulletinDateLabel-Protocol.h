//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSTimeZone;

@protocol SBBulletinDateLabel <NSObject>
@property(nonatomic) _Bool isTimestamp;
@property(nonatomic) int labelType;
@property(nonatomic) id <SBDateLabelDelegate> delegate;
@property(nonatomic, getter=isAllDay) _Bool allDay;
- (void)prepareForReuse;
- (void)stopCoalescingUpdates;
- (void)startCoalescingUpdates;
- (void)setEndDate:(NSDate *)arg1 withTimeZone:(NSTimeZone *)arg2;
- (void)setStartDate:(NSDate *)arg1 withTimeZone:(NSTimeZone *)arg2;
@end
