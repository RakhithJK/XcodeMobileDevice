//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class NSString;

@interface IDEObjCModernizationGeneratingPreviewAssistant : IDEAssistant
{
    NSString *_message;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
- (void).cxx_destruct;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)loadView;
@property(copy) NSString *message; // @synthesize message=_message;
- (id)nextAssistantIdentifier;

@end
