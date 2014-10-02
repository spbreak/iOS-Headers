//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DValueEnumerator.h>

@class TSCH3DAxisLabelKind, TSCHChartAxis;

__attribute__((visibility("hidden")))
@interface TSCH3DAxisLabelEnumerator : TSCH3DValueEnumerator
{
    TSCHChartAxis *mAxis;
    TSCH3DAxisLabelKind *mKind;
}

+ (id)enumeratorWithAxis:(id)arg1 kind:(id)arg2;
@property(readonly, nonatomic) TSCH3DAxisLabelKind *kind; // @synthesize kind=mKind;
- (int)labelPosition;
- (BOOL)shouldRender;
- (id)stringForLabelResources:(id)arg1;
- (id)string;
- (void)update;
- (unsigned int)count;
- (void)dealloc;
- (id)initWithAxis:(id)arg1 kind:(id)arg2;

@end
