//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSData, NSNumber, NSString;

@interface MFSQLColumn : NSObject
{
    int _index;
    struct sqlite3_stmt *_statement;
}

@property(readonly, nonatomic) int index; // @synthesize index=_index;
@property(readonly, nonatomic) struct sqlite3_stmt *statement; // @synthesize statement=_statement;
@property(readonly, copy, nonatomic) NSNumber *numberValue;
@property(readonly, copy, nonatomic) NSData *dataValue;
@property(readonly, copy, nonatomic) NSString *stringValue;
@property(readonly, copy, nonatomic) id objectValue;
- (id)init;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 index:(int)arg2;

@end

