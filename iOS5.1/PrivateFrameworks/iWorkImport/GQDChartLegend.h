/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDGraphic.h>

@class GQDChart;

@interface GQDChartLegend : GQDGraphic
{
    GQDChart *mChart;
    BOOL mIsChartRetained;
}

+ (const struct StateSpec *)stateForReading;
- (void)dealloc;
- (id)chart;
- (id)graphicStyle;

@end

