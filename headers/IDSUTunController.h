/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:11 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/IDSPairingManagerDelegate.h>

@protocol OS_dispatch_queue;
@class IDSLinkManager, NSMutableDictionary, NSObject, NSString;

@interface IDSUTunController : NSObject <IDSPairingManagerDelegate> {

	SimpleNSStringToObjectTable* _deviceConnectionInfoTableByCbuuid;
	opaque_pthread_mutex_t _deviceConnectionInfoTableByCbuuidLock;
	IDSLinkManager* _linkManager;
	char _logPackets;
	char _vifShouldReadMultiple;
	unsigned _vifMaxPendingPackets;
	char _vifUseChannel;
	char _hasFixedDestination;
	char _encryptionEnabled;
	char _controlChannelEncryptionDisabled;
	os_unfair_lock_s _controlChannelVersionCacheLock;
	NSMutableDictionary* _controlChannelVersionCache;
	char _isSimulateResetLoopTest;
	NSObject*<OS_dispatch_queue> _ipsecQueue;
	char _useBTDatagramPipe;
	char _ignoreUTunChannelWriteSignal;

}

@property (nonatomic,readonly) IDSLinkManager * linkManager;              //@synthesize linkManager=_linkManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)startLocalSetup;
-(void)addPairedDevice:(id)arg1 ;
-(void)connectPairedDevice:(id)arg1 ;
-(void)deletePairedDevice:(id)arg1 ;
-(void)closeSocketWithOptions:(id)arg1 ;
-(void)setPreferInfraWiFi:(char)arg1 ;
-(void)setLinkPreferences:(id)arg1 ;
-(void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(char)link:(id)arg1 didReceivePacket:(SCD_Struct_ID13*)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(id)copyLinkStatsDict;
-(void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(void)link:(id)arg1 hasSpaceAvailable:(char)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(void)clearStats;
-(void)reloadSettings;
-(void)createConnectionDataForDevice:(id)arg1 localPartyID:(id)arg2 dataReadyHandler:(/*^block*/id)arg3 ;
-(void)startConnectionForDevice:(id)arg1 isInitiator:(char)arg2 remotePartyID:(id)arg3 useStunMICheck:(char)arg4 ;
-(void)stopUDPGlobalLinkForDevice:(id)arg1 ;
-(void)setAcceptedRelaySession:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3 ;
-(void)startUDPGlobalLinkForDevice:(id)arg1 ;
-(unsigned long long)onTransportThread_SendWithConnectionContext:(id)arg1 packetBuffer:(SCD_Struct_ID13*)arg2 ;
-(void)getLinkInformationForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)onTransportThread_SetDefaultUnderlyingLink:(id)arg1 linkID:(char)arg2 ;
-(void)onTransportThread_SetPacketNotificationFilter:(id)arg1 linkID:(char)arg2 uniqueTag:(unsigned)arg3 isEnabled:(char)arg4 ;
-(void)onTransportThread_DropIPPackets:(id)arg1 linkID:(char)arg2 payloadArray:(id)arg3 ;
-(void)onTransportThread_StopKeepAlive:(id)arg1 linkIDs:(id)arg2 ;
-(void)onTransportThread_SendSKEData:(id)arg1 skeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)onTransportThread_UpdateProtocolQualityOfService:(id)arg1 linkID:(char)arg2 isGood:(char)arg3 ;
-(void)onTransportThread_CurrentCellularSignalStrength:(id)arg1 signalRaw:(int*)arg2 signalStrength:(int*)arg3 signalGrade:(int*)arg4 ;
-(void)onTransportThread_setRemoteDeviceVersion:(id)arg1 version:(unsigned)arg2 ;
-(void)onTransportThread_setWiFiAssistState:(id)arg1 isWiFiAssistEnabled:(char)arg2 ;
-(void)onTransportThread_startLinkProbing:(id)arg1 options:(id)arg2 ;
-(void)onTransportThread_stopLinkProbing:(id)arg1 options:(id)arg2 ;
-(void)onTransportThread_queryLinkProbingStatus:(id)arg1 options:(id)arg2 ;
-(void)onTransportThread_flushLinkProbingStatus:(id)arg1 options:(id)arg2 ;
-(unsigned long long)onTransportThread_SendToGlobalLinkWithSessionID:(id)arg1 packetBufferArray:(/*function pointer*/void**)arg2 arraySize:(int)arg3 ;
-(void)onTransportThread_getSessionInfo:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 options:(id)arg4 ;
-(void)connectGlobalLinkForDevice:(id)arg1 sessionInfo:(id)arg2 connectReadyHandler:(/*^block*/id)arg3 withLocalInterfacePreference:(int)arg4 ;
-(void)openSocketWithOptions:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setHasPendingAllocation:(char)arg1 forIDSSession:(id)arg2 ;
-(void)stopGlobalLinkForDevice:(id)arg1 ;
-(void)disconnectGlobalLinkForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)onTransportThread_getLinkType:(id)arg1 ;
-(void)onTransportThread_updateSessionParticipants:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 participants:(id)arg4 ;
-(unsigned long long)onTransportThread_SendToGlobalLinkWithSessionID:(id)arg1 packetBuffer:(SCD_Struct_ID13*)arg2 ;
-(void)cleanupSocketsForClient:(id)arg1 ;
-(void)closeSocketWithOptions:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)didAddPairedDevice:(id)arg1 ;
-(void)didRemovePairedDevice:(id)arg1 ;
-(void)didUpdatePairedDevice:(id)arg1 ;
-(void)prepareDefaultPairedConnectionInfoWithDeviceUniqueID:(id)arg1 shouldUseIPsecLink:(char)arg2 ;
-(id)perServiceDataSentForDevice:(id)arg1 services:(id)arg2 ;
-(id)perServiceDataReceivedForDevice:(id)arg1 services:(id)arg2 ;
-(unsigned long long)totalPacketsReceivedForDevice:(id)arg1 services:(id)arg2 ;
-(void)sendOTRNegotiationMessage:(id)arg1 negotiationCount:(unsigned)arg2 negotiationData:(id)arg3 ;
-(void)sendSuspendOTRNegotiationMessage:(id)arg1 ;
-(void)processRemoteConnectionDataForDevice:(id)arg1 remoteConnectionData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startGlobalLinkForDevice:(id)arg1 ;
-(void)onTransportThread_StopBTDatagramLinkForDefaultPairedDevice;
-(void)_reloadSettings;
-(void)resetTCPConnection:(id)arg1 forDeviceConnectionInfo:(id)arg2 ;
-(unsigned char)handleUtunChannelWrite:(id)arg1 source:(sockaddr*)arg2 destination:(sockaddr*)arg3 upperProtocol:(unsigned char)arg4 bytes:(const void*)arg5 bytesLen:(unsigned long long)arg6 ;
-(void)startControlChannelWithDevice:(id)arg1 endpoint:(id)arg2 ;
-(void)removeConnection:(id)arg1 fromDeviceConnectionInfo:(id)arg2 removeCode:(long long)arg3 removeReason:(id)arg4 ;
-(void)handleIPPayload:(const void*)arg1 bytesLength:(unsigned long long)arg2 source:(sockaddr*)arg3 destination:(sockaddr*)arg4 upperProtocol:(unsigned char)arg5 forDeviceConnectionInfo:(id)arg6 flush:(char)arg7 callerShouldStop:(char*)arg8 ;
-(void)handleUtunChannelRead:(id)arg1 limit:(unsigned)arg2 ;
-(id)stringComponentsForServiceConnectorService:(id)arg1 ;
-(void)startCompressionForConnection:(id)arg1 deviceConnectionInfo:(id)arg2 ;
-(void)internalStartConnectionWithEndpoint:(id)arg1 service:(const char*)arg2 parameters:(id)arg3 serviceConnector:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)internalOpenSocketWithDestination:(id)arg1 localSA:(id)arg2 remoteSA:(id)arg3 protocol:(int)arg4 trafficClass:(int)arg5 completionHandler:(/*^block*/id)arg6 ;
-(IDSLinkManager *)linkManager;
-(char)setupIPsecLinkForDeviceConnectionInfo:(id)arg1 ;
-(char)setupUTunForDeviceConnectionInfo:(id)arg1 ;
-(void)obliterateConnectionInfoForCBUUID:(id)arg1 ;
-(void)resetAllConnectionsForDevice:(id)arg1 ;
-(void)receiveControlChannelMessage:(id)arg1 fromCbuuid:(id)arg2 deviceUniqueID:(id)arg3 ;
-(id)defaultPairedDeviceIdentityPair;
-(void)obliterateConnectionInfoForCBUUID:(id)arg1 completionBlock:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)prepareControlChannelForDeviceConnectionInfo:(id)arg1 genericConnection:(id)arg2 ;
-(void)didConnectControlChannelForDeviceConnectionInfo:(id)arg1 connection:(id)arg2 error:(id)arg3 ;
-(void)resetIPsecTCPConnection:(id)arg1 forDeviceConnectionInfo:(id)arg2 ;
-(void)resetUTunTCPConnection:(id)arg1 forDeviceConnectionInfo:(id)arg2 ;
-(void)checkSuspendTrafficForDevice:(id)arg1 wait:(char)arg2 ;
-(void)startDataChannelWithDevice:(id)arg1 genericConnection:(id)arg2 serviceConnectorService:(id)arg3 endpoint:(id)arg4 ;
-(char)processCompressionRequest:(id)arg1 fromDeviceConnectionInfo:(id)arg2 ;
-(char)processCompressionResponse:(id)arg1 fromDeviceConnectionInfo:(id)arg2 ;
-(id)setupNewDeviceConnectionInfoForCbuuid:(id)arg1 deviceUniqueID:(id)arg2 identityPair:(id)arg3 remoteDeviceEncryptionInfo:(id)arg4 shouldUseIPsecLink:(char)arg5 ;
-(id)_prepareConnectionInfoWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 shouldUseIPsecLink:(char)arg3 identityPair:(id)arg4 remoteDeviceEncryptionInfo:(id)arg5 ;
-(void)setupDataConnectionWithDeviceConnectionInfo:(id)arg1 options:(id)arg2 ;
-(void)closeDataConnectionWithDeviceConnectionInfo:(id)arg1 options:(id)arg2 ;
-(void)doCheckSuspendTrafficForDevice:(id)arg1 ;
-(void)handleAllocateRequestFailureForDevice:(id)arg1 requestID:(id)arg2 errorCode:(int)arg3 ;
-(void)obliterateConnectionInfoWithCompletionBlock:(/*^block*/id)arg1 completionQueue:(id)arg2 ;
-(void)addPairedDevice:(id)arg1 shouldPairDirectlyOverIPsec:(char)arg2 ;
-(id)onTransportThread_PerServiceDataTransferredForDevice:(id)arg1 services:(id)arg2 ;
-(char)handleIncomingPacket:(SCD_Struct_ID13*)arg1 fromDeviceToken:(id)arg2 ;
-(void)_getStallDetectorForConnection:(id)arg1 deviceConnecionInfo:(id)arg2 ;
-(id)initWithName:(id)arg1 address:(id)arg2 andTestTransport:(id)arg3 ;
-(id)controlChannelVersionForCbuuid:(id)arg1 ;
-(void)suspendSocketWithOptions:(id)arg1 ;
-(void)resumeSocketWithOptions:(id)arg1 shouldLogCall:(char)arg2 ;
-(void)tearDownEncryptionForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(id)perServiceDataTransferredForDevice:(id)arg1 services:(id)arg2 ;
-(unsigned long long)totalPacketsSentForDevice:(id)arg1 services:(id)arg2 ;
@end

