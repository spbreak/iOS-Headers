//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKPeerPickerViewController;

@interface GKPeerPickerController : NSObject
{
    id _picker;
}

+ (void)initialize;
- (id)peerPickerViewController:(id)arg1 sessionForConnectionType:(unsigned int)arg2;
- (void)peerPickerViewController:(id)arg1 didSelectConnectionType:(unsigned int)arg2;
- (void)peerPickerViewController:(id)arg1 didConnectPeer:(id)arg2 toSession:(id)arg3;
- (void)peerPickerViewControllerDidCancel:(id)arg1;
- (void)_createPicker;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
@property(nonatomic) unsigned int connectionTypesMask;
@property(readonly, nonatomic) GKPeerPickerViewController *pickerViewController; // @dynamic pickerViewController;
- (void)dismiss;
- (void)show;
@property(nonatomic) id <GKPeerPickerControllerDelegate> delegate;
- (void)dealloc;
- (id)init;

@end
