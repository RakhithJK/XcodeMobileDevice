//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface PBXFileTypePart : NSObject
{
    NSString *_identifier;
    PBXFileTypePart *_superpart;
    NSMutableArray *_subparts;
}

+ (id)fileTypePartFromSpecificationArray:(id)arg1 identifier:(id)arg2;
- (void)dealloc;
- (id)identifier;
- (id)init;
- (id)initFromSpecificationArray:(id)arg1 identifier:(id)arg2;
- (BOOL)isFolder;
- (BOOL)isPlainFile;
- (BOOL)isSymbolicLink;
- (void)setSuperpart:(id)arg1;
- (id)subparts;
- (id)superpart;

@end

