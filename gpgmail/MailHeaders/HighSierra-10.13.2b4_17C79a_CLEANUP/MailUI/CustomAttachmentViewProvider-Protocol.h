//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject-Protocol.h"

@class AttachmentViewController, NSArray, NSView/*<AttachmentView>*/;

@protocol CustomAttachmentViewProvider <NSObject>

@optional
+ (NSView/*<AttachmentView>*/ *)viewForAttachmentViewController:(AttachmentViewController *)arg1;
+ (NSArray *)viewableMimeTypes;
@end

