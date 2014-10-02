//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PDPostMigrationContext : NSObject
{
    NSMutableArray *_databasePopulationOperations;
    NSMutableArray *_postMigrationOperations;
}

- (void)performPostMigrationOperations;
- (void)performDatabasePopulationOperationsWithLocalPasses:(id)arg1;
- (BOOL)hasDatabasePopulationOperations;
- (void)addPostMigrationOperation:(CDUnknownBlockType)arg1;
- (void)addDatabasePopulationOperation:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
