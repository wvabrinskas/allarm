/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

@class MTStopwatchController, StopwatchTimeView, UITableView, UIView;

@interface MTStopwatchControlsView : _ADClientAddValueForScalarKey
{
    MTStopwatchController *_controller;
    UIView *_topKeylineView;
    UIView *_bottomKeylineView;
    StopwatchTimeView *_timeView;
    UITableView *_lapTimeTable;
}

+ (float)defaultHeight;
+ (float)timeViewHeight;
- (id)lapTimeTable;
- (id)timeView;
- (void)layoutSubviews;
- (void)setMode:(int)fp8;
- (int)mode;
- (id)target;
- (void)handleLocaleChange;
- (void)_configureAndAddButton:(id)fp8;
- (void)setButtonSize:(unsigned int)fp8;
- (void)dealloc;
- (id)initWithTarget:(id)fp8;

@end

