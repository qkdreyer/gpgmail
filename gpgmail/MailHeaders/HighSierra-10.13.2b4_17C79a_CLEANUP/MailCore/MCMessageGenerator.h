//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSArray;

@interface MCMessageGenerator : NSObject
{
    struct OpaqueSecIdentityRef *_signingIdentity;
    BOOL _shouldConvertCompositeImages;
    BOOL _shouldMarkNonresizableAttachmentData;
    BOOL _createsMimeAlternatives;
    BOOL _createsPlainTextOnly;
    BOOL _alwaysCreatesRichText;
    BOOL _allows8BitMimeParts;
    BOOL _allowsBinaryMimeParts;
    BOOL _allowsAppleDoubleAttachments;
    unsigned long long _preferredEncoding;
    unsigned long long _encodingHint;
    NSArray *_encryptionCertificates;
}

+ (id)domainHintForResentIDFromHeaders:(id)arg1 hasResentFromHeaders:(char *)arg2;
@property(copy, nonatomic) NSArray *encryptionCertificates; // @synthesize encryptionCertificates=_encryptionCertificates;
@property(nonatomic) BOOL allowsAppleDoubleAttachments; // @synthesize allowsAppleDoubleAttachments=_allowsAppleDoubleAttachments;
@property(nonatomic) BOOL allowsBinaryMimeParts; // @synthesize allowsBinaryMimeParts=_allowsBinaryMimeParts;
@property(nonatomic) BOOL allows8BitMimeParts; // @synthesize allows8BitMimeParts=_allows8BitMimeParts;
@property(nonatomic) BOOL alwaysCreatesRichText; // @synthesize alwaysCreatesRichText=_alwaysCreatesRichText;
@property(nonatomic) BOOL createsPlainTextOnly; // @synthesize createsPlainTextOnly=_createsPlainTextOnly;
@property(nonatomic) BOOL createsMimeAlternatives; // @synthesize createsMimeAlternatives=_createsMimeAlternatives;
@property(nonatomic) unsigned long long encodingHint; // @synthesize encodingHint=_encodingHint;
@property(nonatomic) unsigned long long preferredEncoding; // @synthesize preferredEncoding=_preferredEncoding;
//- (void).cxx_destruct;
- (id)_newRFC2047NameParameterDataForMimePart:(id)arg1;
- (id)_hfsFilenameDataWithFilename:(id)arg1 partData:(id)arg2;
- (void)_setMimeTypeFromAttachment:(id)arg1 onMimePart:(id)arg2 filename:(id *)arg3;
- (BOOL)_encodeDataForMimePart:(id)arg1 withPartData:(id)arg2;
- (id)_newDataForMimePart:(id)arg1 withPartData:(id)arg2;
- (BOOL)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3;
- (void)_appendHeadersForMimePart:(id)arg1 toHeaders:(id)arg2;
- (id)_newPartForStationeryCompositeImage:(id)arg1 partData:(id)arg2;
- (id)_newPartForDirectoryAttachment:(id)arg1 partData:(id)arg2;
- (id)_newPartForAttachment:(id)arg1 partData:(id)arg2;
- (id)_newMimePartWithWebResource:(id)arg1 partData:(id)arg2 seenURLStrings:(id)arg3;
- (id)_newPartAndDataForString:(id)arg1 charset:(id)arg2 subtype:(id)arg3 partData:(id)arg4;
- (id)_newPlainTextPartWithAttributedString:(id)arg1 partData:(id)arg2;
- (id)_newMimePartWithAttributedString:(id)arg1 partData:(id)arg2 outputRich:(BOOL)arg3;
- (id)_encryptionCertificatesForRecipients:(id)arg1;
- (id)_newOutgoingMessageFromTopLevelMimePart:(id)arg1 topLevelHeaders:(id)arg2 withPartData:(id)arg3;
- (id)newMessageByRemovingAttachmentsFromMessage:(id)arg1;
- (id)newMessageWithBodyData:(id)arg1 headers:(id)arg2;
- (id)newDataForAttributedString:(id)arg1;
- (id)newMessageWithAttributedString:(id)arg1 headers:(id)arg2;
- (id)newMessageWithHtmlString:(id)arg1 headers:(id)arg2;
- (void)_recursivelyAddSubresourcesFromArchive:(id)arg1 toArray:(id)arg2;
- (id)newMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4;
- (void)setSigningIdentity:(id)arg1;
- (unsigned long long)_preferredEncodingUsingHintIfNecessary;
- (void)setShouldMarkNonresizableAttachmentData:(BOOL)arg1;
- (void)setShouldConvertCompositeImages:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

