//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCollectionView.h>

@protocol IDETemplateChooserCollectionViewDelegate;

@interface IDETemplateChooserCollectionView : NSCollectionView
{
    BOOL _dontSendSelectionIndexesChanges;
}

- (BOOL)_ensureSelectionPreferringLastItem:(BOOL)arg1;
@property id <IDETemplateChooserCollectionViewDelegate> delegate;
- (void)insertNewline:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveUp:(id)arg1;

@end

