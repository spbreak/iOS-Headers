/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVItem.h"

@class CalDAVCalendarServerActionItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem
{
    CoreDAVLeafItem *_dtstamp;
    CalDAVCalendarServerActionItem *_action;
}

- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)copyParseRules;
@property(retain) CalDAVCalendarServerActionItem *action; // @synthesize action=_action;
@property(retain) CoreDAVLeafItem *dtstamp; // @synthesize dtstamp=_dtstamp;

@end
