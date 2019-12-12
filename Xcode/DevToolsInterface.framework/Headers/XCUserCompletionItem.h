//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/PBXCompletionItem-Protocol.h>

@class NSString;

@interface XCUserCompletionItem : NSObject <PBXCompletionItem>
{
    unsigned short _type;
    NSString *_name;
    NSString *_text;
    NSString *_desc;
}

- (id)completionText;
- (id)completionTextWithMacroExpansionDictionary:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionText;
- (id)displayText;
- (id)displayType;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithType:(unsigned short)arg1 name:(id)arg2 text:(id)arg3 description:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (long long)priority;

@end
