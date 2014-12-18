/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADClientAddValueForScalarKey.h"

#import "WorldClockViewBackgroundHost-Protocol.h"

@class UIView, WorldClockView;

@interface FullScreenWorldClockCollectionCell : _ADClientAddValueForScalarKey <WorldClockViewBackgroundHost>
{
    UIView *_clockBackground;
    WorldClockView *_clockView;
    id <FullScreenWorldClockCollectionCellDelegate> _delegate;
}

+ (id)dayTimeBackgroundColor;
+ (id)nightTimeBackgroundColor;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)clockView;
- (id)clockBackground;
- (void)updateBackground:(BOOL)fp8;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end
