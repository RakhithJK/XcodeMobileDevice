//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDBase/XDDevPropertyMapping.h>

@interface XDDevRelationshipMapping : XDDevPropertyMapping
{
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (id)autoGenerateExpression;
- (BOOL)destinationHasChildren;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (id)possibleNames;
- (id)possibleSourceExpressions;
- (Class)propertyClassType;
- (void)setAutoGenerateExpression:(id)arg1;
- (void)setSourceKeyPath:(id)arg1;
- (void)setSourceMappingName:(id)arg1;
- (id)shortPropertyType;
- (id)sourceKeyPath;
- (id)sourceMappingName;
- (id)valueExpressionAsString;

@end

