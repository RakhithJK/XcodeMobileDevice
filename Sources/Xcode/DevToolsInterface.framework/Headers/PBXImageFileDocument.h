//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXFileDocument.h>

@class NSImage;

@interface PBXImageFileDocument : PBXFileDocument
{
    NSImage *_image;
}

+ (Class)defaultFileEditorSubclass;
- (void)dealloc;
- (id)image;
- (id)init;
- (void)printDocument:(id)arg1;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (BOOL)readFromFile:(id)arg1 ofType:(id)arg2;
- (BOOL)writeToFile:(id)arg1 ofType:(id)arg2;

@end
