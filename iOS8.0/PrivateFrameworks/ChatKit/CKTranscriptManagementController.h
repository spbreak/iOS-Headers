//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKViewController.h>

#import "CKAttachmentViewControllerDelegate.h"
#import "CKTranscriptManagementNameFieldDelegate.h"
#import "FMFMapViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CKAttachmentViewController, CKConversation, CKTranscriptManagementNameField, CKTranscriptManagementView, FMFMapViewController, NSString;

@interface CKTranscriptManagementController : CKViewController <FMFMapViewControllerDelegate, CKAttachmentViewControllerDelegate, CKTranscriptManagementNameFieldDelegate, UIGestureRecognizerDelegate>
{
    BOOL _mapHidden;
    BOOL _initialLoad;
    BOOL _removeMapViewAfterScrollAnimation;
    CKConversation *_conversation;
    FMFMapViewController *_mapController;
    CKTranscriptManagementView *_managementView;
    CKAttachmentViewController *_attachmentsController;
    CKTranscriptManagementNameField *_nameField;
}

@property(nonatomic) BOOL removeMapViewAfterScrollAnimation; // @synthesize removeMapViewAfterScrollAnimation=_removeMapViewAfterScrollAnimation;
@property(nonatomic, getter=isInitialLoad) BOOL initialLoad; // @synthesize initialLoad=_initialLoad;
@property(nonatomic) BOOL mapHidden; // @synthesize mapHidden=_mapHidden;
@property(retain, nonatomic) CKTranscriptManagementNameField *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) CKAttachmentViewController *attachmentsController; // @synthesize attachmentsController=_attachmentsController;
@property(retain, nonatomic) CKTranscriptManagementView *managementView; // @synthesize managementView=_managementView;
@property(retain, nonatomic) FMFMapViewController *mapController; // @synthesize mapController=_mapController;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleFriendshipStatusChangedNotification:(id)arg1;
- (void)_handleLocationChangedNotification:(id)arg1;
- (void)_updateMapInsets;
- (void)_mapViewTouched:(id)arg1;
- (void)setMapHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (struct UIEdgeInsets)_navigationBarInsets;
- (void)_scrollAttachmentsToTopAnimated:(BOOL)arg1;
- (float)_mapHeightForCurrentBounds;
- (void)_updateAttachmentsInsets;
- (BOOL)_conversationHasLeft;
- (void)_conversationJoinStateDidChange:(id)arg1;
- (void)_handleDisplayNameChangedNotification:(id)arg1;
- (void)nameField:(id)arg1 didCommitGroupName:(id)arg2;
- (void)attachmentsController:(id)arg1 collectionViewDidChangeEditState:(id)arg2;
- (void)attachmentsController:(id)arg1 collectionViewDidEndScrollingAnimation:(id)arg2;
- (void)attachmentsController:(id)arg1 collectionViewDidScroll:(id)arg2;
- (void)attachmentsController:(id)arg1 collectionViewWillBeginDragging:(id)arg2;
- (void *)annotationABRecordForHandle:(id)arg1;
- (id)annotationImageForHandle:(id)arg1;
- (void)fmfMapViewController:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)fmfMapViewController:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (void)fmfMapViewController:(id)arg1 didDeselectHandle:(id)arg2;
- (void)fmfMapViewController:(id)arg1 didSelectHandle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithConversation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

