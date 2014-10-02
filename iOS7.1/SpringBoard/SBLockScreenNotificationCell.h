//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBNotificationCell.h"

@class SBLockScreenNotificationScrollView, SBUnlockActionContext, UIButton, UILabel, UIScrollView, UIView;

@interface SBLockScreenNotificationCell : SBNotificationCell
{
    _Bool _isTopCell;
    _Bool _drawsSeparators;
    double _currentContentAlpha;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    id <SBAwayListCellButtonHandler> _actionButtonHandler;
    SBLockScreenNotificationScrollView *_contentScrollView;
    SBUnlockActionContext *_unlockActionContext;
    UILabel *_unlockTextLabel;
    id <UIScrollViewDelegate> _delegate;
    _Bool _resetsScrollOnPluginWillDisable;
    double _contentScrollViewWidth;
}

+ (double)primaryPaddingLeft;
+ (_Bool)wantsUnlockActionText;
+ (double)rowHeightForTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 maxLines:(unsigned long long)arg4 attachmentSize:(struct CGSize)arg5 datesVisible:(_Bool)arg6 rowWidth:(double)arg7 includeUnlockActionText:(_Bool)arg8;
+ (id)defaultColorForEventDate;
+ (id)defaultColorForRelevanceDate;
+ (id)defaultColorForSecondaryText;
+ (id)defaultColorForSubtitleText;
+ (id)defaultColorForPrimaryText;
+ (id)defaultFontForEventDate;
+ (id)defaultFontForRelevanceDate;
+ (id)defaultFontForSecondaryText;
+ (id)defaultFontForSubtitleText;
+ (id)defaultFontForPrimaryText;
@property(readonly, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) _Bool resetsScrollOnPluginWillDisable; // @synthesize resetsScrollOnPluginWillDisable=_resetsScrollOnPluginWillDisable;
@property(nonatomic) id <UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBUnlockActionContext *unlockActionContext; // @synthesize unlockActionContext=_unlockActionContext;
@property(nonatomic) double contentScrollViewWidth; // @synthesize contentScrollViewWidth=_contentScrollViewWidth;
@property(nonatomic) _Bool drawsSeparators; // @synthesize drawsSeparators=_drawsSeparators;
@property(nonatomic) _Bool isTopCell; // @synthesize isTopCell=_isTopCell;
- (void)layoutSubviews;
- (void)_handleActionButtonPress:(id)arg1;
- (id)_buttonWithLabel:(id)arg1;
- (void)setButtonLabel:(id)arg1 handler:(id)arg2;
- (void)setRelevanceDateLabel:(id)arg1;
- (void)_updateUnlockText:(id)arg1;
- (void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1;
- (long long)_separatorBackdropOverlayBlendMode;
- (id)_vibrantTextColor;
- (void)setContentAlpha:(double)arg1;
- (void)scrollToOriginAnimated:(_Bool)arg1;
- (void)resetScrollView;
- (void)_notePluginWillDisable:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_separatorColor;

// Remaining properties
@property(retain, nonatomic) UIButton *actionButton;

@end
