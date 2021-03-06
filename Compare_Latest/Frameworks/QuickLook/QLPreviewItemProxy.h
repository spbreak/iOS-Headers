//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "QLPreviewItem.h"

@class NSString, NSURL, NSUUID;

@interface QLPreviewItemProxy : NSObject <NSSecureCoding, QLPreviewItem>
{
    NSUUID *_uuid;
    NSString *_fileExtensionToken;
    int _fileExtensionHandle;
    int _index;
    BOOL _isPromisedItem;
    NSURL *_url;
    NSString *_title;
    NSURL *_urlForDisplay;
    NSString *_contentType;
    NSString *_password;
    double _autoPlaybackPosition;
}

+ (id)proxyWithPreviewItem:(id)arg1;
+ (id)encodedClasses;
+ (BOOL)supportsSecureCoding;
@property double autoPlaybackPosition; // @synthesize autoPlaybackPosition=_autoPlaybackPosition;
@property BOOL isPromisedItem; // @synthesize isPromisedItem=_isPromisedItem;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property int index; // @synthesize index=_index;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain) NSURL *urlForDisplay; // @synthesize urlForDisplay=_urlForDisplay;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void)consumeFileExtension;
- (void)issueFileExtension;
- (id)previewItemURLForDisplay;
- (id)previewItemContentType;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPreviewItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

