//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTProducts/DVTProductSource.h>

@class DVTDelayedInvocation, DVTObservingToken, IDEArchiveManager;

@interface DVTArchiveProductSource : DVTProductSource
{
    IDEArchiveManager *_archiveManager;
    DVTObservingToken *_archivedProductsObservingToken;
    DVTDelayedInvocation *_updateArchivesDelayedInvocation;
}

- (void).cxx_destruct;
- (void)_addArchive:(id)arg1 toMalformedProductsDict:(id)arg2;
- (id)_productsFromArchives:(id)arg1 coordinator:(id)arg2;
- (void)_startLocating;
@property(retain, nonatomic) IDEArchiveManager *archiveManager; // @synthesize archiveManager=_archiveManager;
@property(retain) DVTObservingToken *archivedProductsObservingToken; // @synthesize archivedProductsObservingToken=_archivedProductsObservingToken;
- (id)initWithArchiveManager:(id)arg1 productManager:(id)arg2;
- (id)initWithProductManager:(id)arg1;
- (id)mostRecentArchive:(id)arg1;
- (void)primitiveInvalidate;
- (void)refreshProducts;
@property(retain, nonatomic) DVTDelayedInvocation *updateArchivesDelayedInvocation; // @synthesize updateArchivesDelayedInvocation=_updateArchivesDelayedInvocation;

@end
