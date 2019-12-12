//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, XCRefactoringFileLocation;

@interface XCRefactoringProblem : NSObject
{
    NSString *_message;
    int _problemType;
    XCRefactoringFileLocation *_fileLocation;
}

- (long long)compareProblem:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)fileLocation;
- (id)initWithMessage:(id)arg1 problemType:(int)arg2 fileLocation:(id)arg3;
- (BOOL)isEqualToProblem:(id)arg1;
- (id)message;
- (int)problemType;

@end

