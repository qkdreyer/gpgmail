/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@interface Defaults : NSObject
{
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (void)setupLoggingDefaults;
+ (id)logMessages;
+ (id)localeCache;
+ (void)resetLocaleCache;
+ (void)setPreferredWindowBackingLocation:(unsigned long long)arg1;
+ (unsigned long long)preferredWindowBackingLocation;
+ (unsigned long long)deferredPreferredWindowBackingLocation;
- (void)dealloc;
- (void)finalize;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (long long)headerDetailLevel;
- (void)setHeaderDetailLevel:(long long)arg1;
- (id)headersToDisplayFromHeaderKeys:(id)arg1 headerDetailLevel:(long long)arg2;
- (id)customDisplayedHeaders;
- (void)setCustomDisplayedHeaders:(id)arg1;
- (long long)composeMode;
- (void)setComposeMode:(long long)arg1;
- (BOOL)_calculateShouldUseV1Layout;
- (void)mf_resetV1Layout;
- (BOOL)mf_v1Layout;
- (id)mailAccountDirectory;
- (id)tildeUnresolvedBaseMailDirectory;
- (id)unresolvedBaseMailDirectory;
- (id)baseMailDirectory;
- (void)_setSupportDirectoryForTesting:(id)arg1;
- (id)supportDirectory;
- (id)mailDataSupportDirectory;
- (id)mailDataDirectory;
- (id)mailDataDirectoryName;
- (id)defaultMailDirectory;
- (id)defaultRSSDirectory;
- (id)_adjustPathForV2:(id)arg1 usingPrefix:(id)arg2;
- (id)adjustAccountPathForV2:(id)arg1;
- (id)archiveMailbox;
- (id)draftsMailbox;
- (id)notesMailbox;
- (id)trashMailboxName;
- (id)todosMailbox;
- (id)quotingColorList;
- (void)setQuotingColorList:(id)arg1;
- (id)colorForQuoteLevel:(long long)arg1;
- (id)userStyleSheetURLIsForCompose:(BOOL)arg1;
- (id)unrenderedUserStyleSheet;
- (id)dictionaryForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (BOOL)synchronize;

@end

