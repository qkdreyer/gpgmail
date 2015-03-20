/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

@class NSHashTable;

@interface MailNotificationCenter : NSNotificationCenter
{
    NSHashTable *_nameTable;
}

- (void)dealloc;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)addObserverInMainThread:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_postNotificationWithMangledName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)removeSafeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;

@end

