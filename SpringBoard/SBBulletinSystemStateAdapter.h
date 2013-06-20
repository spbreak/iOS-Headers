/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBApplicationRestrictionObserver-Protocol.h"

@class BBSystemStateProvider;

@interface SBBulletinSystemStateAdapter : NSObject <SBApplicationRestrictionObserver>
{
    BBSystemStateProvider *_stateProvider;
    BOOL _quietModeEnabled;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (void)_lostModeStateChanged;
- (void)_screenDimmed:(id)arg1;
- (void)_lockStateChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end
