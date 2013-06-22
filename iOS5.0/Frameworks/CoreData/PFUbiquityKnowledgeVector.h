/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSDictionary, NSNumber;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding>
{
    NSDictionary *_kv;
    NSNumber *_sum;
    unsigned int _hash;
}

+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1;
+ (id)createKnowledgeVectorDictionaryFromString:(id)arg1;
- (id)init;
- (id)initWithKnowledgeVectorString:(id)arg1;
- (id)initWithKnowledgeVectorDictionary:(id)arg1;
- (id)initWithStoreKnowledgeVectorDictionary:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned int length;
- (void)_updateSum;
- (void)_updateHash;
- (BOOL)isAncestorOfKnowledgeVector:(id)arg1;
- (id)createKnowledgeVectorString;
- (id)transactionNumberForPeerID:(id)arg1;
- (id)allPeerIDs;
- (id)createSetOfAllPeerIDsWithOtherVector:(id)arg1;
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1;
- (id)newKnowledgeVectorBySubtractingVector:(id)arg1;
- (id)createAncestorVectorForConflictingVector:(id)arg1;
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1;
- (BOOL)canMergeWithKnowledgeVector:(id)arg1;
@property(readonly, nonatomic) unsigned int hash; // @synthesize hash=_hash;
@property(readonly, nonatomic) NSNumber *sum; // @synthesize sum=_sum;

@end
