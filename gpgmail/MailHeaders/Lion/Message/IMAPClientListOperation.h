/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/IMAPSingleClientOperation.h>

@class NSMutableDictionary, NSString;

@interface IMAPClientListOperation : IMAPSingleClientOperation
{
    NSString *_mailboxName;
    NSString *_referenceName;
    int _options;
    NSMutableDictionary *_listing;
    NSString *_separator;
}

- (id)initWithMailboxName:(id)arg1 referenceName:(id)arg2 options:(int)arg3;
- (id)initWithMailboxName:(id)arg1 options:(int)arg2;
- (void)dealloc;
- (id)commandTypeString;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (BOOL)executeOnConnection:(id)arg1;
@property(copy) NSString *separator; // @synthesize separator=_separator;
@property(retain) NSMutableDictionary *listing; // @synthesize listing=_listing;
@property int options; // @synthesize options=_options;
@property(copy) NSString *referenceName; // @synthesize referenceName=_referenceName;
@property(copy) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;

@end

