/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSTTableDataObject.h>

// Not exported
@interface TSTTableDataFormula : TSTTableDataObject
{
    struct TSCEFormula *mFormula;
}

- (void)dealloc;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initObjectWithFormula:(const struct TSCEFormula *)arg1;

@end
