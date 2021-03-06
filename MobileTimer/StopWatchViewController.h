/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

#import "StateManagement-Protocol.h"
#import "StopWatchControlsTarget-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CADisplayLink, MTStopwatchControlsView, NSDate, NSMutableArray, NSTimer, StopwatchPadControls, UITableView;

@interface StopWatchViewController : _ADClientAddValueForScalarKey <UITableViewDelegate, UITableViewDataSource, StateManagement, StopWatchControlsTarget>
{
    MTStopwatchControlsView *_lapControls;
    StopwatchPadControls *_padControls;
    UITableView *_lapTimeTable;
    CADisplayLink *_displayLink;
    NSDate *_startTime;
    double _offset;
    double _currentInterval;
    double _previousLapsTotalInterval;
    NSMutableArray *_laps;
    BOOL _isTimerRunning;
    NSTimer *_restoreIdleTimerTimer;
    int _mode;
    int _style;
}

- (id)defaultPNGName;
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (unsigned int)_placeholderCellCount;
- (void)resumeLapTimer;
- (void)resetLapTimer;
- (void)lapLapTimer;
- (void)pauseLapTimer;
- (void)startLapTimer;
- (double)runningTotalForLap:(int)fp8;
- (void)_tick:(id)fp8;
- (double)_timeAdjustedFor30fpsDisplay:(double)fp8;
- (void)_restoreIdleTimer;
- (void)_stopTimer;
- (void)_startTimer;
- (void)_clearAllLaps;
- (void)_addLap:(double)fp8;
- (void)saveState;
- (void)reloadState;
- (void)viewWillTransitionToSize:(struct CGSize)fp8 withTransitionCoordinator:(id)fp16;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)loadView;
- (void)setStyle:(int)fp8;
- (void)traitCollectionDidChange:(id)fp8;
- (void)setMode:(int)fp8;
- (Class)tableCellClass;
- (void)handleLocaleChange;
- (void)dealloc;
- (id)init;

@end

