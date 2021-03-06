//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFMessageStore.h"

@class MFLibraryStoreMessageConsumer, MFMessageCriterion, NSArray, NSMutableArray, NSMutableSet, NSString;

@interface MFLibraryStore : MFMessageStore
{
    id _openOptionsLock;	// 16 = 0x10
    unsigned int _openOptions;	// 24 = 0x18
    NSMutableSet *_memberMessageIDs;	// 32 = 0x20
    id _allMessagesDuringOpeningLock;	// 40 = 0x28
    NSMutableArray *_allMessagesDuringOpening;	// 48 = 0x30
    id _consumerLock;	// 56 = 0x38
    MFLibraryStoreMessageConsumer *_consumer;	// 64 = 0x40
    NSString *_url;	// 72 = 0x48
    MFMessageCriterion *_criterion;	// 80 = 0x50
}

+ (BOOL)storeAtPathIsWritable:(id)arg1;	// IMP=0x0000000000167eff
+ (BOOL)createEmptyStoreForPath:(id)arg1;	// IMP=0x0000000000167e3f
+ (id)filterMessages:(id)arg1 throughSmartMailbox:(id)arg2;	// IMP=0x00000000001645eb
+ (id)sharedInstance;	// IMP=0x000000000015fdcb
+ (unsigned int)defaultLoadOptions;	// IMP=0x000000000015f206
+ (void)initialize;	// IMP=0x000000000015f0a3
@property(retain) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
@property(copy) NSString *url; // @synthesize url=_url;
//- (void).cxx_destruct;	// IMP=0x0000000000168d5b
- (BOOL)hasCacheFileForMessage:(id)arg1;	// IMP=0x0000000000168bd5
- (BOOL)messageHasBeenDeleted:(id)arg1;	// IMP=0x0000000000168a9f
- (id)attachmentsDirectoryForMessage:(id)arg1 partNumber:(id)arg2;	// IMP=0x0000000000168a04
- (id)attachmentsDirectoryForMessage:(id)arg1;	// IMP=0x0000000000168961
- (void)moveMessagesToRecoveredMail:(id)arg1;	// IMP=0x0000000000168720
- (BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3;	// IMP=0x00000000001685f0
- (id)_setOrGetValue:(id)arg1 forKey:(id)arg2 inCache:(id *)arg3;	// IMP=0x0000000000168533
- (void)_invalidateObjectCachesForKey:(id)arg1;	// IMP=0x00000000001684b7
- (unsigned long long)_numberOfMessagesToCache;	// IMP=0x00000000001684ac
- (void)_rebuildTableOfContentsSynchronously;	// IMP=0x000000000016817b
- (void)rebuildTableOfContentsAsynchronously;	// IMP=0x0000000000168001
- (void)_flushAllMessageData;	// IMP=0x0000000000167f7b
- (void)_cancelAutosave;	// IMP=0x0000000000167e39
- (void)_setNeedsAutosave;	// IMP=0x0000000000167e33
- (void)updateMetadata;	// IMP=0x0000000000167e2d
- (void)writeUpdatedMessageDataToDisk;	// IMP=0x0000000000167e27
- (id)messagesForDocumentID:(id)arg1;	// IMP=0x0000000000167daa
- (id)recentMessageWithValue:(id)arg1 forHeader:(id)arg2;	// IMP=0x00000000001675f1
- (void)deleteLastMessageWithHeaders:(id)arg1 compactWhenDone:(BOOL)arg2;	// IMP=0x0000000000167469
- (id)lastMessageWithHeaders:(id)arg1 inMailbox:(id)arg2;	// IMP=0x0000000000167155
- (id)duplicateCopiesOfMessages:(id)arg1 withDocumentIDs:(id)arg2 excludingMessageIDs:(id)arg3;	// IMP=0x0000000000166e1a
- (id)duplicateCopiesOfMessages:(id)arg1;	// IMP=0x0000000000166b01
- (void)doCompact;	// IMP=0x00000000001665e8
- (BOOL)shouldCallCompactWhenClosing;	// IMP=0x0000000000166571
- (BOOL)canCompact;	// IMP=0x000000000016651f
- (long long)undoAppendOfLibraryIDs:(id)arg1;	// IMP=0x0000000000166441
- (long long)appendMessages:(id)arg1 missedMessages:(id)arg2 newMessages:(id)arg3 newDocumentIDsByOld:(id)arg4 flagsToSet:(id)arg5 appendReason:(long long)arg6 userInitiated:(BOOL)arg7 error:(id *)arg8;	// IMP=0x0000000000165bba
- (long long)updateMessages:(id)arg1 withLibraryIDs:(id)arg2 newMessages:(id)arg3;	// IMP=0x0000000000165a1c
- (BOOL)allowsOverwrite;	// IMP=0x0000000000165a0a
- (BOOL)allowsAppend;	// IMP=0x00000000001659d6
- (void)deleteMessagesOlderThanNumberOfDays:(long long)arg1 compact:(BOOL)arg2;	// IMP=0x0000000000165923
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;	// IMP=0x0000000000165042
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;	// IMP=0x0000000000164f36
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;	// IMP=0x0000000000164e90
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;	// IMP=0x0000000000164d5c
- (id)messageForMessageID:(id)arg1;	// IMP=0x0000000000164d43
- (void)_cancelQueryAndClearConsumer:(BOOL)arg1;	// IMP=0x0000000000164b5e
- (void)cancelQuery;	// IMP=0x0000000000164b47
- (void)cancelOpen;	// IMP=0x0000000000164b08
- (void)cleanupSynchronously;	// IMP=0x0000000000164ac9
- (void)dealloc;	// IMP=0x0000000000164a53
- (void)_invalidate;	// IMP=0x00000000001649d0
- (void)_messagesUpdated:(id)arg1;	// IMP=0x00000000001644e0
- (void)_messagesCompacted:(id)arg1;	// IMP=0x00000000001640c4
- (void)_messageFlagsChanged:(id)arg1;	// IMP=0x0000000000163fdc
- (void)messagesWereAdded:(id)arg1 secondaryMessages:(id)arg2 duringOpen:(BOOL)arg3 options:(id)arg4;	// IMP=0x0000000000163d63
- (void)_messagesAddedToLibrary:(id)arg1;	// IMP=0x0000000000163c58
- (void)_setFlagsAndColorForMessages:(id)arg1;	// IMP=0x0000000000163658
- (void)setFlagsAndColorForMessages:(id)arg1;	// IMP=0x000000000016363f
- (id)async_setLocalFlagsForMessages:(id)arg1;	// IMP=0x0000000000162b09
- (void)updateGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x0000000000162acc
- (id)_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2 async:(BOOL)arg3;	// IMP=0x000000000016262f
- (id)setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x00000000001625d4
- (void)async_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x000000000016257e
- (id)_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 async:(BOOL)arg3;	// IMP=0x0000000000161bb2
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x0000000000161b57
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x0000000000161b01
- (void)saveSnippetsForMessages:(id)arg1;	// IMP=0x000000000016181c
- (id)snippetsForMessages:(id)arg1;	// IMP=0x0000000000161702
- (BOOL)supportsSnippets;	// IMP=0x00000000001616f7
- (id)filterMessagesByMembership:(id)arg1;	// IMP=0x000000000016136b
- (id)mutableCopyOfAllMessages;	// IMP=0x000000000016132f
- (void)_asynchronousCopyOfAllMessagesWithOptions:(id)arg1;	// IMP=0x000000000016117d
- (void)asynchronousCopyOfAllMessagesWithOptions:(id)arg1;	// IMP=0x0000000000161110
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;	// IMP=0x0000000000160e73
- (id)copyOfAllMessages;	// IMP=0x0000000000160e5b
- (unsigned long long)totalCount;	// IMP=0x0000000000160e10
- (unsigned int)_openOptions;	// IMP=0x0000000000160dda
- (void)cleanupAsynchronously;	// IMP=0x0000000000160d16
- (id)openSynchronouslyUpdatingMetadata:(BOOL)arg1 returnRetainedMessages:(BOOL)arg2;	// IMP=0x00000000001606c4
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;	// IMP=0x00000000001605b7
- (BOOL)_shouldUpdateColorsAndAttachmentsAfterOpening;	// IMP=0x0000000000160564
- (void)openAsynchronouslyWithOptions:(unsigned int)arg1;	// IMP=0x0000000000160446
- (void)libraryFinishedSendingMessagesToLibraryStoreMessageConsumer:(id)arg1;	// IMP=0x00000000001603a4
@property(readonly, copy) NSArray *notificationMessagesFromOpen;
- (void)newMessagesAvailable:(id)arg1 secondaryMessages:(id)arg2 fromLibraryStoreMessageConsumer:(id)arg3 options:(id)arg4;	// IMP=0x00000000001601c2
- (void)_updateCriterionFromMailbox:(id)arg1;	// IMP=0x0000000000160139
@property(readonly, nonatomic) long long mailboxID;
- (void)reset;	// IMP=0x000000000015fddc
- (id)initWithAccount:(id)arg1;	// IMP=0x000000000015fcfc
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2 createEmptyStore:(BOOL)arg3;	// IMP=0x000000000015fc2d
- (id)initWithMailbox:(id)arg1;	// IMP=0x000000000015fc19
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2;	// IMP=0x000000000015fb99
- (id)initWithCriterion:(id)arg1;	// IMP=0x000000000015fb7f
- (id)init;	// IMP=0x000000000015fb63
- (BOOL)_criterionContainsGmailLabelCriterion:(id)arg1;	// IMP=0x000000000015f8f9
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;	// IMP=0x000000000015f212
- (id)objectSpecifierForMessage:(id)arg1;	// IMP=0x00000000001ef484

@end

