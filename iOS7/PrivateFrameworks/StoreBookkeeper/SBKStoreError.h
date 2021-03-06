/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSError.h"

@class NSString, SBKTransaction;

// Not exported
@interface SBKStoreError : NSError
{
    SBKTransaction *_transaction;
}

@property(retain) SBKTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
@property(readonly) double retrySeconds;
@property(readonly) NSString *currentStoreAccountName;
@property(readonly) NSString *previousStoreAccountName;
@property(readonly) _Bool isTransactionMissingInformationError;
@property(readonly) _Bool isTransactionCancelledError;
@property(readonly) _Bool isClampError;
@property(readonly) _Bool isRecoverableError;
@property(readonly) _Bool isAccountsChangedError;
@property(readonly) _Bool isAuthenticationError;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

