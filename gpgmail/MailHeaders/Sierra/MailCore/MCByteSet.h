//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface MCByteSet : NSObject <NSCopying, NSMutableCopying>
{
    unsigned char _bitString[32];	// 8 = 0x8
}

+ (id)nonASCIIByteSet;	// IMP=0x0000000000016945
+ (id)ASCIIByteSet;	// IMP=0x00000000000168cb
+ (id)asciiWhitespaceSet;	// IMP=0x0000000000016851
- (BOOL)byteIsMember:(unsigned char)arg1;	// IMP=0x0000000000016d6d
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016d09
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016cfe
- (id)description;	// IMP=0x0000000000016c19
- (id)initWithCString:(const char *)arg1;	// IMP=0x0000000000016bea
- (id)init;	// IMP=0x0000000000016bbd
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000016b4b
- (id)initWithRange:(struct _NSRange)arg1;	// IMP=0x00000000000169c2

@end

