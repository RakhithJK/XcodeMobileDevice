//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PBXWidgetGroup : NSObject
{
    id _dataSource;
    id _delegate;
    NSMutableArray *_widgets;
}

- (void)addWidget:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;
- (void)removeWidget:(id)arg1;
- (void)saveWidgets;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateWidgets;

@end

