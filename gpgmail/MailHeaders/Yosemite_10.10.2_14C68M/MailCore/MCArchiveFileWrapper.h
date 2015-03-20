/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSFileWrapper.h"

@class NSData;

@interface MCArchiveFileWrapper : NSFileWrapper
{
    NSFileWrapper *_realFileWrapper;
    NSData *_archiveData;
    long long _archiveType;
}

@property(nonatomic) long long archiveType; // @synthesize archiveType=_archiveType;
@property(retain, nonatomic) NSData *archiveData; // @synthesize archiveData=_archiveData;
- (void).cxx_destruct;
- (void)getCompressedData:(id *)arg1 archiveType:(long long *)arg2;
- (id)preferredFilename;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (id)keyForFileWrapper:(id)arg1;
- (id)fileWrappers;
- (void)removeFileWrapper:(id)arg1;
- (id)addFileWrapper:(id)arg1;
- (id)serializedRepresentation;
- (BOOL)isSymbolicLink;
- (BOOL)isDirectory;
- (BOOL)isRegularFile;
- (unsigned long long)approximateSize;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
- (void)_archiveFileWrapperCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initSymbolicLinkWithDestinationURL:(id)arg1;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 compressionLevel:(long long)arg3 error:(id *)arg4;
- (id)initDirectoryWithFileWrappers:(id)arg1;
- (id)initWithData:(id)arg1 archiveType:(long long)arg2;
@property(readonly, nonatomic) NSFileWrapper *realFileWrapper;

@end

