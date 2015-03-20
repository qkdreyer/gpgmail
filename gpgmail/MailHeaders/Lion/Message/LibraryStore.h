/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <MessageStore.h>

@class MessageCriterion, NSMutableArray, NSMutableSet, NSString;

@interface LibraryStore : MessageStore
{
    MessageCriterion *_criterion;
    NSString *_url;
    id _openOptionsLock;
    unsigned int _openOptions;
    NSMutableSet *_memberMessageIDs;
    NSMutableArray *_allMessagesDuringOpening;
}

+ (void)initialize;
+ (id)_storeCacheMapTable;
+ (unsigned int)defaultLoadOptions;
+ (id)storeWithMailbox:(id)arg1;
+ (id)sharedInstance;
+ (id)filterMessages:(id)arg1 throughSmartMailbox:(id)arg2;
+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (BOOL)storeAtPathIsWritable:(id)arg1;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;
- (id)init;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (id)initWithCriterion:(id)arg1;
- (id)initWithMailbox:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (long long)mailboxID;
- (void)updateCriterionFromMailbox;
- (void)newMessagesAvailable:(id)arg1 conversationsMembers:(id)arg2 fromLibraryStoreMessageConsumer:(id)arg3;
- (id)notificationMessagesFromOpen;
- (void)libraryFinishedSendingMessagesToLibraryStoreMessageConsumer:(id)arg1;
- (void)openAsynchronouslyWithOptions:(unsigned int)arg1;
- (BOOL)_shouldUpdateColorsAndAttachmentsAfterOpening;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;
- (id)openSynchronouslyUpdatingMetadata:(BOOL)arg1 returnRetainedMessages:(BOOL)arg2;
- (unsigned int)_openOptions;
- (unsigned long long)totalCount;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (void)asynchronousCopyOfAllMessagesWithOptions:(id)arg1;
- (id)mutableCopyOfAllMessages;
- (id)filterMessagesByMembership:(id)arg1;
- (BOOL)supportsSnippets;
- (id)snippetsForMessages:(id)arg1;
- (void)saveSnippetsForMessages:(id)arg1;
- (id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)async_setLocalFlagsForMessages:(id)arg1;
- (void)setFlagsAndColorForMessages:(id)arg1;
- (void)_setFlagsAndColorForMessages:(id)arg1;
- (void)_messagesAddedToLibrary:(id)arg1;
- (void)messagesWereAdded:(id)arg1 conversationsMembers:(id)arg2 duringOpen:(BOOL)arg3;
- (void)_messageFlagsChanged:(id)arg1;
- (void)_messagesCompacted:(id)arg1;
- (void)_messagesUpdated:(id)arg1;
- (void)_invalidate;
- (void)dealloc;
- (void)finalize;
- (id)messageForMessageID:(id)arg1;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(long long)arg1 compact:(BOOL)arg2;
- (BOOL)allowsAppend;
- (BOOL)allowsOverwrite;
- (int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 newDocumentIDsByOld:(id)arg5 flagsToSet:(id)arg6 forMove:(BOOL)arg7 error:(id *)arg8;
- (int)undoAppendOfMessageIDs:(id)arg1;
- (void)finishCopyOfMessages:(id)arg1 fromStore:(id)arg2 originalsWereDeleted:(BOOL)arg3;
- (BOOL)canCompact;
- (BOOL)_shouldCallCompactWhenClosing;
- (void)doCompact;
- (id)duplicateCopiesOfMessages:(id)arg1;
- (id)duplicateCopiesOfMessages:(id)arg1 withDocumentIDs:(id)arg2 excludingMessageIDs:(id)arg3;
- (id)lastMessageWithHeaders:(id)arg1 inMailbox:(id)arg2;
- (void)deleteLastMessageWithHeaders:(id)arg1 compactWhenDone:(BOOL)arg2;
- (id)recentMessageWithValue:(id)arg1 forHeader:(id)arg2;
- (id)dataForMimePart:(id)arg1;
- (void)writeUpdatedMessageDataToDisk;
- (void)updateMetadata;
- (void)_setNeedsAutosave;
- (void)_cancelAutosave;
- (id)criterion;
- (void)_flushAllMessageData;
- (void)rebuildTableOfContentsAsynchronously;
- (void)_rebuildTableOfContentsSynchronously;
- (unsigned long long)_numberOfMessagesToCache;
- (void)_invalidateObjectCachesForKey:(id)arg1;
- (id)_setOrGetValue:(id)arg1 forKey:(id)arg2 inCache:(id *)arg3;
- (BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3;
- (BOOL)setPreferredEncoding:(unsigned int)arg1 forMessage:(id)arg2;
@property(retain) NSString *url; // @synthesize url=_url;
- (id)objectSpecifierForMessage:(id)arg1;

@end

