/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

#import "StopWatchLapCell-Protocol.h"

@class UILabel;

@interface LapTableViewCell : _ADClientAddValueForScalarKey <StopWatchLapCell>
{
    UILabel *_lapLabel;
    UILabel *_timeLabel;
    int _lap;
    double _time;
}

+ (float)rowHeight;
- (void)setTime:(double)fp8;
- (double)time;
- (void)setLap:(int)fp8;
- (int)lap;
- (id)_accessibilityFormatTime:(double)fp8 showHours:(char *)fp16 showSubseconds:(BOOL)fp20;
- (void)handleLocaleChange;
- (void)layoutSubviews;
- (id)lapLabelTextForNumber:(int)fp8;
- (void)resetLapFormatter;
- (void)setupLapFormatter;
- (void)dealloc;
- (id)init;

@end

