//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCObjectBucket.h>

@interface XCBreakpointsBucket : XCObjectBucket
{
}

+ (BOOL)importing;
+ (void)setImporting:(BOOL)arg1;
- (void)_breakpointWasAdded:(id)arg1;
- (void)_breakpointWillBeRemoved:(id)arg1;
- (id)container;
- (void)dealloc;
- (void)listenToSource:(id)arg1 removeOnly:(BOOL)arg2;
- (void)purify;
- (void)validateAgainstProject:(id)arg1;

@end

