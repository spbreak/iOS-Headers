/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface UIKBKeyset : NSObject <NSCoding, NSCopying>
{
    NSString *m_name;
    NSMutableArray *m_keylists;
}

+ (id)keyset;
@property(retain, nonatomic) NSMutableArray *keylists; // @synthesize keylists=m_keylists;
@property(retain, nonatomic) NSString *name; // @synthesize name=m_name;
- (id)description;
- (BOOL)addKeylist:(id)arg1;
- (id)keylistWithName:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

