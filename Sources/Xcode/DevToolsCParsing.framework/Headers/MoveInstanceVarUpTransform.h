//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCParsing/Transform.h>

@class NSString;

@interface MoveInstanceVarUpTransform : Transform
{
    BOOL _insertedSuperclass;
    BOOL _isIBOutlet;
    NSString *_commentString;
}

- (BOOL)checkFinal;
- (BOOL)checkFirstFile;
- (BOOL)checkPerFile;
- (BOOL)checkValidateInputs;
- (void)dealloc;
- (id)initWithTransformInstance:(id)arg1 declaration:(id)arg2 paramDict:(id)arg3;
- (BOOL)performPerFile;
- (id)transformRelatedNames;

@end

