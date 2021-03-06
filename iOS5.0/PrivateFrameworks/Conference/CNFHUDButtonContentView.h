/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView, UILabel;

@interface CNFHUDButtonContentView : UIView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    int _orientation;
}

- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (void)dealloc;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;

@end

