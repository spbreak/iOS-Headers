//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ToneKit/TKPickerSectionItem.h>

#import "TKPickerContainerItem.h"

@class NSString, TKTonePickerController;

@interface TKTonePickerSectionItem : TKPickerSectionItem <TKPickerContainerItem>
{
    TKTonePickerController *_parentTonePickerController;
    int _numberOfChildren;
    unsigned int _sectionHeader;
    unsigned int _regularToneSectionIndex;
}

- (void)_setRegularToneSectionIndex:(unsigned int)arg1;
@property(nonatomic) unsigned int regularToneSectionIndex; // @synthesize regularToneSectionIndex=_regularToneSectionIndex;
- (void)_setSectionHeader:(unsigned int)arg1;
@property(nonatomic) unsigned int sectionHeader; // @synthesize sectionHeader=_sectionHeader;
- (void)_setNumberOfChildren:(int)arg1;
@property(nonatomic) int numberOfChildren; // @synthesize numberOfChildren=_numberOfChildren;
@property(nonatomic, setter=_setParentTonePickerController:) TKTonePickerController *_parentTonePickerController; // @synthesize _parentTonePickerController;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)childItemAtIndex:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
