//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapMessageHandler.h>

@class NSURL;

@interface DTDTraceTapMessageHandler : DTTapMessageHandler
{
    unsigned int _tapVersion;
    int _writeFD;
    long long _filePositionStart;
    long long _filePositionEnd;
    NSURL *_outputURL;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;
- (id)messageReceived:(id)arg1;

@end

