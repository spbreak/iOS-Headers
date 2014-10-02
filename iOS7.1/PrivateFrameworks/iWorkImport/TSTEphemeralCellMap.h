//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSTCellMap.h"

__attribute__((visibility("hidden")))
@interface TSTEphemeralCellMap : NSObject <TSTCellMap>
{
    CDStruct_0441cfb5 *mCellIDs;
    id *mCells;
    unsigned int mCapacity;
    unsigned int mCount;
    BOOL mMayModifyValuesReferencedByFormulas;
    BOOL mIgnoreHiddenCellsWhenApplying;
    BOOL mAppliesToHidden;
}

@property(nonatomic) BOOL appliesToHidden; // @synthesize appliesToHidden=mAppliesToHidden;
- (void)setMayModifyValuesReferencedByFormulas:(BOOL)arg1;
- (BOOL)mayModifyValuesReferencedByFormulas;
- (BOOL)mayModifyFormulasInCells;
- (void)popLastCell;
- (void)addCell:(id)arg1 andCellID:(CDStruct_0441cfb5)arg2;
- (id)cellAtIndex:(unsigned int)arg1;
- (CDStruct_0441cfb5)cellIDAtIndex:(unsigned int)arg1;
- (BOOL)containsCellID:(CDStruct_0441cfb5)arg1;
- (CDStruct_0441cfb5 *)cellIDs;
- (unsigned int)count;
- (void)dealloc;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)init;

@end
