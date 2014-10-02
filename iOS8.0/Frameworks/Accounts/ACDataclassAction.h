//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface ACDataclassAction : NSObject <NSSecureCoding>
{
    BOOL _isDestructive;
    int _type;
}

+ (id)destructiveActionWithType:(int)arg1;
+ (id)actionWithType:(int)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL isDestructive; // @synthesize isDestructive=_isDestructive;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 destructivity:(BOOL)arg2;

@end
