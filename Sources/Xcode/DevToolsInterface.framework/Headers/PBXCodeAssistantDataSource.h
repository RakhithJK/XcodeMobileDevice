//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableString, NSTextView;

@interface PBXCodeAssistantDataSource : NSObject
{
    NSTextView *_textView;
    NSMutableArray *_strategies;
    NSArray *_items;
    NSMutableString *_infoString;
    struct _NSRange _lastParseRange;
}

+ (id)_smallImageNamed:(id)arg1;
+ (id)classExtensionImage;
+ (id)classImage;
+ (id)constImage;
+ (id)enumImage;
+ (id)enumTagImage;
+ (id)fieldImage;
+ (id)functionImage;
+ (id)globalImage;
+ (id)localImage;
+ (id)macroImage;
+ (id)methodImage;
+ (id)modeledClassImage;
+ (id)modeledMethodImage;
+ (id)modeledPropertyImage;
+ (id)propertyImage;
+ (id)protocolImage;
+ (id)smallClassExtensionImage;
+ (id)smallClassImage;
+ (id)smallConstImage;
+ (id)smallEnumImage;
+ (id)smallEnumTagImage;
+ (id)smallFieldImage;
+ (id)smallFunctionImage;
+ (id)smallGlobalImage;
+ (id)smallLocalImage;
+ (id)smallMacroImage;
+ (id)smallMethodImage;
+ (id)smallModeledClassImage;
+ (id)smallModeledMethodImage;
+ (id)smallModeledPropertyImage;
+ (id)smallPropertyImage;
+ (id)smallProtocolImage;
+ (id)smallStructImage;
+ (id)smallTypeImage;
+ (id)smallUnionImage;
+ (id)smallVariableImage;
+ (id)structImage;
+ (id)typeImage;
+ (id)unionImage;
+ (id)variableImage;
- (long long)count;
- (void)dealloc;
- (id)infoString;
- (id)initWithTextView:(id)arg1;
- (BOOL)isPopupTrigger:(unsigned short)arg1;
- (id)items;
- (void)purgeList;
- (BOOL)shouldUpdateList;
- (void)updateList;

@end

