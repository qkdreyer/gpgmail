/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MCMailAccount.h"

@protocol MCRemoteStoreAccount <MCMailAccount>
- (void)presentOverQuotaAlert;
- (void)setCachePolicy:(long long)arg1 permanently:(BOOL)arg2;
- (long long)cachePolicy;
@end

