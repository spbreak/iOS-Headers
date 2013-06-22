/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SQLiteEntity.h"

@interface CardType : SQLiteEntity
{
}

+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;
+ (id)_teamIdentifierPredicate:(id)arg1;
+ (id)_identifierPredicate:(id)arg1;
+ (id)insertCardTypeWithIdentifier:(id)arg1 teamIdentifier:(id)arg2 inDatabase:(id)arg3;
+ (id)_insertionDictionaryWithIdentifier:(id)arg1 teamIdentifier:(id)arg2;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)databaseTable;
- (void)updateFrequencyScore:(double)arg1;
- (void)updateLastUpdateDate:(id)arg1;
- (void)updateLastPushDate:(id)arg1;
- (id)passTypeIdentifier;
- (double)frequencyScore;
- (id)lastUpdateDate;
- (id)lastPushDate;
- (id)initWithIdentifier:(id)arg1 teamIdentifier:(id)arg2 inDatabase:(id)arg3;

@end
