//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject-Protocol.h"

@class AttachmentViewController;

@protocol AttachmentView <NSObject>

@optional
@property(readonly, nonatomic) BOOL shouldDisplayInline;
@property(nonatomic) __weak AttachmentViewController *controller;
- (struct CGSize)desiredSizeWithMaximumWidth:(double)arg1;
@end
