/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:02 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/IDSPushHandlerDelegate.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>
#import <libobjc.A.dylib/IDSUTunDeliveryControllerDelegate.h>
#import <libobjc.A.dylib/IDSDuetInterfaceDelegate.h>
#import <libobjc.A.dylib/IDSRapportDeliveryControllerDelegate.h>
#import <libobjc.A.dylib/IDSPairingManagerDelegate.h>
#import <libobjc.A.dylib/IDSRegistrationHashProcessorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSMutableSet, IMRemoteObjectBroadcaster, NSDate, NSTimer, IMMultiQueue, IMPair, IMPowerAssertion, NSObject, FTMessageDelivery, IDSDSignInResponder, IDSRegistrationHashProcessor, IDSCertifiedDeliveryReplayCommitter, IDSOpportunisticDeliveryController, IDSRegistrationConductor, IDSTransparentEndpointViewer, NSString;

@interface IDSDaemon : NSObject <IDSPushHandlerDelegate, IMSystemMonitorListener, IDSUTunDeliveryControllerDelegate, IDSDuetInterfaceDelegate, IDSRapportDeliveryControllerDelegate, IDSPairingManagerDelegate, IDSRegistrationHashProcessorDelegate> {

	opaque_pthread_mutex_t _listenerLock;
	NSMutableArray* _listeners;
	NSMutableArray* _listenerLocalObjects;
	NSMutableArray* _listenerIDs;
	NSMutableArray* _listenerServices;
	NSMutableArray* _listenerNotificationServices;
	NSMutableArray* _listenerCommands;
	NSMutableArray* _listenerCapabilities;
	NSMutableArray* _listenerEntitlements;
	NSMutableArray* _listenerBundleIDs;
	NSMutableDictionary* _queuedBroadcastAttempts;
	NSMutableDictionary* _urgentQueuedBroadcastAttempts;
	NSMutableDictionary* _defaultQueuedBroadcastAttempts;
	NSMutableDictionary* _syncQueuedBroadcastAttempts;
	NSMutableSet* _listenerCachedServices;
	NSMutableSet* _listenerCachedCommands;
	IMRemoteObjectBroadcaster* _notifier;
	NSDate* _birthDate;
	NSTimer* _storageTimer;
	NSMutableSet* _messagesReceivedDuringStorage;
	NSMutableSet* _forcedGDRTokens;
	NSTimer* _nonUrgentInternetSendTimer;
	long long _nonUrgentInternetLastAttempt;
	IMMultiQueue* _incomingMessageMultiQueue;
	NSMutableDictionary* _pendingOutgoingAttachments;
	NSMutableDictionary* _pendingIncomingAttachments;
	opaque_pthread_mutex_t _localIncomingGUIDsLock;
	IMPair* _localIncomingGUIDs;
	IMPair* _remoteIncomingGUIDs;
	opaque_pthread_mutex_t _incomingLocalPowerAssertionLock;
	unsigned long long _incomingLocalPowerAssertionClients;
	IMPowerAssertion* _incomingLocalPowerAssertion;
	NSObject*<OS_dispatch_queue> _internalQueue;
	char _isHardReset;
	char _cloudPairingBeforeFirstUnlock;
	char _hasProcessedMessagesAfterFirstUnlock;
	unsigned char _deviceIsAsleep;
	FTMessageDelivery* _homeKitMessageDelivery;
	IDSDSignInResponder* _signInResponder;
	IDSRegistrationHashProcessor* _queryUpdateNotifier;
	IDSCertifiedDeliveryReplayCommitter* _replayStateCommitter;
	IDSOpportunisticDeliveryController* _opportunisticDeliveryController;
	IDSRegistrationConductor* _registrationConductor;
	IDSTransparentEndpointViewer* _transparentEndpointViewer;

}

@property (nonatomic,readonly) IDSRegistrationHashProcessor * queryUpdateNotifier;                      //@synthesize queryUpdateNotifier=_queryUpdateNotifier - In the implementation block
@property (nonatomic,readonly) IDSCertifiedDeliveryReplayCommitter * replayStateCommitter;              //@synthesize replayStateCommitter=_replayStateCommitter - In the implementation block
@property (nonatomic,readonly) IDSRegistrationConductor * registrationConductor;                        //@synthesize registrationConductor=_registrationConductor - In the implementation block
@property (nonatomic,readonly) IDSTransparentEndpointViewer * transparentEndpointViewer;                //@synthesize transparentEndpointViewer=_transparentEndpointViewer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)daemon;
+(id)pairingManager;
+(id)serviceController;
+(id)accountController;
+(id)messageStoreForDataProtectionClass:(unsigned)arg1 ;
+(id)uTunDeliveryController;
+(void)logAccessWarningForAccount:(id)arg1 withService:(id)arg2 entitlement:(id)arg3 clientEntitlements:(id)arg4 logMessage:(id)arg5 ;
+(char)entitlementDictionary:(id)arg1 isEntitledToAccessService:(id)arg2 forEntitlement:(id)arg3 forAccount:(id)arg4 shouldWarn:(char)arg5 ;
+(void)_sendMessageWithSendParameters:(id)arg1 threadContext:(id)arg2 onObject:(id)arg3 willSendBlock:(/*^block*/id)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
+(char)_shouldReplaceLocalDestination:(id)arg1 ;
+(char)_canBulkMessageWithPriority:(long long)arg1 adHocServiceType:(unsigned)arg2 ;
+(void)_forwardSendMessageToAccountWithSendParameters:(id)arg1 service:(id)arg2 threadContext:(id)arg3 guid:(id)arg4 dataProtectionClass:(unsigned)arg5 willSendBlock:(/*^block*/id)arg6 progressBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 ;
+(void)_sendLocalDeliveryMessagesForAccountUUID:(id)arg1 threadContext:(id)arg2 priority:(long long)arg3 dataProtectionClass:(unsigned)arg4 ;
+(void)_performDuetCheckAndSendForServiceIdentifier:(id)arg1 serviceDuetIdentifiers:(id)arg2 sendParameters:(id)arg3 logString:(id)arg4 fromQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
+(/*^block*/id)progressBlockForSendParameters:(id)arg1 messageContext:(id)arg2 topic:(id)arg3 forObject:(id)arg4 ;
+(void)sendMessageWithIDSSendParameters:(id)arg1 messageContext:(id)arg2 threadContext:(id)arg3 progressBlock:(/*^block*/id)arg4 onObject:(id)arg5 ;
+(void)_sendLocalDeliveryMessagesForAccountUUID:(id)arg1 threadContext:(id)arg2 priority:(long long)arg3 messageTypes:(id)arg4 dataProtectionClass:(unsigned)arg5 ;
+(char)_topicAllowsNoEncryption:(id)arg1 fromIdentifier:(id)arg2 ;
+(char)_commandIsSessionCommand:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_commands;
-(void)_terminate;
-(void)systemWillSleep;
-(void)systemDidWake;
-(void)systemDidLock;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidLeaveDataProtectionLock;
-(void)shutdown;
-(id)currentDevice;
-(void)sendRealTimeEncryptionMKMRecoveryRequest:(id)arg1 toGroup:(id)arg2 ;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(id)_payloadFromDecryptedData:(id)arg1 ;
-(void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3 ;
-(void)handler:(id)arg1 receivedNoStorageResponseForTopic:(id)arg2 messageContext:(id)arg3 ;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 checkpointTrace:(id)arg5 messageContext:(id)arg6 ;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forUnknownTopic:(id)arg3 messageContext:(id)arg4 ;
-(void)handler:(id)arg1 isConnectedChanged:(char)arg2 ;
-(id)encryptionController;
-(id)restrictions;
-(id)pairingManager;
-(void)_removeListener:(id)arg1 ;
-(id)_pushTopics;
-(id)serviceController;
-(id)broadcasterWithMessageContext:(id)arg1 ;
-(id)accountController;
-(void)_updateStorageTimerWithInterval:(double)arg1 ;
-(void)_storageTimerFired;
-(id)systemMonitor;
-(id)registrationController;
-(void)logState;
-(void)_processStoredIncomingMessages;
-(void)_pidSuspended:(int)arg1 ;
-(void)_postAliveNotification;
-(id)broadcasterForTarget:(id)arg1 messageContext:(id)arg2 ;
-(void)refreshBundleIDs;
-(void)_removeListenerObject:(id)arg1 ;
-(void)_removeLocalListenerObject:(id)arg1 ;
-(id)listenerWithName:(id)arg1 ;
-(void)removeListenerObject:(id)arg1 ;
-(void)removeLocalListenerObject:(id)arg1 ;
-(char)daemonInterface:(id)arg1 shouldGrantAccessForPID:(int)arg2 auditToken:(SCD_Struct_ID10)arg3 portName:(id)arg4 listenerConnection:(id)arg5 setupInfo:(id)arg6 setupResponse:(id*)arg7 ;
-(void)authenticateAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)registerAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)unregisterAccount:(id)arg1 messageContext:(id)arg2 ;
-(id)broadcasterForTopic:(id)arg1 entitlement:(id)arg2 command:(id)arg3 messageContext:(id)arg4 ;
-(void)setupRealtimeEncryptionController:(id)arg1 forAccountWithID:(id)arg2 messageContext:(id)arg3 ;
-(void)sendRealTimeMediaPrekey:(id)arg1 toGroup:(id)arg2 messageContext:(id)arg3 ;
-(void)requestPublicKeysForRealTimeEncryption:(id)arg1 forAccountWithID:(id)arg2 messageContext:(id)arg3 ;
-(void)sendRealTimeEncryptionMasterKeyMaterial:(id)arg1 toGroup:(id)arg2 messageContext:(id)arg3 ;
-(void)requestRealTimeEncryptionMasterKeyMaterial:(id)arg1 forGroup:(id)arg2 messageContext:(id)arg3 ;
-(void)resetRealTimeEncryptionKeys:(id)arg1 forGroup:(id)arg2 messageContext:(id)arg3 ;
-(char)_isUnderFirstDataProtectionLock;
-(id)messageStoreForDataProtectionClass:(unsigned)arg1 ;
-(id)daemonCapabilities;
-(id)opportunisticDeliveryController;
-(id)uTunController;
-(id)uTunDeliveryController;
-(id)rapportDeliveryController;
-(id)signInResponder;
-(id)deviceHeartbeatCenter;
-(id)sessionController;
-(id)daemonMIGInterface;
-(id)daemonMIGQueryInterface;
-(id)idStatusQueryController;
-(id)messageStoreMigrator;
-(id)registrationPushManager;
-(id)centralRegListener;
-(id)serverStorageStateMachine;
-(id)daemonXPCInterface;
-(id)pushHandlerForAPSDelegatePort;
-(id)serverBagForBagType:(long long)arg1 ;
-(id)activityStateMonitor;
-(char)validateListenerForLocalObject:(id)arg1 andCheckEntitlement:(id)arg2 ;
-(char)_checkContinuityEntitlementForMessageContext:(id)arg1 ;
-(id)wpLinkManager;
-(void)continuityClientInstanceCreatedWithMessageContext:(id)arg1 ;
-(void)continuityStartAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 messageContext:(id)arg4 ;
-(void)continuityStopAdvertisingOfType:(long long)arg1 messageContext:(id)arg2 ;
-(void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 messageContext:(id)arg5 ;
-(void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 messageContext:(id)arg4 ;
-(void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(char)arg5 duplicates:(char)arg6 messageContext:(id)arg7 ;
-(void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(char)arg4 duplicates:(char)arg5 messageContext:(id)arg6 ;
-(void)continuityStopScanningForType:(long long)arg1 messageContext:(id)arg2 ;
-(void)continuityStartTrackingPeer:(id)arg1 forType:(long long)arg2 messageContext:(id)arg3 ;
-(void)continuityStopTrackingPeer:(id)arg1 forType:(long long)arg2 messageContext:(id)arg3 ;
-(void)continuityConnectToPeer:(id)arg1 messageContext:(id)arg2 ;
-(void)continuityDisconnectFromPeer:(id)arg1 messageContext:(id)arg2 ;
-(IDSRegistrationConductor *)registrationConductor;
-(void)_cleanUpOutgoingMessageDatabaseAndClearStatementCache;
-(void)_cleanupIncomingMessageDatabase;
-(void)_performSetup;
-(void)_cleanupIncomingFilesDirectory;
-(void)_resetPreferences;
-(void)_registerForCheckpointAndVacuumDB;
-(void)registerForRegistrationAccountStatusMetric;
-(void)_clearIDSState;
-(void)_processStoredMessagesIncludingClassD:(char)arg1 ;
-(void)_startPushHandlingLocked;
-(void)_processOutgoingNonUrgentInternetMessages;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priorities:(id)arg2 dataProtectionClasses:(id)arg3 ;
-(char)clientAtIndex:(unsigned long long)arg1 isEntitledToAccessService:(id)arg2 forEntitlement:(id)arg3 shouldWarn:(char)arg4 ;
-(void)_resetQueuedBroadcastsForServices:(id)arg1 priority:(long long)arg2 ;
-(char)_processQueuedBroadcastsForServices:(id)arg1 priority:(long long)arg2 forceRetry:(char)arg3 ;
-(void)_dropQueuedBroadcastsForServices:(id)arg1 priority:(long long)arg2 ;
-(void)_cleanupListenerWithPid:(int)arg1 ;
-(void)updateTopics;
-(void)_updatePushCommandsLocked;
-(id)_newSetupInfoWithContext:(id)arg1 ;
-(void)_resetBroadcastQueuesForServices:(id)arg1 ;
-(void)_flushBroadcastQueuesForServices:(id)arg1 existingServices:(id)arg2 ;
-(void)validateListenerForLocalObject:(id)arg1 andPerformBlock:(/*^block*/id)arg2 ;
-(char)validateListenerForLocalObject:(id)arg1 andCheckEntitlement:(id)arg2 forAccessToServiceWithIdentifier:(id)arg3 ;
-(id)_processNameToServiceName:(id)arg1 ;
-(id)_localPushTopics;
-(id)listenerForLocalObject:(id)arg1 ;
-(id)_lockedRemoteObjectsWithService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ignoreService:(char)arg5 useNotificationServices:(char)arg6 ;
-(id)_lockedRemoteObjectsWithService:(id)arg1 entitlements:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ignoreService:(char)arg5 useNotificationServices:(char)arg6 ;
-(id)_lockedRemoteObjectsWithService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ;
-(id)broadcasterForTopic:(id)arg1 entitlement:(id)arg2 messageContext:(id)arg3 ;
-(id)broadcasterForTopic:(id)arg1 ignoreServiceListener:(char)arg2 messageContext:(id)arg3 ;
-(id)broadcastAttemptQueueFromPriority:(long long)arg1 ;
-(void)enqueueIncomingMessageBroadcast:(/*^block*/id)arg1 broadcastData:(id)arg2 forTopic:(id)arg3 entitlement:(id)arg4 command:(id)arg5 capabilities:(unsigned)arg6 messageContext:(id)arg7 ;
-(char)_shouldLaunchClientForCapabilities:(unsigned)arg1 ;
-(id)_lockedRemoteObjectsWithNotificationService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ;
-(void)_launchServiceOnDemand:(id)arg1 ;
-(void)releaseBroadcastAttemptQueue:(long long)arg1 ;
-(void)_locked_printBroadcastAttemptMapForPriority:(long long)arg1 service:(id)arg2 ;
-(id)broadcasterForLocalObject:(id)arg1 messageContext:(id)arg2 ;
-(char)_setupListenerConnection:(id)arg1 listenerID:(id)arg2 pid:(int)arg3 setupInfo:(id)arg4 entitlements:(id)arg5 setupCompletionBlock:(/*^block*/id)arg6 ;
-(id)accountWithIdentifier:(id)arg1 localObject:(id)arg2 requiredEntitlement:(id)arg3 ;
-(void)_notifyTinkerServicesOfPairedDevice:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)deliveryController:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(char)arg8 expectsPeerResponse:(char)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 isCompressed:(char)arg13 connectionType:(long long)arg14 didWakeHint:(char)arg15 ;
-(void)deliveryController:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(char)arg8 expectsPeerResponse:(char)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 isCompressed:(char)arg13 connectionType:(long long)arg14 didWakeHint:(char)arg15 ;
-(void)deliveryController:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(char)arg8 expectsPeerResponse:(char)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 isCompressed:(char)arg13 connectionType:(long long)arg14 didWakeHint:(char)arg15 ;
-(void)deliveryController:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 deviceID:(id)arg3 btUUID:(id)arg4 messageID:(id)arg5 peerResponseIdentifier:(id)arg6 priority:(long long)arg7 connectionType:(long long)arg8 ;
-(void)deliveryControllerHasSpaceforNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 ;
-(void)deliveryControllerHasSpaceforNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 ofTypes:(id)arg4 ;
-(void)deliveryControllerHasSpaceforUrgentMessages:(id)arg1 dataProtectionClass:(unsigned)arg2 ofTypes:(id)arg3 ;
-(id)deliveryControllerQueuedIncomingMessageDictionary:(id)arg1 ;
-(void)duetInterface:(id)arg1 resourceAvailabilityChangedForIdentifiers:(id)arg2 ;
-(void)deliveryController:(id)arg1 didReceiveMessage:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 messageID:(id)arg6 ;
-(void)didAddPairedDevice:(id)arg1 ;
-(void)didRemovePairedDevice:(id)arg1 ;
-(void)didUpdatePairedDevice:(id)arg1 ;
-(void)didUpdateProtocolForPairedDevice:(id)arg1 ;
-(void)registrationHashProcessor:(id)arg1 didFlushCacheForService:(id)arg2 remoteURI:(id)arg3 localURI:(id)arg4 guid:(id)arg5 ;
-(void)dropQueuedBroadcastsForServices:(id)arg1 ;
-(char)validateListenerForLocalObject:(id)arg1 ;
-(void)_stopPushHandling;
-(id)broadcasterForEntitlement:(id)arg1 messageContext:(id)arg2 ;
-(id)_lockedRemoteObjectsWithService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ignoreService:(char)arg5 ;
-(id)registrationBroadcasterForTopic:(id)arg1 messageContext:(id)arg2 ;
-(id)broadcasterForTopic:(id)arg1 messageContext:(id)arg2 ;
-(void)enqueueBroadcast:(/*^block*/id)arg1 forTopic:(id)arg2 entitlement:(id)arg3 command:(id)arg4 capabilities:(unsigned)arg5 messageContext:(id)arg6 ;
-(void)launchOnDemandServicesForQueuedBroadcastAttempts;
-(id)dequeueBroadcastWithID:(long long)arg1 forMessageUUID:(id)arg2 service:(id)arg3 priority:(long long)arg4 ;
-(void)logAccessWarningForClientAtIndex:(unsigned long long)arg1 withService:(id)arg2 entitlement:(id)arg3 logMessage:(id)arg4 ;
-(void)setListenerServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned)arg3 messageContext:(id)arg4 ;
-(void)registerForNotificationsOnServices:(id)arg1 messageContext:(id)arg2 ;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 messageContext:(id)arg3 ;
-(void)openSocketWithOptions:(id)arg1 messageContext:(id)arg2 ;
-(void)closeSocketWithOptions:(id)arg1 messageContext:(id)arg2 ;
-(void)getDeliveryStatsWithMessageContext:(id)arg1 ;
-(IDSRegistrationHashProcessor *)queryUpdateNotifier;
-(IDSCertifiedDeliveryReplayCommitter *)replayStateCommitter;
-(IDSTransparentEndpointViewer *)transparentEndpointViewer;
-(void)reportiMessageSpam:(id)arg1 toURI:(id)arg2 messageContext:(id)arg3 ;
-(void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(char)arg3 messageServerTimestamp:(id)arg4 toURI:(id)arg5 messageContext:(id)arg6 ;
-(void)reportiMessageSpamCheckUnknown:(id)arg1 count:(id)arg2 requestID:(id)arg3 messageContext:(id)arg4 ;
-(void)_respondToAppleCareRequestID:(id)arg1 withMessageContext:(id)arg2 error:(id)arg3 ;
-(void)appleCareSignInUserName:(id)arg1 DSID:(id)arg2 authToken:(id)arg3 requestID:(id)arg4 messageContext:(id)arg5 ;
-(void)appleCareSignOutUserWithRequestID:(id)arg1 messageContext:(id)arg2 ;
-(id)_errorForMissingEntitlement:(id)arg1 ;
-(long long)_subscriptionSourceNumberForContext:(id)arg1 ;
-(void)authenticatePhoneWithRequestUUID:(id)arg1 messageContext:(id)arg2 ;
-(void)generatePhoneAuthenticationSignatureOverData:(id)arg1 withRequestUUID:(id)arg2 messageContext:(id)arg3 ;
-(void)requestCarrierTokenForSubscriptionSource:(id)arg1 IMEI:(id)arg2 carrierNonce:(id)arg3 requestUUID:(id)arg4 messageContext:(id)arg5 ;
-(void)setPhoneUserSubscriptionSource:(id)arg1 withRequestUUID:(id)arg2 messageContext:(id)arg3 ;
-(void)fetchPhoneUserSubscriptionSourceWithRequestUUID:(id)arg1 messageContext:(id)arg2 ;
-(void)_submitRegistrationAccountStatusMetric;
-(void)_respondToRegistrationControlWithRequestID:(id)arg1 status:(long long)arg2 messageContext:(id)arg3 error:(id)arg4 ;
-(void)respondToRegistrationControlActionWithRequestID:(id)arg1 messageContext:(id)arg2 error:(id)arg3 ;
-(void)_processStoredIncomingLocalMessages;
-(void)setupAccountWithLoginID:(id)arg1 serviceName:(id)arg2 accountType:(int)arg3 accountConfig:(id)arg4 authToken:(id)arg5 password:(id)arg6 transactionID:(id)arg7 messageContext:(id)arg8 ;
-(void)addAccountWithLoginID:(id)arg1 serviceName:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountInfo:(id)arg5 messageContext:(id)arg6 ;
-(void)_removeAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)_removeAndDeregisterAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)updateAccount:(id)arg1 withAccountInfo:(id)arg2 messageContext:(id)arg3 ;
-(void)enableAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)disableAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)authTokenChanged:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)passwordChanged:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)passwordUpdatedForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 forAccount:(id)arg3 messageContext:(id)arg4 ;
-(void)validateProfileForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)addAliases:(id)arg1 toAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)removeAliases:(id)arg1 fromAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)validateAliases:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)unvalidateAliases:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)activateAlias:(id)arg1 onAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)deactivateAlias:(id)arg1 onAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)forceRemoveAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)_reregisterAndReidentify:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)deactivateAndPurgeIdentifyForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)hardDeregisterWithMessageContext:(id)arg1 ;
-(void)triggerFinalDeregisterWithMessageContext:(id)arg1 ;
-(void)kickGetDependentForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)reRegisterWithUserID:(id)arg1 action:(id)arg2 service:(id)arg3 messageContext:(id)arg4 ;
-(void)repairAccountsWithMessageContext:(id)arg1 ;
-(void)clearIDSStateWithMessageContext:(id)arg1 ;
-(void)initialLocalSyncStartedForServices:(id)arg1 messageContext:(id)arg2 ;
-(void)initialLocalSyncCompletedForServices:(id)arg1 messageContext:(id)arg2 ;
-(void)iCloudSignInWithUserName:(id)arg1 authToken:(id)arg2 password:(id)arg3 accountInfo:(id)arg4 accountStatus:(id)arg5 handles:(id)arg6 messageContext:(id)arg7 ;
-(void)iCloudUpdateForUserName:(id)arg1 accountInfo:(id)arg2 messageContext:(id)arg3 ;
-(void)iCloudModifyForUserName:(id)arg1 messageContext:(id)arg2 ;
-(void)iCloudSignOutWithMessageContext:(id)arg1 ;
-(void)iTunesSignInWithUserName:(id)arg1 authToken:(id)arg2 password:(id)arg3 accountInfo:(id)arg4 accountStatus:(id)arg5 handles:(id)arg6 messageContext:(id)arg7 ;
-(void)iTunesSignOutWithMessageContext:(id)arg1 ;
-(void)updateUserWithOldUserName:(id)arg1 newUserName:(id)arg2 messageContext:(id)arg3 ;
-(void)iCloudSignInHackWithUserName:(id)arg1 password:(id)arg2 messageContext:(id)arg3 ;
-(void)iCloudSignOutHackWithMessageContext:(id)arg1 ;
-(void)setPassword:(id)arg1 forUsername:(id)arg2 onService:(id)arg3 messageContext:(id)arg4 ;
-(void)updateSubServices:(id)arg1 forService:(id)arg2 deviceUniqueID:(id)arg3 messageContext:(id)arg4 ;
-(void)setPairedDeviceInfo:(id)arg1 messageContext:(id)arg2 ;
-(void)setNSUUID:(id)arg1 onDeviceWithUniqueID:(id)arg2 forService:(id)arg3 messageContext:(id)arg4 ;
-(void)incomingAccountSyncMessage:(id)arg1 messageContext:(id)arg2 ;
-(void)regenerateRegisteredIdentityWithMessageContext:(id)arg1 ;
-(void)registrationControlSetRegistrationStateForRegistrationType:(long long)arg1 toState:(long long)arg2 requestID:(id)arg3 messageContext:(id)arg4 ;
-(void)registrationControlGetRegistrationStateForRegistrationType:(long long)arg1 requestID:(id)arg2 messageContext:(id)arg3 ;
-(void)_processMessagesUponUnpairing;
-(void)_processDisallowedMessages;
-(id)cloudRelayRegisteredAccountWithError:(id*)arg1 ;
-(void)homeKitGetServiceUserIDsWithMessageContext:(id)arg1 ;
-(void)homeKitGetAdminAccessTokensWithServiceUserID:(id)arg1 accessoryID:(id)arg2 pairingToken:(id)arg3 messageContext:(id)arg4 ;
-(void)homeKitGetConsentTokensWithServiceUserID:(id)arg1 accessoryIDs:(id)arg2 adminID:(id)arg3 messageContext:(id)arg4 ;
-(void)homeKitGetUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 userHandle:(id)arg3 accessoryRequests:(id)arg4 messageContext:(id)arg5 ;
-(void)homeKitRefreshUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 accessoryRequests:(id)arg3 messageContext:(id)arg4 ;
-(char)_canSendNonUrgentInternetMessageForTopic:(id)arg1 ;
-(void)_performDuetCheckAndSendForAccount:(id)arg1 sendParameters:(id)arg2 logString:(id)arg3 fromQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_handleSpaceBecomingAvailableForUrgentLocalMessagesWithDataProtectionClasses:(id)arg1 withMessageTypes:(id)arg2 ;
-(void)_failSavedMessageCleanly:(id)arg1 withResponseCode:(long long)arg2 ;
-(void)_cleanupOutgoingMessageDatabase;
-(void)_cleanupOutgoingMessages;
-(void)_cleanupOutgoingQWSMessages;
-(void)_cleanupOutgoingExpiredMessages;
-(void)_cleanupRunawayClientOutgoingMessages;
-(void)_failSavedMessagesCleanly:(id)arg1 withResponseCode:(long long)arg2 ;
-(unsigned long long)_maxOutgoingDatabasesSizeInMB;
-(unsigned long long)_maxMessagesForRunawayClientConsideration;
-(void)_cleanupExpiredIncomingMessages;
-(void)_fetchAccountEntitlements:(id*)arg1 listenerID:(id*)arg2 inContext:(id)arg3 ;
-(char)dropMessageIfDropPointIsDetectedWithSendParameters:(id)arg1 ;
-(char)_canSendMessageWithAccount:(id)arg1 toDestination:(id)arg2 ;
-(char)_shouldIncludeDefaultDeviceAsDestinationForMessageForFromID:(id)arg1 service:(id)arg2 ;
-(char)_shouldMessageBeProxied:(id)arg1 service:(id)arg2 ;
-(void)_sendCertifiedDeliveryReceiptIfNeededForMessage:(id)arg1 service:(id)arg2 failureReason:(id)arg3 failureReasonMessage:(id)arg4 ;
-(void)_sendErrorMessage:(id)arg1 fromID:(id)arg2 toDestinations:(id)arg3 usingAccountWithUniqueID:(id)arg4 useDictAsTopLevel:(char)arg5 dataToEncrypt:(id)arg6 wantsResponse:(char)arg7 timeout:(double)arg8 command:(id)arg9 priority:(long long)arg10 completionBlock:(/*^block*/id)arg11 ;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priorities:(id)arg2 dataProtectionClasses:(id)arg3 messageTypes:(id)arg4 ;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 ;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 messageTypes:(id)arg4 ;
-(void)_processLocalMessagesWithAccountUUIDs:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 ;
-(void)_processLocalMessagesWithAccountUUIDs:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 messageTypes:(id)arg4 ;
-(id)_messageStoreForDataProtectionClass:(unsigned)arg1 ;
-(void)_nonUrgentInternetSendTimerFired;
-(long long)_currentSecondsIntoDay;
-(double)_nonUrgentInternetSendProbabilityForCurrentWindow;
-(char)_rollDieForNonUrgentInternetSend;
-(char)_hasNonUrgentInternetSendingBudget;
-(void)_updateNonUrgentInternetSendTimer;
-(void)_optionallyDecryptMessage:(id)arg1 encryptedData:(id)arg2 forGroupID:(id)arg3 forTopic:(id)arg4 fromID:(id)arg5 certifiedDeliveryContext:(id)arg6 isLiveRetry:(char)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)_sendMessageCheckpointIfNecessary:(id)arg1 checkpoint:(long long)arg2 service:(id)arg3 additionalInformation:(id)arg4 ;
-(void)_submitLastResortCacheMetricForGUID:(id)arg1 service:(id)arg2 ;
-(char)_shouldForgetCachedPeerTokensForDecryptionErrorType:(long long)arg1 withOriginalDecryptionError:(id)arg2 ;
-(char)_shouldRetryForDecryptionErrorType:(long long)arg1 ;
-(double)_decryptionRetryIntervalForError:(id)arg1 ;
-(id)_failureReasonMessageFromECError:(id)arg1 andLegacyError:(id)arg2 ;
-(char)_shouldReplyWithCertifiedDeliveryReceiptForDecryptionErrorType:(long long)arg1 ;
-(char)_shouldReplyWithRemoteDecryptionErrorMessageForDecryptionErrorType:(long long)arg1 ;
-(void)_optionallyDecryptMessage:(id)arg1 encryptedData:(id)arg2 forGroupID:(id)arg3 forTopic:(id)arg4 fromID:(id)arg5 certifiedDeliveryContext:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_ackMessageWithSequenceNumber:(unsigned)arg1 forDeviceID:(id)arg2 priority:(long long)arg3 dataProtectionClass:(unsigned)arg4 connectionType:(long long)arg5 guid:(id)arg6 ;
-(void)_IDSPowerLogDictionary:(id)arg1 info:(id)arg2 ;
-(char)_checkIfDupeAndNoteGuid:(id)arg1 local:(char)arg2 topic:(id)arg3 ;
-(void)getLocalIncomingPowerAssertion:(id)arg1 queue:(id)arg2 ;
-(id)_decryptAOverCMessage:(id)arg1 topic:(id)arg2 fromDeviceID:(id)arg3 error:(id*)arg4 ;
-(void)_processIncomingLocalMessage:(id)arg1 topic:(id)arg2 command:(id)arg3 deviceID:(id)arg4 btUUID:(id)arg5 context:(id)arg6 storedGUID:(id)arg7 priority:(id)arg8 connectionType:(long long)arg9 didWakeHint:(char)arg10 ;
-(void)_processStoredIncomingLocalMessage:(id)arg1 ;
-(double)_minimumNextStoredLoadTime;
-(void)_processIncomingRemoteMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 storedGuid:(id)arg4 messageContext:(id)arg5 ;
-(double)_maximumNextStoredLoadTime;
-(void)_processStoredIncomingRemoteMessagesWithGUIDs:(id)arg1 ignoringGUIDs:(id)arg2 lastTimeInterval:(double)arg3 ;
-(void)_processDeletingMessagesWithPriority:(long long)arg1 reason:(id)arg2 responseCode:(long long)arg3 allowedTrafficClasses:(id)arg4 ;
-(char)_shouldForgetCachedPeerTokensForIncomingRemoteDecryptionErrorType:(long long)arg1 ;
-(char)_shouldDropMessageForIncomingErrorMessageWithDecryptionErrorType:(long long)arg1 ;
-(void)_processIncomingRemoteMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 storedGuid:(id)arg4 checkpointTrace:(id)arg5 messageContext:(id)arg6 ;
-(char)_shouldRejectMessageOnCrossAccountService:(id)arg1 fromSender:(id)arg2 ;
-(Class)_messageStoreClass;
-(char)_primaryAccountExistsForService:(id)arg1 withURI:(id)arg2 ;
-(char)_doesMessageContainValidCombination:(id)arg1 ;
-(id)_validAccountForIncomingMessageSentToIdentifier:(id)arg1 service:(id)arg2 filterMessage:(char*)arg3 ;
-(void)sendAppAckWithGUID:(id)arg1 toDestination:(id)arg2 forAccountWithUniqueID:(id)arg3 connectionType:(long long)arg4 messageContext:(id)arg5 ;
-(char)_isDeviceInAccountRegistration:(id)arg1 forService:(id)arg2 ;
-(char)_processNonMessagingPayloadWithCommand:(id)arg1 dictionaryPayload:(id)arg2 senderToken:(id)arg3 topic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 peerResponseIdentifier:(id)arg7 guid:(id)arg8 service:(id)arg9 shouldFilter:(char)arg10 idsMessageContext:(id)arg11 messageContext:(id)arg12 ;
-(char)shouldProxyMessageForService:(id)arg1 toIdentifier:(id)arg2 ;
-(void)_processIncomingRemoteResourceTransferMessage:(id)arg1 guid:(id)arg2 context:(id)arg3 specificOriginator:(id)arg4 broadcastTopic:(id)arg5 toIdentifier:(id)arg6 topic:(id)arg7 messageContext:(id)arg8 ;
-(void)_processMessageError:(char)arg1 topLevelMessage:(id)arg2 error:(id)arg3 messageID:(id)arg4 service:(id)arg5 serviceType:(id)arg6 token:(id)arg7 fromIdentifier:(id)arg8 toIdentifier:(id)arg9 groupID:(id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(char)_shouldDropMessageForIncomingDecryptionErrorType:(long long)arg1 ;
-(void)_handleIncomingAttachmentMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 certifiedDeliveryContext:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 identifier:(id)arg2 withTimeout:(double)arg3 forKey:(id)arg4 ;
-(unsigned char)_dedupBehaviorForMessage:(id)arg1 ;
-(void)_broadcastPendingMessageUpdateForMessage:(id)arg1 fromID:(id)arg2 toIdentifier:(id)arg3 forTopic:(id)arg4 messageContext:(id)arg5 ;
-(id)_IMTransferServiceController;
-(char)_isBulkingStorageMessagesForService:(id)arg1 ;
-(void)_noteLastItemFromStorage:(id)arg1 ;
-(void)_noteItemFromStorage:(id)arg1 ;
-(id)_incomingMessageStorageDictionaryForPayload:(id)arg1 topic:(id)arg2 deviceID:(id)arg3 btUUID:(id)arg4 command:(id)arg5 messageUUID:(id)arg6 sequenceNumber:(id)arg7 wantsAppAck:(char)arg8 expectsPeerResponse:(char)arg9 peerResponseIdentifier:(id)arg10 ;
-(char)_shouldStoreBeforeFirstUnlockIncomingLocalMessage:(id)arg1 from:(id)arg2 forTopic:(id)arg3 ;
-(char)_checkIfDupeAndNoteGuid:(id)arg1 local:(char)arg2 topic:(id)arg3 forceNoteGuid:(char)arg4 ;
-(void)_addIncomingGUIDsWithGuid:(id)arg1 isLocal:(char)arg2 hasLock:(char)arg3 ;
-(long long)_messageTypeForConnection:(long long)arg1 ;
-(void)sendServerMessage:(id)arg1 command:(id)arg2 usingAccountWithUniqueID:(id)arg3 messageContext:(id)arg4 ;
-(void)sendOpportunisticData:(id)arg1 onService:(id)arg2 usingAccountWithUniqueID:(id)arg3 withIdentifier:(id)arg4 options:(id)arg5 messageContext:(id)arg6 ;
-(void)cancelOpportunisticDataOnService:(id)arg1 withIdentifier:(id)arg2 messageContext:(id)arg3 ;
-(void)sendMessageWithSendParameters:(id)arg1 messageContext:(id)arg2 ;
-(void)sendCertifiedDeliveryReceipt:(id)arg1 serviceName:(id)arg2 messageContext:(id)arg3 ;
-(void)setPreferInfraWiFi:(char)arg1 service:(id)arg2 messageContext:(id)arg3 ;
-(void)setLinkPreferences:(id)arg1 service:(id)arg2 messageContext:(id)arg3 ;
-(void)startOTRTest:(id)arg1 priority:(long long)arg2 messageContext:(id)arg3 ;
-(void)testCloudQRConnection:(id)arg1 messageContext:(id)arg2 ;
-(void)failedDecryptingMessage:(id)arg1 reason:(long long)arg2 forGroupID:(id)arg3 onService:(id)arg4 messageContext:(id)arg5 ;
-(char)_canBulkMessageWithParameters:(id)arg1 ;
-(void)_processStoredOutgoingUrgentMessagesProcessLocalAccounts:(char)arg1 ;
-(void)_decryptEngramMessage:(id)arg1 groupID:(id)arg2 senderToken:(id)arg3 fromID:(id)arg4 guid:(id)arg5 messageContext:(id)arg6 ;
-(void)cancelItemWithIdentifier:(id)arg1 service:(id)arg2 messageContext:(id)arg3 ;
-(void)getProgressUpdateForIdentifier:(id)arg1 service:(id)arg2 messageContext:(id)arg3 ;
-(void)acknowledgeOutgoingMessageWithGUID:(id)arg1 alternateCallbackID:(id)arg2 forAccountWithUniqueID:(id)arg3 messageContext:(id)arg4 ;
-(void)acknowledgeMessageWithStorageGUID:(id)arg1 realGUID:(id)arg2 forAccountWithUniqueID:(id)arg3 broadcastTime:(id)arg4 messageSize:(id)arg5 priority:(id)arg6 broadcastID:(long long)arg7 connectionType:(long long)arg8 messageContext:(id)arg9 ;
-(void)acknowledgeMessageWithGUID:(id)arg1 forAccountWithUniqueID:(id)arg2 broadcastTime:(id)arg3 messageSize:(id)arg4 priority:(id)arg5 messageContext:(id)arg6 ;
-(char)_checkEntitlement:(id)arg1 forAccountWithID:(id)arg2 messageContext:(id)arg3 ;
-(id)_sessionWithUniqueID:(id)arg1 messageContext:(id)arg2 requiredEntitlement:(id)arg3 ;
-(id)_sessionWithInstanceID:(id)arg1 messageContext:(id)arg2 requiredEntitlement:(id)arg3 ;
-(void)setupNewSessionWithConfiguration:(id)arg1 messageContext:(id)arg2 ;
-(void)cleanupSession:(id)arg1 messageContext:(id)arg2 ;
-(void)cleanupSessionWithInstanceID:(id)arg1 messageContext:(id)arg2 ;
-(void)sendInvitation:(id)arg1 withOptions:(id)arg2 messageContext:(id)arg3 ;
-(void)sendInvitation:(id)arg1 withData:(id)arg2 declineOnError:(char)arg3 messageContext:(id)arg4 ;
-(void)acceptInvitation:(id)arg1 messageContext:(id)arg2 ;
-(void)acceptInvitation:(id)arg1 withData:(id)arg2 messageContext:(id)arg3 ;
-(void)cancelInvitation:(id)arg1 messageContext:(id)arg2 ;
-(void)cancelInvitation:(id)arg1 withData:(id)arg2 messageContext:(id)arg3 ;
-(void)cancelInvitation:(id)arg1 withRemoteEndedReasonOverride:(unsigned)arg2 messageContext:(id)arg3 ;
-(void)declineInvitation:(id)arg1 messageContext:(id)arg2 ;
-(void)declineInvitation:(id)arg1 withData:(id)arg2 messageContext:(id)arg3 ;
-(void)reconnectSessionWithUniqueID:(id)arg1 messageContext:(id)arg2 ;
-(void)endSession:(id)arg1 messageContext:(id)arg2 ;
-(void)endSession:(id)arg1 withData:(id)arg2 messageContext:(id)arg3 ;
-(void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2 forSessionWithUniqueID:(id)arg3 messageContext:(id)arg4 ;
-(void)setAudioEnabled:(char)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3 ;
-(void)setMuted:(char)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3 ;
-(void)setPreferences:(id)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3 ;
-(void)setInviteTimetout:(long long)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3 ;
-(void)acknowledgeSessionID:(id)arg1 clientID:(id)arg2 messageContext:(id)arg3 ;
-(void)sendAllocationRequest:(id)arg1 options:(id)arg2 messageContext:(id)arg3 ;
-(void)updateMembers:(id)arg1 forGroup:(id)arg2 sessionID:(id)arg3 withContext:(id)arg4 triggeredLocally:(char)arg5 messageContext:(id)arg6 ;
-(void)updateParticipantData:(id)arg1 forGroup:(id)arg2 sessionID:(id)arg3 withContext:(id)arg4 messageContext:(id)arg5 ;
-(void)joinGroupSession:(id)arg1 withOptions:(id)arg2 messageContext:(id)arg3 ;
-(void)leaveGroupSession:(id)arg1 participantInfo:(id)arg2 messageContext:(id)arg3 ;
-(void)requestActiveParticipantsForGroupSession:(id)arg1 messageContext:(id)arg2 ;
@end

