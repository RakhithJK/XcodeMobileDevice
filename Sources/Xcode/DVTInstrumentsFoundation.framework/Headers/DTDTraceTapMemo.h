//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapDataMemo.h>

@class NSArray, NSURL;

@interface DTDTraceTapMemo : DTTapDataMemo
{
    NSURL *_fileURL;
    long long _firstFilePosition;
    NSArray *_fragments;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) long long firstFilePosition; // @synthesize firstFilePosition=_firstFilePosition;
@property(retain, nonatomic) NSArray *fragments; // @synthesize fragments=_fragments;

@end

