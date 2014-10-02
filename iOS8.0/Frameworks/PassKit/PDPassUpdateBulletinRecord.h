//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate, NSMutableSet, NSString, PKDiff;

@interface PDPassUpdateBulletinRecord : NSObject <NSSecureCoding>
{
    NSMutableSet *_diffs;
    PKDiff *_seedDiff;
    NSDate *_date;
    NSString *_recordID;
}

+ (BOOL)supportsSecureCoding;
+ (id)passUpdateBulletinRecordWithDiff:(id)arg1;
@property(readonly, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) PKDiff *seedDiff; // @synthesize seedDiff=_seedDiff;
- (void)_removeDiffs:(id)arg1;
@property(readonly, nonatomic) NSArray *passUniqueIDs;
@property(readonly, nonatomic) BOOL hasDiffs;
- (BOOL)removeDiffsForPassUniqueID:(id)arg1;
- (BOOL)removeDiffsConflictingWithDiff:(id)arg1;
- (BOOL)addDiff:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDiff:(id)arg1;
- (id)init;

@end
