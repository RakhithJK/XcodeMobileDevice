//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCWorkQueueCommandSubprocessInvocation.h>

@class NSData, NSString;

@interface XCWorkQueueCommandDistributedSubprocessInvocation : XCWorkQueueCommandSubprocessInvocation
{
    NSString *_volunteerDisplayName;
    int _recruiterFD;
    BOOL _sentCommand;
    NSData *_writeBuffer;
    int _writeBufferLength;
    int _writeBufferOffset;
    char _readBuffer[8192];
    int _messageLengthRemaining;
    BOOL _connected;
    struct sockaddr_un _un_addr;
}

- (void)dealloc;
- (void)finalize;
- (void)handleInputFileDescriptorActivity;
- (void)handleOutputFileDescriptorActivity;
- (BOOL)hasBeenSentToVolunteer;
- (id)initWithSlotNumber:(unsigned long long)arg1 workQueueOperation:(id)arg2 workQueueCommand:(id)arg3 arguments:(id)arg4 environmentAssignments:(id)arg5 workingDirectoryPath:(id)arg6;
- (int)inputFileDescriptor;
- (BOOL)isRunning;
- (void)killSubprocess;
- (BOOL)launchSubprocessWithArguments:(const char **)arg1 environment:(const char **)arg2 workingDirectory:(const char *)arg3;
- (int)outputFileDescriptor;
- (void)reapExitedSubprocess;
- (void)startWriting;
- (id)volunteerDisplayName;

@end

