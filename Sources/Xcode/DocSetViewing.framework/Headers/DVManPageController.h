//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVMainController, NSArray, NSString;

@interface DVManPageController : NSObject
{
    id manPageTextField;
    id inputTypeRadioButtons;
    id window;
    NSString *outputFolderPath;
    NSString *aproposScriptPath;
    NSString *rmanPath;
    NSString *manSearchString;
    int _inputType;
    NSArray *m_cachedManPaths;
    DVMainController *m_mainController;
}

+ (id)sharedManPageController;
- (BOOL)_beginSearchManPagesForString:(id)arg1;
- (void)_displayNothingAppropriateSheetForString:(id)arg1 onWindow:(id)arg2;
- (BOOL)_ensureOutputFolderExists;
- (id)_environmentWithCustomManPaths;
- (BOOL)_initializeAproposScriptPath;
- (BOOL)_initializeRmanExecutablePath;
- (void)_openManPageForPageSpecifiers:(id)arg1;
- (id)_outputPathForManPageWithName:(id)arg1 section:(id)arg2;
- (id)_pageSpecifiersFromString:(id)arg1;
- (id)_sectionForManPage:(id)arg1;
- (id)_uniqueIDString;
- (BOOL)_verifyFileExistsAtPath:(id)arg1;
- (BOOL)_verifyFolderExistsAtPath:(id)arg1;
- (id)aproposScriptPath;
@property(retain, nonatomic) NSArray *cachedManPaths; // @synthesize cachedManPaths=m_cachedManPaths;
- (void)cancel:(id)arg1;
- (id)createHTMLManPageForName:(id)arg1 section:(id)arg2;
- (id)dataFromManCommandWithName:(id)arg1 section:(id)arg2;
- (id)dataFromRmanCommandWithSource:(id)arg1 name:(id)arg2 section:(id)arg3;
- (void)dealloc;
- (BOOL)htmlPageExistsForName:(id)arg1 section:(id)arg2;
- (id)init;
- (void)inputIsManPageName:(id)arg1;
- (void)inputIsSearchString:(id)arg1;
@property(nonatomic) DVMainController *mainController; // @synthesize mainController=m_mainController;
- (id)manPaths;
- (BOOL)manPathsContainURL:(id)arg1;
- (id)manSearchString;
- (void)ok:(id)arg1;
- (BOOL)openHTMLManPageAtPath:(id)arg1;
- (BOOL)openManPage:(id)arg1 section:(id)arg2;
- (BOOL)openManPageAtURL:(id)arg1;
- (id)outputFolderPath;
- (id)pathForHTMLManPage:(id)arg1 section:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)rmanPath;
- (BOOL)searchManPagesForString:(id)arg1;
- (void)setAproposScriptPath:(id)arg1;
- (void)setManSearchString:(id)arg1;
- (void)setOutputFolderPath:(id)arg1;
- (void)setRmanPath:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)showManPagePanel:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;

@end

