/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMutableSet.h"

@class NSManagedObject, NSString;

@interface _NSNotifyingWrapperMutableSet : NSMutableSet
{
    NSManagedObject *_container;
    NSString *_key;
    NSMutableSet *_mutableSet;
}

- (void)dealloc;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)allObjects;
- (id)anyObject;
- (BOOL)containsObject:(id)arg1;
- (BOOL)isEqualToSet:(id)arg1;
- (void)getObjects:(id *)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (unsigned int)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)objectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;

@end

