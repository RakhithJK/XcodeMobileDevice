//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTools/DYFunctionStream.h>

@class NSData;

@interface DYDataFunctionStream : DYFunctionStream
{
    NSData *_data;
    struct shared_ptr<GPUTools::FD::TFunctionStream<GPUTools::FD::Function, void>> _stream;
    struct _Iterator<GPUTools::FD::Function> _iter;
    struct _Iterator<GPUTools::FD::Function> _reset;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearResetMarker;
@property(readonly, retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 header:(const void *)arg2 error:(id *)arg3;
- (const struct Function *)peekFunction;
- (const struct Function *)readFunction;
- (unsigned long long)readFunctions:(struct Function *)arg1 maxCount:(unsigned long long)arg2;
- (void)reset;
- (void)resetToFunction:(const struct Function *)arg1;
- (void)setResetMarker;
@property(readonly, nonatomic) BOOL swapsByteOrder;

@end

