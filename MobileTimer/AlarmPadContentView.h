/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

@class AlarmDetailView, AlarmScheduleView;

@interface AlarmPadContentView : _ADClientAddValueForScalarKey
{
    AlarmDetailView *_detailView;
    AlarmScheduleView *_scheduleView;
}

- (id)scheduleView;
- (id)detailView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

