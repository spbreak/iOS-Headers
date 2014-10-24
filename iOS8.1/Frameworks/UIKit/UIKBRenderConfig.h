//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface UIKBRenderConfig : NSObject <NSCopying>
{
    BOOL _lightKeyboard;
    float _blurRadius;
    float _blurSaturation;
    float _keycapOpacity;
    float _lightKeycapOpacity;
}

+ (int)backdropStyleForStyle:(int)arg1;
+ (id)configForAppearance:(int)arg1;
+ (id)darkConfig;
+ (id)defaultConfig;
@property(nonatomic) BOOL lightKeyboard; // @synthesize lightKeyboard=_lightKeyboard;
@property(nonatomic) float lightKeycapOpacity; // @synthesize lightKeycapOpacity=_lightKeycapOpacity;
@property(nonatomic) float keycapOpacity; // @synthesize keycapOpacity=_keycapOpacity;
@property(nonatomic) float blurSaturation; // @synthesize blurSaturation=_blurSaturation;
@property(nonatomic) float blurRadius; // @synthesize blurRadius=_blurRadius;
@property(readonly, nonatomic) int backdropStyle;
@property(readonly, nonatomic) BOOL whiteText;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end
