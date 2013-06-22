/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface TIUserDictionaryController : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    BOOL _shouldImportWords;
    NSArray *_cachedAllWords;
}

+ (id)wordKeyPairs;
+ (id)sharedInstance;
+ (id)legacyImportFilePaths;
+ (id)legacyImportWordKeyPairsFromFiles:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)importSampleShortcuts;
- (id)allWords;
- (id)allWordsAsWordKeyPairs;
- (id)emptyWord;
- (void)deleteWord:(id)arg1;
- (BOOL)save;
- (void)saveWordKeyPairsToFile;
- (void)rollback;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)importLegacyEntries;
@property(readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void)updateNilShortcuts;
@property(retain) NSArray *cachedAllWords; // @synthesize cachedAllWords=_cachedAllWords;
@property BOOL shouldImportWords; // @synthesize shouldImportWords=_shouldImportWords;

@end
