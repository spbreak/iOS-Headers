/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSPropertyMapping.h>

@interface NSPropertyMapping (_NSInternalMethods)
- (id)_transformValidations;
- (void)_setTransformValidations:(id)arg1;
- (id)_propertyTransforms;
- (void)_setPropertyTransforms:(id)arg1;
- (void)_throwIfNotEditable;
- (void)_setIsEditable:(_Bool)arg1;
- (void)_createCachesAndOptimizeState;
- (_Bool)isEditable;
- (id)initWithName:(id)arg1 valueExpression:(id)arg2;
- (id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2;
@end
