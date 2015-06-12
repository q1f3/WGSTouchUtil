//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class CPDistributedMessagingCallout, NSLock, NSMutableDictionary, NSOperationQueue, NSString;

@interface CPDistributedMessagingCenter : NSObject
{
    NSString *_centerName;
    NSLock *_lock;
    unsigned int _sendPort;
    NSOperationQueue *_asyncQueue;
    struct __CFRunLoopSource *_serverSource;
    NSString *_requiredEntitlement;
    NSMutableDictionary *_callouts;
    unsigned int _parkedServerPort;
    CPDistributedMessagingCallout *_currentCallout;
    unsigned int _replyPort;
    BOOL _portPassing;
    BOOL _delayedReply;
    BOOL _requireLookupByPID;
    int _targetPID;
}

+ (id)_centerNamed:(id)arg1 requireLookupByPID:(BOOL)arg2;
+ (id)pidRestrictedCenterNamed:(id)arg1;
+ (id)centerNamed:(id)arg1;
- (id)_requiredEntitlement;
- (BOOL)_isTaskEntitled:(id)arg1;
- (void)_sendReplyMessage:(id)arg1 portPassing:(BOOL)arg2 onMachPort:(unsigned int)arg3;
- (void)_dispatchMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(id *)arg3 auditToken:(id)arg4;
- (BOOL)doesServerExist;
- (void)unregisterForMessageName:(id)arg1;
- (void)sendDelayedReply:(id)arg1 dictionary:(id)arg2;
- (id)delayReply;
- (void)registerForMessageName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)stopServer;
- (void)runServerOnCurrentThreadProtectedByEntitlement:(id)arg1;
- (void)runServerOnCurrentThread;
- (unsigned int)_serverPort;
- (BOOL)_sendMessage:(id)arg1 userInfoData:(id)arg2 oolKey:(id)arg3 oolData:(id)arg4 makeServer:(BOOL)arg5 receiveReply:(id *)arg6 nonBlocking:(BOOL)arg7 error:(id *)arg8;
- (BOOL)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id *)arg3 error:(id *)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void *)arg7 nonBlocking:(BOOL)arg8;
- (BOOL)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id *)arg3 error:(id *)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void *)arg7;
- (void)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 toTarget:(id)arg3 selector:(SEL)arg4 context:(void *)arg5;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2;
- (BOOL)sendNonBlockingMessageName:(id)arg1 userInfo:(id)arg2;
- (BOOL)sendMessageName:(id)arg1 userInfo:(id)arg2;
- (void)_setSendPort:(unsigned int)arg1;
- (unsigned int)_sendPort;
- (void)_setupInvalidationSource;
- (void)setTargetPID:(int)arg1;
- (id)name;
- (void)dealloc;
- (id)_initClientWithPort:(unsigned int)arg1;
- (id)_initAnonymousServer;
- (id)_initWithServerName:(id)arg1;
- (id)_initWithServerName:(id)arg1 requireLookupByPID:(BOOL)arg2;

@end

