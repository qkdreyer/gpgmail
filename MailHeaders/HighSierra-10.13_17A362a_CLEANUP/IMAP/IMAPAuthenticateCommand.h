//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAPSingleCommand.h>

@class MCSaslClient;

@interface IMAPAuthenticateCommand : IMAPSingleCommand
{
    BOOL _includeInitialResponse;
    MCSaslClient *_saslClient;
}

@property BOOL includeInitialResponse; // @synthesize includeInitialResponse=_includeInitialResponse;
@property(readonly, nonatomic) MCSaslClient *saslClient; // @synthesize saslClient=_saslClient;
//- (void).cxx_destruct;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)executeOnConnection:(id)arg1;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (BOOL)handlesAllUntaggedResponses;
- (id)debugCommandStringWithAccount:(id)arg1;
- (id)activityString;
- (id)commandTypeString;
- (id)init;
- (id)initWithSaslClient:(id)arg1;

@end

