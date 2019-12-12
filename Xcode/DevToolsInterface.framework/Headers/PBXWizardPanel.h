//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSBox, NSButton, NSImageView, NSMutableArray, NSTextField, PBXWizard;

@interface PBXWizardPanel : NSPanel
{
    NSButton *_cancelButton;
    NSButton *_prevPageButton;
    NSButton *_nextPageButton;
    NSButton *_tellMeMoreButton;
    NSBox *_wizardPageBox;
    NSImageView *_imageView;
    NSTextField *_messageField;
    BOOL _runningModal;
    id _modalDelegate;
    SEL _modalDidEndSelector;
    void *_modalContextInfo;
    NSMutableArray *_pageHistory;
    unsigned long long _currentPageIndex;
    PBXWizard *_wizardBeingRunModal;
}

+ (id)nibName;
+ (void)set_sharedPanel:(id)arg1;
+ (id)sharedWizardPanel;
- (void)_addPage:(id)arg1;
- (void)_removeAllPages;
- (void)_removePagesFromIndex:(unsigned long long)arg1 revertRemovedPages:(BOOL)arg2;
- (void)_removeTailPages;
- (void)_setCurrentPage:(id)arg1;
- (void)_setCurrentPageIndex:(unsigned long long)arg1;
- (id)_tailPages;
- (void)_wizardSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)beginWizard:(id)arg1 modalForWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)cancel:(id)arg1;
- (void)center;
- (void)close;
- (id)currentPage;
- (void)finish:(id)arg1;
- (BOOL)isRunning;
- (BOOL)makeFirstResponder:(id)arg1;
- (id)nextPage;
- (void)nextPage:(id)arg1;
- (id)nextPageWithView;
- (void)performClose:(id)arg1;
- (id)previousPage;
- (void)previousPage:(id)arg1;
- (id)previousPageWithView;
- (BOOL)runModalWithWizard:(id)arg1;
- (void)tellMeMore:(id)arg1;
- (void)update;

@end
