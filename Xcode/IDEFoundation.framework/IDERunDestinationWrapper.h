//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEScriptingWrapper.h>

@class NSString;

@interface IDERunDestinationWrapper : IDEScriptingWrapper
{
    NSString *_disambiguatedDisplayName;
}

+ (id)wrapItem:(id)arg1 withDisambiguatedName:(id)arg2 forContainer:(id)arg3 andAccessor:(id)arg4;
- (void).cxx_destruct;
- (id)architecture;
- (id)name;
- (id)objectSpecifierByID:(id)arg1;
- (id)platform;
- (id)scriptingID;
- (id)targetCompanionDevice;
- (id)targetDevice;

@end
