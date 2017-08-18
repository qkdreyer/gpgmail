//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MailCore/MCQOSInvocation.h>

@class MCActivityMonitor;

@interface MCMonitoredInvocation : MCQOSInvocation
{
    MCActivityMonitor *_monitor;	// 64 = 0x40
}

+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5 object4:(id)arg6 taskName:(id)arg7 priority:(unsigned char)arg8 canBeCancelled:(BOOL)arg9;	// IMP=0x0000000000078401
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5 taskName:(id)arg6 priority:(unsigned char)arg7 canBeCancelled:(BOOL)arg8;	// IMP=0x00000000000782c5
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(unsigned char)arg6 canBeCancelled:(BOOL)arg7;	// IMP=0x00000000000781a3
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(unsigned char)arg5 canBeCancelled:(BOOL)arg6;	// IMP=0x00000000000780ac
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(unsigned char)arg4 canBeCancelled:(BOOL)arg5;	// IMP=0x0000000000078031
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5 object4:(id)arg6;	// IMP=0x0000000000077e3f
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5;	// IMP=0x0000000000077c70
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4;	// IMP=0x0000000000077ac4
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3;	// IMP=0x0000000000077928
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2;	// IMP=0x00000000000777b4
- (void).cxx_destruct;	// IMP=0x0000000000078b95
- (unsigned char)priority;	// IMP=0x0000000000078b20
- (void)invokeWithTarget:(id)arg1;	// IMP=0x00000000000789ce
- (void)invoke;	// IMP=0x00000000000787d2
- (void)setShouldPromptUserOnTermination;	// IMP=0x0000000000078790
@property(retain, nonatomic) MCActivityMonitor *monitor;
@property id <MCActivityTarget> target;

@end
