//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDebugBarContentProvider.h>

@class DVTGradientImageButton, DVTObservingToken, IDEWorkspaceTabController;

@interface IDEUIRecordingDebugBarContentProvider : IDEDebugBarContentProvider
{
    DVTObservingToken *_recordingManagerExistsToken;
    DVTObservingToken *_lastActiveEditorObservingToken;
    DVTGradientImageButton *_toggleRecordingButton;
    IDEWorkspaceTabController *_workspaceTabController;
    BOOL prefersDebugBarToAlwaysBeShown;
}

- (void).cxx_destruct;
- (void)_refreshButtonState;
- (id)init;
@property BOOL prefersDebugBarToAlwaysBeShown; // @synthesize prefersDebugBarToAlwaysBeShown;
- (void)toggleRecording:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;
- (void)willBeDetachedFromDebugBar:(id)arg1;

@end

