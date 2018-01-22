//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject-Protocol.h"

@class MSDiagnosticManager, MSSearchSessionController;

@protocol MSSearchSessionControllerDataSource <NSObject>
@property(readonly, nonatomic) MSDiagnosticManager *diagnosticManager;
- (int)emailProviderForSearchSessionController:(MSSearchSessionController *)arg1;
- (unsigned long long)percentOfMessagesIndexedForSearchSessionController:(MSSearchSessionController *)arg1;
- (unsigned long long)numberOfMessagesLeftToIndexForSearchSessionController:(MSSearchSessionController *)arg1;
@end

