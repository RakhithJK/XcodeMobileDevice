//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDBase/XDPMProperty.h>

#import <XDBase/XCDiffHashing-Protocol.h>

@interface XDPMFetchedProperty : XDPMProperty <XCDiffHashing>
{
}

- (id)addKeysToDictionary:(id)arg1;
- (BOOL)boldFont;
- (id)children;
- (id)childrenForRefactoring;
- (void)dealloc;
- (unsigned long long)diffHashForDataSource:(id)arg1;
- (id)fetchRequest;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEditableForOptionalFlag;
- (BOOL)isEditableForTransientFlag;
- (BOOL)isGroupItem;
- (BOOL)isOptional;
- (BOOL)isTransient;
- (BOOL)italicFont;
- (id)nameForRefactoring;
- (id)possibleDestinationEntities;
- (id)possibleValuesForSharedKeyOne;
- (id)propertyKind;
- (void)setIsOptional:(BOOL)arg1;
- (void)setIsTransient:(BOOL)arg1;
- (void)setSharedKeyOne:(id)arg1;
- (id)sharedKeyOne;

@end

