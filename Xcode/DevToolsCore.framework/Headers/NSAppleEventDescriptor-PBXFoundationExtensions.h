//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAppleEventDescriptor.h>

@interface NSAppleEventDescriptor (PBXFoundationExtensions)
+ (id)documentDescriptorFromFilename:(id)arg1;
+ (id)fileDescriptorFromPath:(id)arg1;
- (id)descriptionAtIndentLevel:(long long)arg1;
- (id)hierarchicalDescription;
- (long long)send;
- (id)sendAppleEventAndWaitForReply;
- (id)sendAppleEventAndWaitForReplyForTicks:(long long)arg1;
@end

