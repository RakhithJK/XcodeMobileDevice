//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEExplorationContext.h>

@class IDEDiagnosticActivityLogMessage;

@interface IDEDiagnosticExplorationContext : IDEExplorationContext
{
    IDEDiagnosticActivityLogMessage *_diagnosticMessage;
    BOOL _fixIt;
}

- (void).cxx_destruct;
@property(readonly) IDEDiagnosticActivityLogMessage *diagnosticMessage; // @synthesize diagnosticMessage=_diagnosticMessage;
- (int)explorationType;
- (id)initWithDiagnosticMessage:(id)arg1 shouldFixIt:(BOOL)arg2;
@property BOOL shouldFixIt; // @synthesize shouldFixIt=_fixIt;

@end
