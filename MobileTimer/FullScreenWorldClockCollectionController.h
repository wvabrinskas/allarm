/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

#import "FullScreenWorldClockCollectionCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class FullScreenWorldClockCollectionCell, NSTimer, UIButton, UICollectionView, UIPageControl, UIPinchGestureRecognizer;

@interface FullScreenWorldClockCollectionController : _ADClientAddValueForScalarKey <FullScreenWorldClockCollectionCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    NSTimer *_hideInfoTimer;
    BOOL _showingInfo;
    BOOL _showingInfoTemporarily;
    id _dismissTarget;
    SEL _dismissAction;
    int _currentPage;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    FullScreenWorldClockCollectionCell *_transitionView;
    BOOL _shouldHideInfoAfterScroll;
    UIPageControl *_pageIndicator;
    UIButton *_twcButton;
    UICollectionView *_collectionView;
    int _clockAppearance;
}

- (void)setShouldHideInfoAfterScroll:(BOOL)fp8;
- (BOOL)shouldHideInfoAfterScroll;
- (void)setClockAppearance:(int)fp8;
- (int)clockAppearance;
- (id)collectionView;
- (id)twcButton;
- (id)pageIndicator;
- (void)twcButtonPressed;
- (float)collectionView:(id)fp8 layout:(id)fp12 minimumInteritemSpacingForSectionAtIndex:(int)fp16;
- (float)collectionView:(id)fp8 layout:(id)fp12 minimumLineSpacingForSectionAtIndex:(int)fp16;
- (struct UIEdgeInsets)collectionView:(id)fp8 layout:(id)fp12 insetForSectionAtIndex:(int)fp16;
- (struct CGSize)collectionView:(id)fp8 layout:(id)fp12 sizeForItemAtIndexPath:(id)fp16;
- (void)scrollViewDidEndScrollingAnimation:(id)fp8;
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (void)scrollViewDidEndDragging:(id)fp8 willDecelerate:(BOOL)fp12;
- (void)hideInfoIfTemporarilyShowing;
- (void)scrollViewWillBeginDragging:(id)fp8;
- (void)scrollViewDidScroll:(id)fp8;
- (void)cellBackgroundDidUpdate:(id)fp8 isDayTime:(BOOL)fp12;
- (void)collectionView:(id)fp8 didEndDisplayingCell:(id)fp12 forItemAtIndexPath:(id)fp16;
- (void)collectionView:(id)fp8 didSelectItemAtIndexPath:(id)fp12;
- (id)collectionView:(id)fp8 cellForItemAtIndexPath:(id)fp12;
- (void)configureFullScreenWorldClockCollectionCell:(id)fp8 indexPath:(id)fp12;
- (void)setShowingInfo:(BOOL)fp8 forCell:(id)fp12;
- (int)collectionView:(id)fp8 numberOfItemsInSection:(int)fp12;
- (void)updatePageIndicatorColor:(BOOL)fp8;
- (void)handleApplicationDidEnterBackground;
- (void)handleApplicationWillEnterForeground;
- (void)viewWillTransitionToSize:(struct CGSize)fp8 withTransitionCoordinator:(id)fp16;
- (struct CGPoint)_collectionView:(id)fp8 targetContentOffsetForProposedContentOffset:(struct CGPoint)fp12;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLayoutSubviews;
- (void)viewDidUnload;
- (void)loadView;
- (void)pinchAction:(id)fp8;
- (BOOL)isCurrentPageNighttime;
- (void)updatePageIndicator;
- (void)scrollToCurrentPage;
- (void)cancelDelayedHideInfo;
- (void)hideInfoAfterDelay;
- (void)hideInfo;
- (void)setShowingInfo:(BOOL)fp8;
- (void)dismiss;
- (void)setDismissTarget:(id)fp8 action:(SEL)fp12;
- (void)weatherDataUpdated;
- (void)dealloc;
- (id)init;

@end

