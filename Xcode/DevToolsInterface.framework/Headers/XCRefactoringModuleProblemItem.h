//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/XCRefactoringModuleItem-Protocol.h>

@class NSAttributedString, XCRefactoringProblem;

@interface XCRefactoringModuleProblemItem : NSObject <XCRefactoringModuleItem>
{
    XCRefactoringProblem *_problem;
    NSAttributedString *_cachedAttributedName;
}

- (id)attributedName;
- (id)childAtIndex:(long long)arg1;
- (void)dealloc;
- (id)details;
- (void)drawBackgroundInRect:(struct CGRect)arg1 rowRect:(struct CGRect)arg2;
- (id)icon;
- (id)initWithProblem:(id)arg1;
- (BOOL)isExpandable;
- (BOOL)isGroupRow;
- (id)name;
- (unsigned long long)numberOfChildren;
- (id)problem;
- (BOOL)shouldHaveCheckbox;

@end

