/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AirPortAssistant/AssistantSubUIViewController.h>

@class NetTopoMiniStaticLayout, UIActivityIndicatorView, UILabel, UIView;

@interface StepByStepUIViewController : AssistantSubUIViewController
{
    UIView *topoContainerView;
    UIView *topoView;
    NetTopoMiniStaticLayout *topoLayout;
    UIView *tableHeaderContainerView;
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    UIView *tableFooterContainerView;
    UIView *spinnerWithStatusBelowView;
    UILabel *spinnerWithStatusBelowLabel;
    UIActivityIndicatorView *spinnerWithStatusBelowSpinner;
    int sbsMode;
}

@property(nonatomic) int sbsMode; // @synthesize sbsMode;
@property(retain, nonatomic) UIActivityIndicatorView *spinnerWithStatusBelowSpinner; // @synthesize spinnerWithStatusBelowSpinner;
@property(retain, nonatomic) UILabel *spinnerWithStatusBelowLabel; // @synthesize spinnerWithStatusBelowLabel;
@property(retain, nonatomic) UIView *spinnerWithStatusBelowView; // @synthesize spinnerWithStatusBelowView;
@property(retain, nonatomic) UIView *tableFooterContainerView; // @synthesize tableFooterContainerView;
@property(retain, nonatomic) NetTopoMiniStaticLayout *topoLayout; // @synthesize topoLayout;
@property(retain, nonatomic) UIView *topoView; // @synthesize topoView;
@property(retain, nonatomic) UIView *topoContainerView; // @synthesize topoContainerView;
@property(nonatomic) UILabel *justTextLabel; // @synthesize justTextLabel;
@property(retain, nonatomic) UIView *justTextContainerView; // @synthesize justTextContainerView;
@property(retain, nonatomic) UIView *tableHeaderContainerView; // @synthesize tableHeaderContainerView;
- (void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2;
- (void)syncTopoUIForTarget:(id)arg1 andSource:(id)arg2 andNetwork:(id)arg3 connectionType:(id)arg4;
- (void)syncTopoUIForTargetProductID:(id)arg1 targetDeviceKind:(id)arg2 targetName:(id)arg3 sourceProductID:(id)arg4 sourceDeviceKind:(id)arg5 sourceName:(id)arg6 networkName:(id)arg7 connectionType:(id)arg8;
- (id)syncTopoUIInLayer:(id)arg1 withLayout:(id)arg2 targetProductID:(id)arg3 targetDeviceKind:(id)arg4 targetName:(id)arg5 sourceProductID:(id)arg6 sourceDeviceKind:(id)arg7 sourceName:(id)arg8 networkName:(id)arg9 connectionType:(id)arg10;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

