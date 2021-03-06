//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TTSSpeechVoice : NSObject
{
    id <TTSSpeechService> _service;
    BOOL _useVoiceBooster;
    BOOL _isDefault;
    BOOL _isCustomVoice;
    NSString *_name;
    NSString *_language;
    NSString *_identifier;
    int _footprint;
    int _gender;
}

@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(nonatomic) BOOL isCustomVoice; // @synthesize isCustomVoice=_isCustomVoice;
@property(readonly, nonatomic) BOOL isDefault; // @synthesize isDefault=_isDefault;
@property(nonatomic) int footprint; // @synthesize footprint=_footprint;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) BOOL useVoiceBooster;
- (void)_initializeVoiceBooster;
- (void)setService:(id)arg1;
- (id)service;
- (void)_routeChange:(id)arg1;
- (id)init;

@end

