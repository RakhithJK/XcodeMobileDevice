//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTFGraphNode;

@interface GTFGraphEdge : NSObject
{
    BOOL _reversed;
    GTFGraphNode *_from;
    GTFGraphNode *_to;
}

+ (id)edgeWithFromNode:(id)arg1 to:(id)arg2;
- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) GTFGraphNode *from; // @synthesize from=_from;
- (id)init;
- (id)initWithFromNode:(id)arg1 to:(id)arg2;
@property(nonatomic) BOOL reversed; // @synthesize reversed=_reversed;
- (void)setFromNode:(id)arg1 to:(id)arg2;
@property(retain, nonatomic) GTFGraphNode *to; // @synthesize to=_to;

@end

