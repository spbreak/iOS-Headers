//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSCH3DResource, TSCH3DTextureResource;

__attribute__((visibility("hidden")))
@interface TSCH3DTexture : NSObject
{
    TSCH3DTextureResource *mTextureResource;
}

- (id)optimizedMipmapBuffer;
- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)arg1;
- (void)resetResource;
@property(readonly, nonatomic) TSCH3DResource *resource; // @dynamic resource;
- (BOOL)hasCompleteData;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

