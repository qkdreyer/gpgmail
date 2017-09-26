//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTMMessage.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface MTMIndexedMessage : MTMMessage
{
    NSString *_realPath;
    BOOL _realPathComputed;
    NSString *_to;
    NSMutableDictionary *_computedAdditionalProperties;
    BOOL _hasCachedChange;
    BOOL _cachedChange;
    id _identifier;
    NSDictionary *_attributes;
}

@property(nonatomic) BOOL cachedChange; // @synthesize cachedChange=_cachedChange;
@property(nonatomic) BOOL hasCachedChange; // @synthesize hasCachedChange=_hasCachedChange;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (id)identifier;
//- (void).cxx_destruct;
- (void)updateAdditionalPropertiesFromComputedProperties;
- (void)computeAdditionalProperties;
- (BOOL)messageHasChangedFromSnapshot:(id)arg1;
- (id)to;
- (id)savedDate;
- (id)subject;
- (id)URL;
- (id)path;
- (id)init;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;

@end

