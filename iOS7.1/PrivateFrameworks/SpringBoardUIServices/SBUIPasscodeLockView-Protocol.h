//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@protocol SBUIPasscodeLockView <NSObject>
@property(nonatomic) unsigned int biometricMatchMode;
@property(retain, nonatomic) id <SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider;
@property(retain, nonatomic) UIColor *customBackgroundColor;
@property(nonatomic) float backgroundAlpha;
@property(nonatomic) BOOL showsEmergencyCallButton;
@property(nonatomic) BOOL showsStatusField;
@property(nonatomic) BOOL playsKeypadSounds;
@property(readonly, nonatomic) NSString *passcode;
@property(readonly, nonatomic) int style;
@property(nonatomic) id <SBUIPasscodeLockViewDelegate> delegate;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(BOOL)arg1;
- (void)reset;
- (void)resetForFailedPasscode;
@end
