//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SourceLocation;

@interface TransformError : NSObject
{
    NSString *_errorMessage;
    SourceLocation *_errorLocation;
}

+ (id)transformWithErrorLocation:(id)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
- (long long)compareLocation:(id)arg1;
- (void)dealloc;
- (id)errorLocation;
- (id)errorMessage;
- (id)initWithErrorLocation:(id)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3;

@end
