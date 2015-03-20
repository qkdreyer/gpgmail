/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MCInvocationQueue, MFQuoteParser, NSMutableSet;

@interface MFSnippetManager : NSObject
{
    MCInvocationQueue *_snippetQueue;
    NSMutableSet *_messagesNeedingSnippets;
    NSMutableSet *_watchList;
    MFQuoteParser *_quoteParser;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)generateSnippetFromHTML:(id)arg1 stripQuoted:(BOOL)arg2;
- (void)_calculateSnippetForMessages;
- (id)snippetForMessage:(id)arg1;
- (void)snippetDataIsAvailableForMessage:(id)arg1;
- (void)_scheduleSnippetCalculationForMessages:(id)arg1;
- (void)scheduleSnippetCalculation;
- (id)fetchSnippetsForMessages:(id)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (id)init;

@end

