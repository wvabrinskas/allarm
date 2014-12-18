/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

@class AlarmScheduleLayoutData, NSCalendar, NSDate, NSDateComponents, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer;

@interface AlarmScheduleLayout : _ADClientAddValueForScalarKey
{
    BOOL _needsRefreshDateInfo;
    int _firstDayOfWeek;
    NSCalendar *_calendar;
    NSDate *_now;
    NSDateComponents *_nowComps;
    NSMutableArray *_alarmIdForSection;
    NSMutableDictionary *_layoutDataMap;
    NSMutableArray *_itemZOrder[7];
    NSMutableDictionary *_overlappingItemLists[7];
    NSIndexPath *_pendingFrontIndexPath;
    NSString *_pendingUpdatedAlarmId;
    int _pendingUpdatedAlarmAction;
    BOOL _needsRefreshLayout;
    NSMutableSet *_changedAlarmIds;
    NSMutableSet *_pendingSnoozeChangedAlarms;
    int _dragState;
    AlarmScheduleLayoutData *_draggingLayoutData;
    float _dragXStartLocation;
    float _dragYOffset;
    struct CGPoint _pendingDragLocation;
    id _dragCompletionBlock;
    NSTimer *_nextNonRepeatingAlarmTimer;
    NSMutableDictionary *_cachedAttributes;
    NSDictionary *_previousCachedAttributes;
    NSMutableDictionary *_cachedAttributesAlarmMap[7];
    NSMutableDictionary *_previousCachedAttributesAlarmMap[7];
    NSMutableArray *_previousAlarmIdForSection;
    NSMutableSet *_reloadedAlarms;
    NSMutableDictionary *_dayOfOverlappingReloadedAlarms;
}

+ (int)timeInMinutesForY:(float)fp8;
+ (float)yForTimeInMinutes:(int)fp8;
- (id)nowComps;
- (id)now;
- (int)firstDayOfWeek;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)fp8;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)fp8;
- (void)prepareForCollectionViewUpdates:(id)fp8;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)fp8;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)fp8;
- (id)layoutAttributesForElementsInRect:(struct CGRect)fp8;
- (CDAnonymousStruct1)timesVisibleInRect:(struct CGRect)fp8;
- (CDAnonymousStruct2)daysVisibleInRect:(struct CGRect)fp8;
- (id)sortLayoutDataByTime:(id)fp8 forDay:(int)fp12;
- (id)fullyOverlappingAlarmsForAlarm:(id)fp8 forDay:(int)fp12;
- (void)handleReloadOfAlarm:(id)fp8;
- (void)handleNoLongerOverlappingAlarm:(id)fp8 forDay:(int)fp12;
- (void)handleDeleteOfAlarm:(id)fp8 forDays:(id)fp12;
- (void)handleDeleteOfAlarm:(id)fp8;
- (void)handleInsertOfAlarm:(id)fp8 atZIndex:(int)fp12 forDays:(id)fp16;
- (void)handleInsertOfAlarm:(id)fp8;
- (void)determineOverlappingItemListsForAlarms:(id)fp8 onDay:(int)fp12;
- (void)calculateLayoutForAllAlarms;
- (void)prepareLayout;
- (void)resetAllAlarmOperations;
- (void)resetAllAlarmLayout;
- (void)resetEverything;
- (void)addPendingSnoozeChangedForAlarmId:(id)fp8;
- (void)setNeedsRefreshLayoutWithChangedAlarmIds:(id)fp8;
- (void)setPendingUpdatedAlarmId:(id)fp8 action:(int)fp12;
- (void)dragAlarmToLocationInSuperview:(struct CGPoint)fp8 completion:(id)fp(null);
- (void)endDraggingAlarmWithInvalidation:(BOOL)fp8;
- (void)beginDraggingAlarmId:(id)fp8 fromLocationInSuperview:(struct CGPoint)fp12;
- (id)cycleAlarmToBack:(id)fp8;
- (void)bringAlarmToFront:(id)fp8;
- (BOOL)isAlarmOverlapping:(id)fp8;
- (int)columnIndexForX:(float)fp8;
- (float)columnWidth;
- (float)rightMargin;
- (float)leftMargin;
- (void)scheduleTimerForNextNonRepeatingAlarm;
- (void)handleNextNonRepeatingAlarm;
- (BOOL)refreshDateInfo;
- (void)setNeedsRefreshDateInfoWithInvalidation:(BOOL)fp8;
- (void)setNeedsRefreshDateInfo;
- (int)currentDayOfWeek;
- (void)dealloc;
- (id)init;

@end
