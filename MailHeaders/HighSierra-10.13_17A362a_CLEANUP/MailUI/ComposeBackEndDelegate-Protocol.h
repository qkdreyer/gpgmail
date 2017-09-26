//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject-Protocol.h"

@class ComposeBackEnd, MCActivityMonitor, MCMutableMessageHeaders, MCOutgoingMessage, NSArray, NSError;

@protocol ComposeBackEndDelegate <NSObject>
@property(nonatomic) BOOL shouldCloseWindowWhenAnimationCompletes;
- (void)updateUIAfterAppleScriptModification:(ComposeBackEnd *)arg1;
- (unsigned long long)estimatedMessageSize;
- (void)backEndHandedMessageToDevice:(ComposeBackEnd *)arg1;
- (void)backEndDidCancelMessageDeliveryForAttachmentError:(ComposeBackEnd *)arg1;
- (void)backEnd:(ComposeBackEnd *)arg1 didCancelMessageDeliveryForError:(NSError *)arg2;
- (void)backEnd:(ComposeBackEnd *)arg1 didCancelMessageDeliveryForEncryptionError:(NSError *)arg2;
- (void)backEnd:(ComposeBackEnd *)arg1 didCancelMessageDeliveryForMissingCertificatesForRecipients:(NSArray *)arg2;
- (BOOL)backEnd:(ComposeBackEnd *)arg1 shouldDeliverMessage:(MCOutgoingMessage *)arg2;
- (BOOL)backEnd:(ComposeBackEnd *)arg1 shouldSaveMessage:(MCOutgoingMessage *)arg2;
- (void)backEndDidLoadInitialContent:(ComposeBackEnd *)arg1;
- (void)backEnd:(ComposeBackEnd *)arg1 didBeginBackgroundLoadActivity:(MCActivityMonitor *)arg2;
- (void)backEndDidSaveMessage:(ComposeBackEnd *)arg1 result:(long long)arg2;
- (void)backEndDidAppendMessageToOutbox:(ComposeBackEnd *)arg1 result:(long long)arg2;
- (void)backEndDidChange:(ComposeBackEnd *)arg1;
- (void)backEnd:(ComposeBackEnd *)arg1 willCreateMessageWithHeaders:(MCMutableMessageHeaders *)arg2;
@end

