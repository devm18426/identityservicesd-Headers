/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:07 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSPushHandlerDelegate.h>

@class FTMessageDelivery, NSMutableDictionary, NSMutableArray, IDSRateLimiter, NSString;

@interface IDSDeliveryController : NSObject <IDSPushHandlerDelegate> {

	FTMessageDelivery* _messageDelivery;
	NSMutableDictionary* _messageQueue;
	NSMutableArray* _pendingOfflineMessages;
	IDSRateLimiter* _tokenURINegativeCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)tokenURINegativeCacheItemForTokenURI:(id)arg1 service:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)handler:(id)arg1 isConnectedChanged:(char)arg2 ;
-(id)encryptionController;
-(void)sendIDSMessage:(id)arg1 service:(id)arg2 topic:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)peerIDManager;
-(char)shouldMinimizeBagCacheTime;
-(void)addTokenURINegativeCacheClearBlock;
-(long long)groupCryptoMinVersionNumber;
-(id)_tokenURIForToken:(id)arg1 uri:(id)arg2 ;
-(void)_sendFTMessage:(id)arg1 service:(id)arg2 fromID:(id)arg3 toID:(id)arg4 toToken:(id)arg5 toSessionToken:(id)arg6 toPeople:(id)arg7 fromIdentity:(id)arg8 completionBlock:(/*^block*/id)arg9 ;
-(id)_keyForURIs:(id)arg1 service:(id)arg2 ;
-(void)_pipelineHandleMessage:(id)arg1 forURIs:(id)arg2 service:(id)arg3 ;
-(void)_checkFastDormancy;
-(long long)_maxPayloadSizeForMessage:(id)arg1 ;
-(char)_forceAttachmentForMessage:(id)arg1 ;
-(long long)effectiveMaxPayloadSizeIfCanUseLargePayload:(char)arg1 ;
-(void)_processMessageResponse:(id)arg1 error:(id)arg2 resultCode:(long long)arg3 toURI:(id)arg4 fromURI:(id)arg5 service:(id)arg6 fromIdentity:(id)arg7 ;
-(void)_sendMessageDictionary:(id)arg1 lastRetryInterval:(double)arg2 dataToEncrypt:(id)arg3 onService:(id)arg4 wantsResponse:(char)arg5 canUseLargePayload:(char)arg6 sendOnePerToken:(char)arg7 allowPartialSendsToSucceed:(char)arg8 highPriority:(char)arg9 fireAndForget:(char)arg10 expirationDate:(id)arg11 enforceRemoteTimeouts:(char)arg12 messageID:(id)arg13 fromID:(id)arg14 fromIdentity:(id)arg15 toID:(id)arg16 toPeople:(id)arg17 accessToken:(id)arg18 topic:(id)arg19 registrationProperties:(id)arg20 fakeMessage:(char)arg21 alwaysSkipSelf:(char)arg22 pushPriority:(id)arg23 ignoreMaxRetryCount:(char)arg24 disallowRefresh:(char)arg25 originalTimestamp:(id)arg26 checkpointTrace:(id)arg27 destinationObject:(id)arg28 ackBlock:(/*^block*/id)arg29 willSendBlock:(/*^block*/id)arg30 sendCompletionBlock:(/*^block*/id)arg31 ;
-(void)_queueMessage:(id)arg1 service:(id)arg2 dataToEncrypt:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 toID:(id)arg6 toPeople:(id)arg7 originallyToPeople:(id)arg8 canUseLargePayload:(char)arg9 sendOnePerToken:(char)arg10 registrationProperties:(id)arg11 fakeMessage:(char)arg12 alwaysSkipSelf:(char)arg13 disallowRefresh:(char)arg14 checkpointTrace:(id)arg15 destinationObject:(id)arg16 willSendBlock:(/*^block*/id)arg17 completionBlock:(/*^block*/id)arg18 ;
-(void)_handleMessagesForURIs:(id)arg1 originalURIs:(id)arg2 service:(id)arg3 fromID:(id)arg4 ;
-(void)_emptyMessagesForURIs:(id)arg1 service:(id)arg2 ;
-(void)_discardMessage:(id)arg1 forURIs:(id)arg2 service:(id)arg3 ;
-(void)_sendMessage:(id)arg1 dataToEncrypt:(id)arg2 onService:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 toID:(id)arg6 toPeople:(id)arg7 canUseLargePayload:(char)arg8 sendOnePerToken:(char)arg9 allowPartialSendsToSucceed:(char)arg10 registrationProperties:(id)arg11 fakeMessage:(char)arg12 alwaysSkipSelf:(char)arg13 disallowRefresh:(char)arg14 checkpointTrace:(id)arg15 destinationObject:(id)arg16 willSendBlock:(/*^block*/id)arg17 completionBlock:(/*^block*/id)arg18 firstAttemptDate:(id)arg19 ;
-(void)_handleAccessoryMessageForID:(id)arg1 msg:(id)arg2 service:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)_constructDeliveryPipeline;
-(void)sendRTCMetricWithStartDate:(id)arg1 endDate:(id)arg2 endpointCount:(long long)arg3 usedPipeline:(char)arg4 usedMMCS:(char)arg5 responseCode:(long long)arg6 ;
-(id)awdLogger;
-(char)isSupportedEngramVersionNumber:(long long)arg1 ;
-(char)_sendAsAttachmentForMessage:(id)arg1 payloadData:(id)arg2 ;
-(unsigned long long)_destinationCountForURIsAndTokens:(id)arg1 ;
-(void)_sendFTFanoutMessage:(id)arg1 service:(id)arg2 fromID:(id)arg3 toPeople:(id)arg4 fromIdentity:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_sendAttachmentWithGuid:(id)arg1 service:(id)arg2 topic:(id)arg3 originalCommand:(id)arg4 additionalDictionary:(id)arg5 encryptedData:(id)arg6 toToken:(id)arg7 toID:(id)arg8 fromID:(id)arg9 fromIdentity:(id)arg10 canUseLargePayload:(char)arg11 expirationDate:(id)arg12 checkpointTrace:(id)arg13 destinationObject:(id)arg14 ackBlock:(/*^block*/id)arg15 completionBlock:(/*^block*/id)arg16 ;
-(void)_sendErrorDictionary:(id)arg1 onService:(id)arg2 fromID:(id)arg3 fromIdentity:(id)arg4 toID:(id)arg5 toToken:(id)arg6 topic:(id)arg7 sendCompletionBlock:(/*^block*/id)arg8 ;
-(void)sendMessageDictionary:(id)arg1 messageID:(id)arg2 dataToEncrypt:(id)arg3 onService:(id)arg4 wantsResponse:(char)arg5 expirationDate:(id)arg6 enforceRemoteTimeouts:(char)arg7 canUseLargePayload:(char)arg8 sendOnePerToken:(char)arg9 allowPartialSendsToSucceed:(char)arg10 priority:(long long)arg11 fireAndForget:(char)arg12 fromID:(id)arg13 fromIdentity:(id)arg14 toPeople:(id)arg15 accessToken:(id)arg16 topic:(id)arg17 registrationProperties:(id)arg18 fakeMessage:(char)arg19 alwaysSkipSelf:(char)arg20 pushPriority:(id)arg21 ignoreMaxRetryCount:(char)arg22 disallowRefresh:(char)arg23 originalTimestamp:(id)arg24 checkpointTrace:(id)arg25 destinationObject:(id)arg26 ackBlock:(/*^block*/id)arg27 willSendBlock:(/*^block*/id)arg28 sendCompletionBlock:(/*^block*/id)arg29 ;
@end
