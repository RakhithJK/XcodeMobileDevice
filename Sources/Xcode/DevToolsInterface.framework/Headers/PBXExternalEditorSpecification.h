//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/PBXExternalEditorClientProtocol-Protocol.h>

@class NSString;

@interface PBXExternalEditorSpecification : NSObject <PBXExternalEditorClientProtocol>
{
    NSString *_path;
    unsigned int _signature;
    NSString *_bundleIdentifier;
    NSString *_genericName;
    BOOL _isBlessed;
    BOOL _supportsAppleEvents;
    BOOL _supportsInitialLineSelection;
    BOOL _supportsInitialRangeSelection;
    BOOL _supportsDynamicLineSelection;
    BOOL _supportsDynamicRangeSelection;
    BOOL _supportsModifiedFilesQuery;
    BOOL _supportsModifyFileCallback;
    BOOL _supportsSaveFileCommand;
    BOOL _supportsSaveFileCallback;
    BOOL _supportsCloseFileCallback;
    BOOL _active;
    BOOL _bundleIdentifierInited;
}

+ (unsigned int)_signatureForApplicationAtPath:(id)arg1;
+ (id)externalEditorSpecificationWithPath:(id)arg1;
+ (id)externalEditorSpecificationWithPath:(id)arg1 signatureString:(id)arg2 orBundleID:(id)arg3;
+ (id)externalEditorSpecificationWithPrefString:(id)arg1;
+ (id)pathForApplicationWithBundleID:(id)arg1;
+ (id)pathForApplicationWithName:(id)arg1;
+ (id)pathForApplicationWithSignature:(unsigned int)arg1;
- (BOOL)_openFile:(id)arg1;
- (BOOL)_openFile:(id)arg1 lineNumber:(short)arg2;
- (BOOL)_openFile:(id)arg1 lineNumber:(short)arg2 selectionStart:(long long)arg3 selectionEnd:(long long)arg4 requestNotificationsOnFileSavingAndClosing:(BOOL)arg5;
- (BOOL)_openFile:(id)arg1 requestNotificationsOnFileSavingAndClosing:(BOOL)arg2;
- (BOOL)_openFile:(id)arg1 selectionStart:(long long)arg2 selectionEnd:(long long)arg3;
- (void)_resolveGenericName;
- (void)_setGenericName:(id)arg1;
- (void)_setIsActive:(BOOL)arg1;
- (void)_setPath:(id)arg1;
- (void)_setSignature:(unsigned int)arg1;
- (void)_useLaunchServicesToSendDescriptor:(id)arg1;
- (BOOL)bringToFront;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)descriptor;
- (id)genericName;
- (id)image;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 signatureString:(id)arg2 orBundleID:(id)arg3;
- (id)initWithPrefString:(id)arg1;
- (BOOL)isActive;
- (BOOL)isBlessed;
- (BOOL)isCurrentlyEditingBookmark:(id)arg1;
- (BOOL)isCurrentlyOpen;
- (BOOL)launch;
- (id)menuItemRepresentationWithTarget:(id)arg1;
- (id)modifiedDocumentsArray;
- (id)name;
- (BOOL)openBookmark:(id)arg1 bringToFront:(BOOL)arg2;
- (BOOL)openFile:(id)arg1 bringToFront:(BOOL)arg2;
- (id)path;
- (id)prefString;
- (BOOL)saveFile:(id)arg1;
- (unsigned int)signature;
- (id)signatureString;
- (id)smallImage;
- (BOOL)supportsAppleEvents;
- (BOOL)supportsCloseFileCallback;
- (BOOL)supportsDynamicLineSelection;
- (BOOL)supportsDynamicRangeSelection;
- (BOOL)supportsInitialLineSelection;
- (BOOL)supportsInitialRangeSelection;
- (BOOL)supportsModifiedFilesQuery;
- (BOOL)supportsModifyFileCallback;
- (BOOL)supportsSaveFileCallback;
- (BOOL)supportsSaveFileCommand;
- (BOOL)updateSelectionForBookmark:(id)arg1;
- (BOOL)validatePathAndSignature;

@end

