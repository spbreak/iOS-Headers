/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol AirPlayControllerSync
- (int)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3;
- (id)getProperty:(id)arg1 qualifier:(id)arg2 status:(int *)arg3;
- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3;
- (int)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id *)arg4;
@end

