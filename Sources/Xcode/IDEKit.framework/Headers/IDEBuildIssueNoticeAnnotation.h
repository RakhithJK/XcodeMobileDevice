//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEBuildIssueAnnotation.h>

@interface IDEBuildIssueNoticeAnnotation : IDEBuildIssueAnnotation
{
    BOOL _isCurrentNote;
}

+ (id)activeTheme;
+ (id)inactiveCurrentTheme;
+ (id)nonCurrentTheme;
+ (double)precedence;
+ (unsigned long long)severity;
+ (id)sidebarIcon;
- (id)annotationDisplayName;
- (id)currentStateInTextView:(id)arg1;
- (id)init;
@property BOOL isCurrentNote; // @synthesize isCurrentNote=_isCurrentNote;
- (BOOL)isHighlightedRangesVisible;

@end

