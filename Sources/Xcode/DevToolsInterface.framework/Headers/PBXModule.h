//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <DevToolsInterface/NSToolbarDelegate-Protocol.h>
#import <DevToolsInterface/NSWindowDelegate-Protocol.h>

@class NSMapTable, NSMutableArray, NSString, NSView, PBXWindowController;

@interface PBXModule : NSWindowController <NSWindowDelegate, NSToolbarDelegate>
{
    PBXModule *_supermodule;
    NSMutableArray *_submodules;
    NSView *_view;
    id _delegate;
    NSString *_label;
    NSMapTable *_actionCache;
    struct {
        unsigned int viewLoaded:1;
        unsigned int viewIsLoading:1;
        unsigned int needsUpdate:1;
        unsigned int viewIsInstalled:1;
        unsigned int wantsOwnWindow:1;
        unsigned int ignoreForwarding:1;
        unsigned int closed:1;
        unsigned int _didCallSuperInModuleWindowWillClose:1;
        unsigned int RESERVED:24;
    } _mFlags;
    PBXWindowController *_windowController;
    NSString *_representedFilename;
}

+ (id)defaultModuleNibName;
+ (void)initialize;
- (void)_doPendingConfiguration;
- (void)_informWindowControllerOfUpdateStatus;
- (void)_module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)_module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)_moduleViewWasInstalled:(id)arg1;
- (void)_moduleViewWillBeRemoved:(id)arg1;
- (void)_moduleWindowWillClose:(id)arg1;
- (void)_recursiveModuleWindowWillClose:(id)arg1;
- (void)_removeNotificationObservers;
- (void)_viewDidLoad;
- (void)_viewWillLoad;
- (BOOL)acceptsFirstResponder;
- (id)actionCache;
- (void)addNotificationObservers;
- (void)addSubmodule:(id)arg1;
- (id)allModuleActions;
- (void)awakeFromNib;
- (void)becomeTopKeyModuleInWindow:(id)arg1;
- (BOOL)canCloneInDock;
- (BOOL)canCloseInDock;
- (BOOL)canOrderFrontWindow;
- (BOOL)canRename;
- (void)clearActionCache;
- (id)cloneInDock;
- (void)closeModule;
- (id)configurationIdentifier;
- (void)configureToolbarOnWindow:(id)arg1;
- (id)contentConfigurationDictionary;
- (void)dealloc;
- (id)delegate;
- (id)dockMenuItems;
- (void)finalize;
- (id)firstKeyView;
- (id)firstSubmoduleOfType:(Class)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)geometryConfigurationDictionary;
- (void)hide;
- (void)hideModule:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithModuleNibName:(id)arg1;
- (id)initWithModuleNibPath:(id)arg1;
- (id)initWithWindowNibName:(id)arg1;
- (id)initWithWindowNibName:(id)arg1 owner:(id)arg2;
- (id)initWithWindowNibPath:(id)arg1 owner:(id)arg2;
- (void)insertSubmodule:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isActive;
- (BOOL)isAncestorOfModule:(id)arg1;
- (BOOL)isClosed;
- (BOOL)isDocumentModule;
- (BOOL)isMainModule;
- (BOOL)isViewInstalled;
- (BOOL)isViewLoaded;
- (BOOL)isVisible;
- (id)keyTabView;
- (id)label;
- (id)lastKeyView;
- (id)loadModuleWindow;
- (BOOL)loadView;
- (void)loadWindow;
- (id)localModuleActions;
- (id)mainEditor;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)moduleDidChangeLabel:(id)arg1;
- (BOOL)moduleEnforcesViewMinSize;
- (id)moduleForAction:(SEL)arg1;
- (id)moduleNibName;
- (id)moduleNibPath;
- (BOOL)moduleShouldClose;
- (id)moduleToolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)moduleToolbarAllowedItemIdentifiers;
- (id)moduleToolbarDefaultItemIdentifiers;
- (id)moduleToolbarIdentifier;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleWasDisplayed;
- (void)moduleWasExposedByUser;
- (void)moduleWasHiddenByUser;
- (void)moduleWillBeHidden;
- (Class)moduleWindowClass;
- (id)moduleWindowFrameAutosaveName;
- (unsigned long long)moduleWindowStyleMask;
- (void)moduleWindowWillClose:(id)arg1;
- (BOOL)needsUpdate;
- (void)noteNeedsUpdate:(id)arg1;
- (void)recursivelyAddNotificationObservers;
- (void)recursivelyRemoveNotificationObservers;
- (void)removeNotificationObservers;
- (void)removeSubmodule:(id)arg1;
- (id)representedFilename;
- (void)resignTopKeyModuleInWindow:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)saveUserDefaultConfiguration;
- (id)selectedItemsForInspector:(id)arg1;
- (id)selectedProjectItems;
- (void)setDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabel:(id)arg1 representedFilename:(id)arg2;
- (void)setLabelAsFilename:(id)arg1;
- (void)setNeedsUpdate:(BOOL)arg1;
- (void)setSelectedItems:(id)arg1 forInsector:(id)arg2;
- (void)setSelectedProjectItems:(id)arg1;
- (void)setSupermodule:(id)arg1;
- (void)setView:(id)arg1;
- (void)setWantsModuleWindow:(BOOL)arg1;
- (void)showHelp:(id)arg1;
- (void)showModule:(id)arg1;
- (void)showWindow:(id)arg1;
- (id)slideOutTabIconImage;
- (id)submodules;
- (id)supermodule;
- (id)supermoduleOfType:(Class)arg1;
- (void)takeContentConfigurationFromDictionary:(id)arg1;
- (void)takeGeometryConfigurationFromDictionary:(id)arg1;
- (id)targetModuleActions;
- (id)targetModules;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarCombinableItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (void)toolbarDidRemoveItem:(id)arg1;
- (void)toolbarWillAddItem:(id)arg1;
- (void)update;
- (void)updateIfNeeded;
- (void)updateRecursivelyIfNeeded;
- (BOOL)validateLocalMenuItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)view;
- (void)viewDidLoad;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)viewWasInstalled;
- (void)viewWillBeRemoved;
- (void)viewWillLoad;
- (BOOL)wantsModuleWindow;
- (id)windowController;
- (void)windowControllerWindowWillClose:(id)arg1;
- (void)windowDidShow;
- (id)windowNibName;
- (id)windowNibPath;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (void)windowWillShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

