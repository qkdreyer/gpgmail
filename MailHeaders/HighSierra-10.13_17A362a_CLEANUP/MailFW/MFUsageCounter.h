//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSCalendar, NSDate, NSMutableDictionary;

@interface MFUsageCounter : NSObject
{
    NSMutableDictionary *_counts;
    BOOL _isDirty;
    NSCalendar *_gregorianCalendar;
    NSDate *_referenceDate;
}

+ (void)setGatherJunkMailUsageCounts:(BOOL)arg1;
+ (BOOL)gatherJunkMailUsageCounts;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(readonly, nonatomic) NSCalendar *gregorianCalendar; // @synthesize gregorianCalendar=_gregorianCalendar;
//- (void).cxx_destruct;
- (void)incrementCountForKey:(id)arg1 byCount:(unsigned long long)arg2;
- (void)incrementCountForKey:(id)arg1;
- (void)removeCountForKey:(id)arg1;
- (unsigned long long)countForKey:(id)arg1 includeToday:(BOOL)arg2;
- (unsigned long long)countForKey:(id)arg1;
- (long long)numberOfDaysAvailableForKey:(id)arg1;
- (void)saveDefaults;
- (id)_dictionaryForKey:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

