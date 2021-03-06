/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TableViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSIndexPath, UICollectionView, UIPageControl;

@interface PagingLandscapeCollectionViewController : TableViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _showPagingCollectionView;
    UICollectionView *_pagingCollectionView;
    UIPageControl *_pageIndicator;
    NSIndexPath *_collectionViewIndexPathBeforeRotation;
    int _currentPage;
}

- (int)currentPage;
- (id)pagingCollectionView;
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (void)scrollViewDidEndDragging:(id)fp8 willDecelerate:(BOOL)fp12;
- (void)scrollViewDidScroll:(id)fp8;
- (float)collectionView:(id)fp8 layout:(id)fp12 minimumInteritemSpacingForSectionAtIndex:(int)fp16;
- (float)collectionView:(id)fp8 layout:(id)fp12 minimumLineSpacingForSectionAtIndex:(int)fp16;
- (struct UIEdgeInsets)collectionView:(id)fp8 layout:(id)fp12 insetForSectionAtIndex:(int)fp16;
- (struct CGSize)collectionView:(id)fp8 layout:(id)fp12 sizeForItemAtIndexPath:(id)fp16;
- (id)collectionView:(id)fp8 cellForItemAtIndexPath:(id)fp12;
- (int)collectionView:(id)fp8 numberOfItemsInSection:(int)fp12;
- (void)reloadState;
- (void)pagingCollectionViewDidDisappear;
- (void)pagingCollectionViewDidAppear;
- (void)viewWillTransitionToSize:(struct CGSize)fp8 withTransitionCoordinator:(id)fp16;
- (BOOL)prefersStatusBarHidden;
- (BOOL)shouldShowPagingCollectionView;
- (BOOL)canShowPagingCollectionView;
- (void)updatePageIndicator;
- (void)scrollToCurrentPage;
- (void)setShowPagingCollectionView:(BOOL)fp8;
- (void)updateShowPagingCollectionView;
- (void)loadPagingCollectionView;
- (id)pagingCollectionViewRotationBackgroundColor;
- (void)pagingCollectionViewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidUnload;
- (struct CGSize)landscapeCellSize;

@end

