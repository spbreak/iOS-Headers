//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SBControlCenterStatusUpdate : NSObject
{
    int _type;
    NSString *_reason;
    NSArray *_statusStrings;
}

+ (id)statusUpdateWithString:(id)arg1 reason:(id)arg2;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *statusStrings; // @synthesize statusStrings=_statusStrings;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)popStatusString;
- (void)addStatusString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

