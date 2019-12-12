//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXFileDocument.h>

@protocol PBXExternalEditorClientProtocol;

@interface PBXExternalFileDocument : PBXFileDocument
{
    id <PBXExternalEditorClientProtocol> _externalEditorProxy;
    BOOL _isDirty;
}

+ (id)externalFileDocuments;
+ (id)externalFileDocumentsWithEditor:(id)arg1;
+ (void)logExternalFileDocuments:(id)arg1;
- (void)_handleDocumentFileChanges:(id)arg1;
- (void)dealloc;
- (int)diskState;
- (id)externalEditor;
- (id)initWithFile:(id)arg1 externalEditor:(id)arg2;
- (id)initWithFile:(id)arg1 externalEditor:(id)arg2 isDirty:(BOOL)arg3;
- (BOOL)isDocumentEdited;
- (void)openForUI;
- (BOOL)readFromFile:(id)arg1 ofType:(id)arg2;
- (void)saveDocument:(id)arg1;
- (void)setDocumentEdited:(BOOL)arg1;
- (void)setExternalEditor:(id)arg1;
- (BOOL)showAndMakeActive;
- (BOOL)showAndSelectFromLine:(unsigned long long)arg1 toLine:(unsigned long long)arg2;
- (BOOL)showAndSelectLine:(unsigned long long)arg1;
- (void)updateChangeCount:(unsigned long long)arg1;
- (void)updateDiskStateInfo;
- (BOOL)writeToFile:(id)arg1 ofType:(id)arg2;

@end

