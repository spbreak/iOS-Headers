/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression
{
    int _fontStyle;
}

@property(readonly, nonatomic) int fontStyle; // @synthesize fontStyle=_fontStyle;
- (BOOL)canFormWordStartingWithExpression:(id)arg1;
- (BOOL)isNaturalSuperscript;
- (BOOL)_isPrime;
- (BOOL)isNumber;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 isPartOfWord:(BOOL)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
