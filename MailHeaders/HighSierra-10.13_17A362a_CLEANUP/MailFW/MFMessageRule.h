//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

//#import "NSCopying-Protocol.h"

@class MFMailbox, NSArray, NSColor, NSDictionary, NSMutableArray, NSString;

@interface MFMessageRule : NSObject <NSCopying>
{
    MFMailbox *_copyDestinationMailbox;
    NSString *_copyDestinationMailboxURL;
    MFMailbox *_destinationMailbox;
    NSString *_destinationMailboxURL;
    NSColor *_color;
    NSString *_playSound;
    NSString *_appleScriptPath;
    NSArray *_recipients;
    NSString *_responseMessage;
    int _autoResponseType;
    NSString *_ruleName;
    NSMutableArray *_criteria;
    long long _flags;
    unsigned int _isActive:1;
    unsigned int _ruleWasAutoDeactivated:1;
    unsigned int _allCriteriaMustBeSatisfied:1;
    unsigned int _shouldTransferMessage:1;
    unsigned int _shouldCopyMessage:1;
    unsigned int _shouldStopEvaluatingRules:1;
    unsigned int _highlightTextUsingColor:1;
    unsigned int _shouldNotifyUser:1;
    unsigned int _addInvitationAttachmentToCalendar:1;
    unsigned int _shouldSendNotification:1;
    BOOL _isJunkMailRule;
    BOOL _isSafeToMarkAsNotJunkRule;
    BOOL _isCalendarRule;
    BOOL _didChange;
    NSString *_uniqueId;
    NSDictionary *_otherInfo;
}

+ (id)appleScriptLock;
+ (void)initialize;
@property(nonatomic) BOOL didChange; // @synthesize didChange=_didChange;
@property(readonly, copy, nonatomic) NSDictionary *otherInfo; // @synthesize otherInfo=_otherInfo;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) BOOL isCalendarRule; // @synthesize isCalendarRule=_isCalendarRule;
@property(nonatomic) BOOL isSafeToMarkAsNotJunkRule; // @synthesize isSafeToMarkAsNotJunkRule=_isSafeToMarkAsNotJunkRule;
@property(nonatomic) BOOL isJunkMailRule; // @synthesize isJunkMailRule=_isJunkMailRule;
//- (void).cxx_destruct;
- (id)objectSpecifier;
- (BOOL)isEqualToRule:(id)arg1;
@property(nonatomic) BOOL shouldSendNotification;
@property(nonatomic) BOOL addInvitationAttachmentToCalendar;
@property(nonatomic) BOOL shouldNotifyUser;
@property(nonatomic) BOOL shouldStopEvaluatingRules;
@property(copy, nonatomic) NSString *playSound;
@property(copy, nonatomic) NSString *responseMessage;
- (void)handleDidChange;
- (void)handleDidChangeIfNeeded;
@property(copy, nonatomic) NSArray *autoResponseRecipients;
@property(nonatomic) int autoResponseType;
@property(readonly, nonatomic) BOOL affectsColorEvaluation;
@property(nonatomic) BOOL highlightTextUsingColor;
@property(retain, nonatomic) NSColor *color;
@property(copy, nonatomic) NSString *appleScriptPath;
@property(nonatomic) long long flagsToApply;
- (void)setAppleScriptDestinationMailbox:(id)arg1;
- (void)setAppleScriptCopyDestinationMailbox:(id)arg1;
//- (void)_evaluateIfNeeded:(id)arg1 andSetUsingBlock:(CDUnknownBlockType)arg2;
- (id)appleScriptCopyDestinationMailbox;
- (id)appleScriptDestinationMailbox;
- (BOOL)invalidateDestinationMailboxesForURLString:(id)arg1;
- (void)tryToReconnectDestinationIfNeeded;
- (id)_tryToGetMailboxForURLString:(id)arg1;
@property(retain, nonatomic) MFMailbox *copyDestinationMailbox;
- (id)_copyDestinationMailboxCreateIfNeeded:(BOOL)arg1;
@property(retain, nonatomic) MFMailbox *destinationMailbox;
- (id)_destinationMailboxCreateIfNeeded:(BOOL)arg1;
- (void)_setDestinationIvar:(id *)arg1 toDestinationMailbox:(id)arg2 destinationURLIvar:(id *)arg3;
//- (id)_destinationMailbox:(id)arg1 withURL:(id)arg2 createIfNeeded:(BOOL)arg3 setUsingBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) BOOL shouldCopyMessage;
@property(nonatomic) BOOL shouldTransferMessage;
- (void)removeObjectFromCriteriaAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inCriteriaAtIndex:(unsigned long long)arg2;
@property(copy, nonatomic) NSArray *criteria;
@property(nonatomic) BOOL allCriteriaMustBeSatisfied;
@property(nonatomic) BOOL isActive;
@property(readonly, nonatomic) BOOL isTerminalAction;
@property(copy, nonatomic) NSString *ruleName;
- (BOOL)isValid:(id *)arg1 options:(unsigned int)arg2;
- (BOOL)doesMessageSatisfyCriteria:(id)arg1 fetchBody:(BOOL)arg2 needsBody:(char *)arg3 successfullyEvaluated:(char *)arg4;
- (void)addHeadersRequiredForRoutingToArray:(id)arg1;
- (void)_performAddInvitationAttachmentToCalendarActionOnMessages:(id)arg1;
- (void)_performAppleScriptActionWithMessages:(id)arg1;
- (void)_performAutoResponseActionOnMessages:(id)arg1;
- (id)_performAutoResponseActionOnMessage:(id)arg1 encrypt:(BOOL)arg2 includeOrignalMessageText:(BOOL)arg3;
- (void)_performUserNotificationAction:(id)arg1;
- (void)performActionsOnMessages:(id)arg1 sourceStores:(id)arg2 destinationStores:(id)arg3 transferredOrDeleted:(id)arg4 rejectedMessages:(id)arg5 messagesToBeDeleted:(id)arg6;
- (void)_appendMessages:(id)arg1 fromSourceMailbox:(id)arg2 toDestinationMailbox:(id)arg3 destinationStores:(id)arg4 rejectedMessages:(id)arg5 messagesToBeDeleted:(id)arg6;
- (void)_updateDefaultAppleEmailAddressRule;
- (id)dictionaryRepresentationIncludePII:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)mailboxPathForMailboxURL:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_syncableMailboxURLStringForMailbox:(id)arg1;
- (id)initWithRule:(id)arg1;
- (id)init;
- (BOOL)isEquivalentExceptForTitleAndIDs:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setAddress:(id)arg1 forResponseType:(int)arg2;
- (void)removeFromCriteriaAtIndex:(unsigned long long)arg1;
- (void)insertInCriteria:(id)arg1;
- (void)insertInCriteria:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setRuleDescription:(id)arg1;
- (id)ruleDescription;
- (void)setActionRunApplescript:(id)arg1;
- (id)actionRunApplescript;
- (void)setActionReplyText:(id)arg1;
- (id)actionReplyText;
- (void)setActionRedirectToAddress:(id)arg1;
- (id)actionRedirectToAddress;
- (void)setActionMarkAsRead:(BOOL)arg1;
- (BOOL)actionMarkAsRead;
- (void)setActionMarkAsFlaggedStatus:(long long)arg1;
- (long long)actionMarkAsFlaggedStatus;
- (void)setActionMarkAsFlagged:(BOOL)arg1;
- (BOOL)actionMarkAsFlagged;
- (void)setActionForwardText:(id)arg1;
- (id)actionForwardText;
- (void)setActionForwardToAddress:(id)arg1;
- (id)actionForwardToAddress;
- (void)setActionDeleteMessage:(BOOL)arg1;
- (BOOL)actionDeleteMessage;
- (unsigned int)highlightColorValue:(id)arg1;
- (void)setActionColorMessage:(unsigned int)arg1;
- (unsigned int)actionColorMessage;
- (void)updateIsActive;

@end

