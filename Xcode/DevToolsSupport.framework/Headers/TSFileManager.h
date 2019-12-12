//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface TSFileManager : NSFileManager
{
}

+ (id)chmodStringByAppendingUmask:(id)arg1;
+ (id)defaultManager;
+ (BOOL)logsFileSystemChanges;
+ (unsigned long long)permissionsByApplyingUmask:(unsigned long long)arg1 addUserPrivileges:(BOOL)arg2;
+ (void)setLogsFileSystemChanges:(BOOL)arg1;
- (BOOL)_copyFinderInfoFromFSRef:(struct FSRef *)arg1 fromPath:(id)arg2 toFSRef:(struct FSRef *)arg3 toPath:(id)arg4;
- (BOOL)_copyFinderInfoFromPath:(id)arg1 toPath:(id)arg2 isDirectory:(BOOL)arg3;
- (BOOL)_copyPath:(id)arg1 toPath:(id)arg2 delegate:(id)arg3 ownerName:(id)arg4 groupName:(id)arg5 chmodString:(id)arg6 preserveFinderInfo:(BOOL)arg7 preserveResourceForks:(BOOL)arg8;
- (BOOL)_copyResourceForkFromFSRef:(struct FSRef *)arg1 fromPath:(id)arg2 toFSRef:(struct FSRef *)arg3 toPath:(id)arg4;
- (BOOL)_copyResourceForkFromPath:(id)arg1 toPath:(id)arg2 isDirectory:(BOOL)arg3;
- (BOOL)_getFSRef:(struct FSRef *)arg1 forPath:(id)arg2 isDirectory:(BOOL)arg3;
- (id)_pathForFSRef:(struct FSRef *)arg1;
- (id)appleInternalRootPath;
- (BOOL)changeFileAttributes:(id)arg1 atPath:(id)arg2;
- (BOOL)changeOwnerName:(id)arg1 groupName:(id)arg2 chmodString:(id)arg3 atPath:(id)arg4;
- (BOOL)copyFinderInfoFromPath:(id)arg1 toPath:(id)arg2;
- (BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)copyOwnerGroupAndPermissionsFromPath:(id)arg1 toPath:(id)arg2;
- (BOOL)copyPath:(id)arg1 toPath:(id)arg2 delegate:(id)arg3;
- (BOOL)copyPath:(id)arg1 toPath:(id)arg2 delegate:(id)arg3 ownerName:(id)arg4 groupName:(id)arg5 chmodString:(id)arg6;
- (BOOL)copyPath:(id)arg1 toPath:(id)arg2 delegate:(id)arg3 ownerName:(id)arg4 groupName:(id)arg5 chmodString:(id)arg6 preserveFinderInfo:(BOOL)arg7 preserveResourceForks:(BOOL)arg8;
- (BOOL)copyPath:(id)arg1 toPath:(id)arg2 handler:(id)arg3;
- (BOOL)copyPermissionsFromPath:(id)arg1 toPath:(id)arg2;
- (BOOL)copyResourceForkFromPath:(id)arg1 toPath:(id)arg2;
- (BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 recurse:(BOOL)arg3;
- (BOOL)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
- (BOOL)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (BOOL)createSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2;
- (BOOL)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id *)arg3;
- (id)developerToolsRootPath;
- (id)extendedAttributeForKey:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;
- (id)extendedAttributeNamesOfItemAtPath:(id)arg1 error:(id *)arg2;
- (id)extendedAttributesOfItemAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)isAliasFileAtPath:(id)arg1;
- (BOOL)isDirectoryAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (BOOL)isXcodeGenerated:(id)arg1;
- (BOOL)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)linkPath:(id)arg1 toPath:(id)arg2 handler:(id)arg3;
- (id)listOfFilesToCopyFromPath:(id)arg1 toPath:(id)arg2 delegate:(id)arg3;
- (BOOL)moveFileAtPathToTrash:(id)arg1 handler:(id)arg2;
- (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)movePath:(id)arg1 toPath:(id)arg2 delegate:(id)arg3;
- (BOOL)movePath:(id)arg1 toPath:(id)arg2 delegate:(id)arg3 ownerName:(id)arg4 groupName:(id)arg5 chmodString:(id)arg6;
- (BOOL)movePath:(id)arg1 toPath:(id)arg2 delegate:(id)arg3 ownerName:(id)arg4 groupName:(id)arg5 chmodString:(id)arg6 preserveFinderInfo:(BOOL)arg7 preserveResourceForks:(BOOL)arg8;
- (BOOL)movePath:(id)arg1 toPath:(id)arg2 handler:(id)arg3;
- (id)pathContentOfAliasAtPath:(id)arg1;
- (unsigned long long)posixPermissionsByApplyingChmodString:(id)arg1 to:(unsigned long long)arg2;
- (BOOL)removeExtendedAttributeForKey:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;
- (BOOL)removeFileAtPath:(id)arg1 handler:(id)arg2;
- (BOOL)removeItemAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;
- (BOOL)setExtendedAttribute:(id)arg1 forKey:(id)arg2 ofItemAtPath:(id)arg3 error:(id *)arg4;
- (id)supportFilesRootPath;

@end

