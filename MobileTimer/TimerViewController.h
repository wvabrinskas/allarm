/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

#import "StateManagement-Protocol.h"
#import "TKTonePickerViewControllerDelegate-Protocol.h"
#import "TimerControlsTarget-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class CADisplayLink, NSString, NSTimer, TKTonePickerViewController, TimerControlsView, UIPopoverController;

@interface TimerViewController : _ADClientAddValueForScalarKey <TKTonePickerViewControllerDelegate, UINavigationControllerDelegate, StateManagement, TimerControlsTarget, UIPopoverControllerDelegate>
{
    TimerControlsView *_timerControlsView;
    TKTonePickerViewController *_tonePickerViewController;
    UIPopoverController *_soundPopoverController;
    NSString *_soundIdentifier;
    NSTimer *_timer;
    CADisplayLink *_displayLink;
    double _time;
    int _style;
}

- (id)defaultPNGName;
- (void)popoverControllerDidDismissPopover:(id)fp8;
- (unsigned int)navigationControllerSupportedInterfaceOrientations:(id)fp8;
- (void)tonePickerViewController:(id)fp8 selectedToneWithIdentifier:(id)fp12;
- (void)dismissSoundPicker;
- (void)confirmPickingSound;
- (void)showSoundPicker:(id)fp8;
- (void)pauseResumeTimer:(id)fp8;
- (void)cancelTimer:(id)fp8;
- (void)startTimer:(id)fp8;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillTransitionToSize:(struct CGSize)fp8 withTransitionCoordinator:(id)fp16;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)setStyle:(int)fp8;
- (void)traitCollectionDidChange:(id)fp8;
- (void)saveState;
- (void)reloadState;
- (void)handleEnterBackground;
- (void)dealloc;
- (id)init;
- (void)timerTick:(id)fp8;
- (void)displayLinkTick:(id)fp8;
- (void)prepareUIForState:(int)fp8;
- (void)stopUpdatingTimerUI;
- (void)startUpdatingTimerUI;
- (void)updateSelectedSoundUI;
- (id)updateSelectedSoundUIForIdentifier:(id)fp8;

@end

