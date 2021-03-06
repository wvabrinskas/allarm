/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

#import "TKTonePickerViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class Alarm, BookmarkTextEntryTableViewCell, EditAlarmViewController, TKTonePickerViewController, UITableView;

@interface EditAlarmSettingViewController : _ADClientAddValueForScalarKey <TKTonePickerViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    EditAlarmViewController *_editController;
    int _setting;
    Alarm *_alarm;
    UITableView *_tableView;
    BookmarkTextEntryTableViewCell *_editingCell;
    TKTonePickerViewController *_tonePickerViewController;
    unsigned int _repeatMask;
    unsigned int _firstWeekday;
}

- (void)textValueChanged:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (unsigned int)maskForRow:(int)fp8;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)tonePickerViewController:(id)fp8 selectedMediaItemWithIdentifier:(id)fp12;
- (void)tonePickerViewController:(id)fp8 selectedToneWithIdentifier:(id)fp12;
- (void)_keyboardWillHide:(id)fp8;
- (void)_keyboardWillShow:(id)fp8;
- (void)_dismiss;
- (void)viewDidUnload;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)loadView;
- (void)addDefaultSongsIfNeeded;
- (void)dealloc;
- (id)initWithSetting:(int)fp8 editController:(id)fp12;

@end

