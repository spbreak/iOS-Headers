/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString;

@interface GMMTransitAgency : PBCodable
{
    NSString *_name;
    NSString *_mainUrl;
    NSString *_phone;
}

@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *mainUrl; // @synthesize mainUrl=_mainUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPhone;
@property(readonly, nonatomic) BOOL hasMainUrl;
- (void)dealloc;

@end
