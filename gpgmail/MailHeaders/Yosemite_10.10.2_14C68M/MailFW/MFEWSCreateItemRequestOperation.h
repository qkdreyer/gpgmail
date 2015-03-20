/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Mail/MFEWSRequestOperation.h>

#import "NSCoding.h"

@class NSString;

@interface MFEWSCreateItemRequestOperation : MFEWSRequestOperation <NSCoding>
{
    BOOL _messageType;
    BOOL _wroteOfflineData;
    NSString *_EWSFolderIdString;
    long long _disposition;
    NSString *_offlineCreatedEWSItemIdString;
}

+ (Class)classForResponse;
@property BOOL wroteOfflineData; // @synthesize wroteOfflineData=_wroteOfflineData;
@property(retain) NSString *offlineCreatedEWSItemIdString; // @synthesize offlineCreatedEWSItemIdString=_offlineCreatedEWSItemIdString;
@property(readonly, nonatomic) long long disposition; // @synthesize disposition=_disposition;
@property(readonly, nonatomic) BOOL messageType; // @synthesize messageType=_messageType;
@property(readonly, copy, nonatomic) NSString *EWSFolderIdString; // @synthesize EWSFolderIdString=_EWSFolderIdString;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupOfflineResponse;
- (id)activityString;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)_ewsCreateItemRequestOperationCommonInitWithFolderIdString:(id)arg1 messageType:(BOOL)arg2 disposition:(long long)arg3;
- (id)initWithFolderIdString:(id)arg1 messageType:(BOOL)arg2 disposition:(long long)arg3 gateway:(id)arg4 errorHandler:(id)arg5;

@end

