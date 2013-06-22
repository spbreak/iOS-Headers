/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DAPriorityManager : NSObject
{
    struct __CFDictionary *_clientsToPriorityRequests;
    int _foregroundDataclasses;
    int _currentPriority;
}

+ (id)sharedManager;
+ (void)vendPriorityManagers;
@property(readonly) int currentPriority; // @synthesize currentPriority=_currentPriority;
@property(readonly) struct __CFDictionary *clientsToPriorityRequests; // @synthesize clientsToPriorityRequests=_clientsToPriorityRequests;
- (void)bumpDataclassesToUIPriority:(int)arg1;
- (void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(int)arg3;
- (void)_setNewPriority;
- (int)_recalculatePriority;
- (id)stateString;
- (void)_setForegroundDataclasses:(int)arg1;
- (void)dealloc;
- (id)init;
- (void)_SBApplicationStateChanged:(id)arg1;
- (id)_appIDsToDataclasses;

@end
