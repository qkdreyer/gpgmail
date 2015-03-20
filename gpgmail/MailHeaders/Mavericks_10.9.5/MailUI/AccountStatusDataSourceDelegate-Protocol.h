/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol AccountStatusDataSourceDelegate <NSObject>

@optional
- (void)configureMenuItem:(id)arg1 forAccount:(id)arg2;
- (void)showConnectionDoctor:(id)arg1;
- (void)editServerList:(id)arg1 selectedAccount:(id)arg2;
- (void)toggleAccountLock:(id)arg1;
- (void)addServer:(id)arg1;
- (void)setSelectedAccount:(id)arg1;
@end

