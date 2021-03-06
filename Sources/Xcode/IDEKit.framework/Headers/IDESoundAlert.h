//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEAlert.h>

@class NSSound, NSString;

@interface IDESoundAlert : IDEAlert
{
    NSSound *_sound;
    NSString *_soundPath;
}

+ (void)_addSoundsFromPath:(id)arg1 to:(id)arg2;
+ (void)initialize;
+ (id)systemSoundPaths;
- (void).cxx_destruct;
- (int)alertPropertyListVersion;
- (id)init;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSString *soundPath; // @synthesize soundPath=_soundPath;
- (id)systemSoundPaths;
- (id)valuesForProperty:(id)arg1;

@end

