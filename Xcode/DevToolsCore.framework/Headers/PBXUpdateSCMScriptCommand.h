//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXAbstractSCMScriptCommand.h>

@interface PBXUpdateSCMScriptCommand : PBXAbstractSCMScriptCommand
{
    BOOL useProjectStatusRequestType;
}

- (id)argumentsForRequest;
- (id)requestType;
- (id)returnValueFromInfo:(id)arg1;
- (id)runCommandOnItems:(id)arg1 inProject:(id)arg2;
- (id)runCommandOnProject:(id)arg1;

@end

