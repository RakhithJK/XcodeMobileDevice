//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSError, NSMutableDictionary, XCDocSetOutlineView;

@interface XCDocSetCell : NSTextFieldCell
{
    XCDocSetOutlineView *_docOutlineView;
    NSError *_docSetUpdateError;
    int _docSetUpdateStatus;
    NSMutableDictionary *_syndicationButtonCacheDict;
    BOOL _stateCacheIsValid;
    BOOL _isDocSetPublisherInstance;
    BOOL _isDocSetUpdateInstance;
    BOOL _docSetHasUpdate;
    BOOL _docSetIsNew;
    BOOL _updateCheckInProgress;
}

- (BOOL)_docSetExistsOnDisk;
- (void)_docSetUpdateCheckDidFinish:(id)arg1;
- (void)_docSetUpdateCheckDidStart:(id)arg1;
- (struct CGRect)_drawDownloadProblemButton:(id)arg1 inFrame:(struct CGRect)arg2 ofView:(id)arg3;
- (struct CGRect)_drawInfoButton:(id)arg1 inFrame:(struct CGRect)arg2 ofView:(id)arg3;
- (struct CGRect)_drawUpdateButton:(id)arg1 inFrame:(struct CGRect)arg2 ofView:(id)arg3;
- (double)_infoButtonMinHeight;
- (double)_infoButtonMinWidth;
- (id)_nameAttributesWithBlackTextColor;
- (id)_nameAttributesWithLightGrayTextColor;
- (id)_nameAttributesWithOrangeTextColor;
- (double)_rssButtonMinWidth;
- (double)_xLocationForRSSControlsForCellWithFrame:(struct CGRect)arg1;
- (void)clickInUpdatesColumn:(id)arg1;
- (void)dealloc;
@property(nonatomic) XCDocSetOutlineView *docOutlineView; // @synthesize docOutlineView=_docOutlineView;
- (id)docSetUpdateButtonOfType:(int)arg1 forDocSetUpdate:(id)arg2;
@property(retain, nonatomic) NSError *docSetUpdateError; // @synthesize docSetUpdateError=_docSetUpdateError;
- (id)docSetUpdateObject;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)fontForRSSLabel;
- (id)initWithOutlineView:(id)arg1;
- (void)invalidateStateCache;
- (BOOL)isDocSetCellSelected:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)publisherObject;
- (void)removeAllButtons;
- (void)setRepresentedObject:(id)arg1;
- (void)stopRSSUpdate:(id)arg1;
- (id)syndicationButtonCacheDict;
- (void)updateStateCache;

@end

