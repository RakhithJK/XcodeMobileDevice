//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTFilePath.h>

@interface DVTFilePath (PersistenceFSEventsMonitoring)
- (void)addChangedFilePath:(char *)arg1;
- (void)doneAddingChangedFilesFromStream:(struct __FSEventStream *)arg1;
- (id)relativePathOnVolume;
- (BOOL)subpathsChangedSinceDate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
@end

