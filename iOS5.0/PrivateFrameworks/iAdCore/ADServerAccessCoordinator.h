/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSTimer;

@interface ADServerAccessCoordinator : NSObject
{
    BOOL _allowsRequests;
    BOOL _networkAvailable;
    BOOL _serverReachable;
    double _currentBackoffIntervalExponent;
    NSString *_serverHost;
    NSTimer *_retryTimer;
    const struct __SCNetworkReachability *_reachability;
    double _lastReachabilityUpdateTime;
}

+ (id)serverAccessCoordinatorForURL:(id)arg1;
@property(nonatomic) double lastReachabilityUpdateTime; // @synthesize lastReachabilityUpdateTime=_lastReachabilityUpdateTime;
@property(readonly, nonatomic) struct __SCNetworkReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(copy, nonatomic) NSString *serverHost; // @synthesize serverHost=_serverHost;
@property(readonly, nonatomic) double currentBackoffIntervalExponent; // @synthesize currentBackoffIntervalExponent=_currentBackoffIntervalExponent;
@property(readonly, nonatomic) BOOL serverReachable; // @synthesize serverReachable=_serverReachable;
@property(readonly, nonatomic) BOOL networkAvailable; // @synthesize networkAvailable=_networkAvailable;
@property(nonatomic) BOOL allowsRequests; // @synthesize allowsRequests=_allowsRequests;
- (void)stopReachability;
- (void)startReachability;
- (void)setServerReachable:(BOOL)arg1;
- (id)serverError;
- (void)retryTimerDidFire:(id)arg1;
@property(readonly, nonatomic) double nextBackoffInterval;
- (void)_recalculate;
- (void)connectionDidSucceed;
- (void)reset;
- (void)errorDidOccur:(int)arg1;
- (id)init;
- (void)dealloc;

@end

