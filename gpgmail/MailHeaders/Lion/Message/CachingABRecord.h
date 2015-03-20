/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class ABRecord, NSDictionary, NSMutableArray, PHXSource;

@interface CachingABRecord : NSObject
{
    ABRecord *_record;
    NSDictionary *_recordDictionary;
    BOOL _recordIsRemote;
    PHXSource *_recordSource;
    NSMutableArray *_matchingEmails;
    CachingABRecord *_associatedRecord;
}

- (id)initWithABRecord:(id)arg1;
- (id)initWithABRecord:(id)arg1 fromSource:(id)arg2 isRemote:(BOOL)arg3;
- (void)dealloc;
- (void)finalize;
- (void)refetchRecordFromSharedAddressBook;
- (id)valueForProperty:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (id)firstName;
- (id)lastName;
- (id)middleName;
- (id)nickname;
- (id)extension;
- (id)firstAndMiddleNames;
- (id)lastNameAndExtension;
- (id)_fullName;
- (id)_fullNameShowingNickname:(BOOL)arg1;
- (id)email;
- (id)emailAddresses;
- (BOOL)isGroup;
- (id)compoundName;
- (id)compoundNameAndEmail;
- (id)uniqueId;
- (int)recordType;
- (BOOL)exactlyMatchesString:(id)arg1;
- (id)associatedRecord;
- (BOOL)isRecentRecord;
- (BOOL)hasHandles;
- (BOOL)hasEmailAddress:(id)arg1;
- (BOOL)hasRelatedAddressBookRecord;
- (id)mostRecentDate;
- (id)record;
- (id)matchingEmails;
- (void)addMatchingEmail:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end

