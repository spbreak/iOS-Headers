/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIScrollView.h"

@interface RUParallelScrollView : UIScrollView
{
    UIScrollView *_targetScrollView;
}

@property(nonatomic) __weak UIScrollView *targetScrollView; // @synthesize targetScrollView=_targetScrollView;
- (void).cxx_destruct;
- (void)_layoutTargetScrollView;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end
