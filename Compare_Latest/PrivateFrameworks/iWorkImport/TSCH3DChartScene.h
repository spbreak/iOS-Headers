/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSCH3DChartScene : NSObject
{
    struct ChartSceneInfo mSceneInfo;
}

+ (void)addObjectsToSceneWithSceneInfo:(const struct ChartSceneInfo *)arg1;
+ (_Bool)supportsValueAxisLabelAlignmentCaching;
- (id).cxx_construct;
- (void)addAllObjectsToScene;
- (void)addSeriesObjectsToScene;
- (void)addObjectsToScene;
- (void)addAllLabelsToScene;
- (void)addLabelsToScene;
- (void)addChartTitlesToScene;
- (void)adjustSceneSettings;
- (const CDStruct_9aa9521f *)layoutSettings;
- (id)seriesType;
- (id)chartType;
- (id)chartInfo;
- (id)scene;
- (id)initWithSceneInfo:(const struct ChartSceneInfo *)arg1;

@end
