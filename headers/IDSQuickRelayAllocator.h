/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:14 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/IDSPushHandlerDelegate.h>

@protocol OS_dispatch_source;
@class IDSPushHandler, NSMutableDictionary, NSMutableArray, NSMutableSet, NSObject, NSString;

@interface IDSQuickRelayAllocator : NSObject <IDSPushHandlerDelegate> {

	IDSPushHandler* _pushHandler;
	NSMutableDictionary* _requestIDToSession;
	NSMutableDictionary* _sessionToAllocations;
	NSMutableArray* _sessionInfoRequiredKeys;
	NSMutableSet* _pendingRecipientsAcceptedSessions;
	NSMutableDictionary* _initiatorsAcceptedSessionsWithToken;
	NSMutableDictionary* _requestIDToAllocateTime;
	NSMutableDictionary* _allocateResponses;
	NSMutableDictionary* _requestIDToPreferredLocalInterface;
	NSObject*<OS_dispatch_source> _responseCleanupTimer;
	NSMutableDictionary* _pushTokenToURIForGroup;
	NSMutableDictionary* _idsSessionIDToqrSessionID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3 ;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(void)_startCleanupTimer;
-(id)_peerIDManager;
-(id)setupNewAllocation:(id)arg1 sessionID:(id)arg2 fromIdentity:(id)arg3 fromURI:(id)arg4 fromService:(id)arg5 options:(id)arg6 connectReadyHandler:(/*^block*/id)arg7 ;
-(void)requestAllocationForRecipient:(id)arg1 ;
-(id)getRelaySessionIDForIDSSessionID:(id)arg1 pushToken:(id)arg2 ;
-(void)setInitiatorsAcceptedToken:(id)arg1 pushToken:(id)arg2 ;
-(id)getAllocateResponse:(id)arg1 groupID:(id)arg2 ;
-(long long)getServerProviderForIDSSessionID:(id)arg1 ;
-(void)invalidateSession:(id)arg1 isExpiryPurging:(char)arg2 ;
-(id)getPushTokensFromParticipantIDs:(id)arg1 participantIDs:(id)arg2 ;
-(id)getSessionInfoFromDefaults:(id)arg1 groupID:(id)arg2 ;
-(char)invalidateLatestResponse:(id)arg1 qrReason:(unsigned short)arg2 previousError:(unsigned short)arg3 ;
-(void)cleanUpCachedMappings:(id)arg1 ;
-(id)getURIFromParticipantID:(id)arg1 participantID:(id)arg2 ;
-(void)enablePushHandler:(char)arg1 ;
-(void)invalidateAllocation:(id)arg1 ;
-(void)_setSessionInfoRequiredKeys;
-(id)_uuidFromNSStringToNSData:(id)arg1 ;
-(void)_sendAllocateRequest:(id)arg1 ;
-(void)_addAllocationForSession:(id)arg1 allocation:(id)arg2 ;
-(id)_getIDSAWDLoggingInstance;
-(char)_startQRConnectionWithDefaults:(id)arg1 ;
-(id)_setupNewAllocation:(id)arg1 sessionID:(id)arg2 isSessionIDRemoteDeviceID:(char)arg3 fromIdentity:(id)arg4 fromURI:(id)arg5 fromService:(id)arg6 options:(id)arg7 connectReadyHandler:(/*^block*/id)arg8 withPreferredLocalInterface:(int)arg9 forAdditionalAllocation:(char)arg10 ;
-(id)_parseQuickRelayDefaults:(id)arg1 gropuID:(id)arg2 ;
-(id)_getResponseFromQRGroupID:(id)arg1 ;
-(id)_createSessionInfoFromResponsePayload:(id)arg1 ;
-(char)hasParticipantID:(id)arg1 participantID:(id)arg2 ;
-(id)_mergeParticipantID2PushTokenMapping:(id)arg1 sourceResponse:(id)arg2 mappingChange:(char*)arg3 ;
-(void)_setResponseForQRGroupID:(id)arg1 groupID:(id)arg2 ;
-(void)_notifyParticipantID2PushTokenMappingChange:(id)arg1 ;
-(char)_shouldUseCurrentResponse:(id)arg1 cachedMessage:(id)arg2 ;
-(char)_addConnectStatus:(id)arg1 relaySessionID:(id)arg2 previousTime:(unsigned long long)arg3 qrReason:(unsigned short)arg4 previousError:(unsigned short)arg5 previousRelayIP:(unsigned)arg6 previousAccessToken:(id)arg7 ;
-(void)_handleIncomingAllocateResponse:(id)arg1 isFromCache:(char)arg2 requestOptions:(id)arg3 ;
-(id)_findAllocationListForSessionID:(id)arg1 ;
-(void)_dispatchIncomingAllocateResponse:(id)arg1 isFromCache:(char)arg2 requestOptions:(id)arg3 ;
-(id)_queryPolicy;
-(void)_storeMappingFromPushTokenToURIs:(id)arg1 fromID:(id)arg2 service:(id)arg3 cert:(id)arg4 forGroup:(id)arg5 ;
-(id)_getSelfAllocationFromCache:(id)arg1 ;
-(id)_setupAllocation:(id)arg1 fromURI:(id)arg2 sessionID:(id)arg3 isSessionIDRemoteDeviceID:(char)arg4 options:(id)arg5 prevConnectStatus:(SCD_Struct_ID27*)arg6 requestUUID:(id)arg7 connectReadyHandler:(/*^block*/id)arg8 withPreferredLocalInterface:(int)arg9 ;
-(void)_sendIDQueryRequest:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_startQRConnectionForSession:(id)arg1 isInitiatorsAcceptedSession:(char)arg2 withLocalInterfacePreference:(int)arg3 ;
-(id)_getPushTokenFromParticipantID:(id)arg1 participantID:(id)arg2 ;
-(id)_filterSelfAllocationsForSessionID:(id)arg1 ;
-(id)_getGroupID:(id)arg1 ;
-(id)getPushTokenForRelaySessionID:(id)arg1 relaySessionID:(id)arg2 ;
-(id)_findAllocationForSessionID:(id)arg1 requestIDStr:(id)arg2 ;
-(char)_isDuplicateResponse:(id)arg1 newResponse:(id)arg2 ;
-(char)_addResponseToCache:(id)arg1 sessionInfo:(id)arg2 modifiedMessage:(id*)arg3 ;
-(char)_isJoinRequestInProcess:(id)arg1 ;
-(void)_processSelfAllocations:(id)arg1 allocation:(id)arg2 ;
-(id)_uriToParticipantID:(id)arg1 ;
-(id)_getCombinedSoftwareID:(id)arg1 ;
-(unsigned)_getErrorCodeFromAllocationStatus:(int)arg1 ;
-(char)_hasSessionInfoRequiredKeys:(id)arg1 ;
-(void)_sendAWDMetricsForAllocation:(id)arg1 status:(long long)arg2 hasRecipientAccepted:(char)arg3 ;
-(void)_invalidateSession:(id)arg1 isExpiryPurging:(char)arg2 ;
-(void)_removeAllAllocationsForSessionID:(id)arg1 ;
-(void)_discardAllocation:(id)arg1 ;
-(void)_processAllocationStatusResult:(id)arg1 ;
-(id)_getResponse:(id)arg1 relaySessionID:(id)arg2 ;
-(char)_sendKeepAliveRequest:(id)arg1 ;
-(void)_cleanupResponses;
-(id)setupNewAllocationToDevice:(id)arg1 options:(id)arg2 connectReadyHandler:(/*^block*/id)arg3 ;
-(id)_getResponseForQRSessionID:(id)arg1 sessionID:(id)arg2 index:(long long*)arg3 ;
-(id)getAdditionalAllocationForAddress:(id)arg1 selfAddress:(unsigned)arg2 relaySessionID:(id)arg3 allocateType:(long long)arg4 qrReason:(unsigned short)arg5 previousTime:(unsigned long long)arg6 previousError:(unsigned short)arg7 previousRelayIP:(unsigned)arg8 previousAccessToken:(id)arg9 requestSelfAllocation:(char)arg10 isSessionIDRemoteDeviceID:(char)arg11 withPreferredRemoteInterface:(int)arg12 withPreferredLocalInterface:(int)arg13 ;
-(id)_getStatusMessageFromStatusCode:(unsigned long long)arg1 ;
-(void)reportAWDAllocatorEvent:(unsigned)arg1 relayProviderType:(long long)arg2 transport:(long long)arg3 localRAT:(unsigned)arg4 duration:(unsigned long long)arg5 idsSessionID:(id)arg6 reportingDataBlob:(id)arg7 isInitiator:(char)arg8 ;
-(void)startKeepAliveTimer:(id)arg1 relaySessionID:(id)arg2 ;
-(void)stopKeepAliveTimer:(id)arg1 relaySessionID:(id)arg2 ;
-(unsigned long long)getCountOfPendingRecipientsAcceptedSessions;
-(unsigned long long)getCountOfSessionToAllocations;
@end

