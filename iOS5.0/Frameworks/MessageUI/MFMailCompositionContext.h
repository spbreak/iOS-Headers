/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MFGenericAttachmentStore, NSArray, NSString;

@interface MFMailCompositionContext : NSObject
{
    NSString *_sendingAddress;
    NSString *_subject;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_messageBody;
    MFGenericAttachmentStore *_attachments;
    struct {
        unsigned int showKeyboardImmediately:1;
    } _composeFlags;
}

+ (id)MFMailCompositionContextWithURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initNewMessageWithURL:(id)arg1;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (void)dealloc;
- (id)messageBody;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
@property(nonatomic) BOOL showKeyboardImmediately;
@property(readonly, nonatomic) MFGenericAttachmentStore *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSArray *bccRecipients; // @synthesize bccRecipients=_bccRecipients;
@property(copy, nonatomic) NSArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
@property(copy, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
@property(copy, nonatomic) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;

@end
