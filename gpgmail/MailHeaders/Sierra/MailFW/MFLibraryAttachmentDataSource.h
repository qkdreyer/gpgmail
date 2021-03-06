//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCRemoteAttachmentDataSource-Protocol.h"
#import "MCAttachmentDataSource-Protocol.h"

@class MFLibraryMessage, NSMutableSet, NSString;

@interface MFLibraryAttachmentDataSource : NSObject <MCAttachmentDataSource>
{
    BOOL _isMailDropImageArchive;	// 8 = 0x8
    BOOL _isMailDropImageThumbnail;	// 9 = 0x9
    BOOL _isAutoArchiveAttachment;	// 10 = 0xa
    MFLibraryMessage *_message;	// 16 = 0x10
    NSString *_mimePartNumber;	// 24 = 0x18
    NSString *_attachmentFilename;	// 32 = 0x20
    id <MCRemoteAttachmentDataSource> _remoteDataSource;	// 40 = 0x28
    NSMutableSet *_remoteFetchOperations;	// 48 = 0x30
}

+ (id)_asyncOperationQueue;	// IMP=0x00000000001427f6
@property(readonly, nonatomic) BOOL isAutoArchiveAttachment; // @synthesize isAutoArchiveAttachment=_isAutoArchiveAttachment;
@property(readonly, nonatomic) BOOL isMailDropImageThumbnail; // @synthesize isMailDropImageThumbnail=_isMailDropImageThumbnail;
@property(readonly, nonatomic) BOOL isMailDropImageArchive; // @synthesize isMailDropImageArchive=_isMailDropImageArchive;
@property(retain, nonatomic) NSMutableSet *remoteFetchOperations; // @synthesize remoteFetchOperations=_remoteFetchOperations;
@property(readonly, nonatomic) id <MCRemoteAttachmentDataSource> remoteDataSource; // @synthesize remoteDataSource=_remoteDataSource;
@property(readonly, copy, nonatomic) NSString *attachmentFilename; // @synthesize attachmentFilename=_attachmentFilename;
@property(readonly, copy, nonatomic) NSString *mimePartNumber; // @synthesize mimePartNumber=_mimePartNumber;
@property(readonly, nonatomic) MFLibraryMessage *message; // @synthesize message=_message;
//- (void).cxx_destruct;	// IMP=0x0000000000145321
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL canResultsBeCached;
@property(readonly, nonatomic) BOOL dataIsLocallyAvailable;
- (id)approximateSizeForAccessLevel:(long long)arg1;	// IMP=0x00000000001447ae
- (void)fileWrapperForAccessLevel:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000143f62
- (void)_dataFromRemoteDataSourceWithAccessLevel:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000143b13
- (id)_dataFromStore:(id *)arg1;	// IMP=0x00000000001436f0
- (id)_dataFromBinaryAttachmentFile:(id *)arg1;	// IMP=0x0000000000142cd1
- (void)dataForAccessLevel:(long long)arg1 completionBlock:(void (^)(NSData *data))arg2;	// IMP=0x0000000000142a77
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000142691
- (id)init;	// IMP=0x00000000001425c2
- (id)initWithMessage:(id)arg1 mimePartNumber:(id)arg2 attachment:(id)arg3 remoteDataSource:(id)arg4;	// IMP=0x000000000014242f

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

