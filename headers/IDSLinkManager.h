/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:15 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/IDSLinkDelegate.h>
#import <libobjc.A.dylib/IDSWPLinkManagerDelegate.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@protocol OS_dispatch_source, IDSLinkDelegate;
@class NSMutableDictionary, NSDictionary, IDSWPLinkManager, NSString, NSObject, IDSSockAddrWrapper;

@interface IDSLinkManager : NSObject <IDSLinkDelegate, IDSWPLinkManagerDelegate, IMSystemMonitorListener> {

	NSMutableDictionary* _cbuuidToLinks;
	NSMutableDictionary* _deviceIDToCurrentLink;
	NSDictionary* _deviceIDToUDPDestinations;
	IDSWPLinkManager* _wpLinkManager;
	char _isCentral;
	char _mayBringUpWiFi;
	char _isWiFiBroughtUp;
	char _shouldBringWiFiDown;
	char _shouldKeepWiFiUp;
	unsigned _handshakeCounter;
	unsigned _WiFiBringUpCounter;
	double _addressRetransmissionInterval;
	char _requireBT;
	char _shouldStartBTLinkManager;
	NSMutableDictionary* _deviceIDToAllocRequests;
	NSMutableDictionary* _deviceIDToGlobalLinkUp;
	char _delayedDefaultDeviceAllocateRequest;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _totalPacketsDropped;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	unsigned long long _previousPacketsDropped;
	double _previousReportTime;
	double _previousReportFileOpenTime;
	double _minReportFileOpenTimeInterval;
	char _reporterFile[1025];
	int _reporterFd;
	char _isInternalInstall;
	char _demoMode;
	NSString* _fixedInterface;
	NSString* _fixedInterfaceDestination;
	char _hasFixedDestination;
	NSObject*<OS_dispatch_source> _reporterTimer;
	SCDynamicStoreRef _dynamicStore;
	char _cellularDataStatusListenerStarted;
	id<IDSLinkDelegate> _delegate;
	NSString* _defaultDeviceCbuuid;
	char _doesDefaultDevicePreferInfraWiFi;
	char _isDefaultDeviceUsingBTLink;
	char _isDefaultDeviceNearby;
	char _lastSentDefaultDeviceNearby;
	char _lastSentDefaultDeviceConnectivity;
	char _lastSentDefaultDeviceCloudConnectivity;
	char _lastSentDefaultPeerConnectivity;
	char _isDefaultDeviceOnPhoneCall;
	char _hasDelayedNoConnectivityNotification;
	IDSSockAddrWrapper* _localWiFiAddressUsedForDefaultDevice;
	unsigned long long _currentDefaultDeviceLinkType;

}

@property (nonatomic,readonly) unsigned long long currentDefaultDeviceLinkType;              //@synthesize currentDefaultDeviceLinkType=_currentDefaultDeviceLinkType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)start;
-(id)initWithDelegate:(id)arg1 ;
-(void)startLocalSetup;
-(void)addPairedDevice:(id)arg1 ;
-(void)connectPairedDevice:(id)arg1 ;
-(void)deletePairedDevice:(id)arg1 ;
-(void)setPreferInfraWiFi:(char)arg1 ;
-(void)setLinkPreferences:(id)arg1 ;
-(void)link:(id)arg1 didDisconnectOverCloud:(id)arg2 cbuuid:(id)arg3 ;
-(void)link:(id)arg1 didAddQREvent:(id)arg2 ;
-(void)link:(id)arg1 didConnectUnderlyingLink:(char)arg2 linkUUID:(id)arg3 localAttributes:(id)arg4 remoteAttributes:(id)arg5 ;
-(void)link:(id)arg1 didDisconnectUnderlyingLinkID:(char)arg2 linkUUID:(id)arg3 reason:(unsigned char)arg4 ;
-(void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(char)arg2 currentDefaultLinkID:(char)arg3 ;
-(void)link:(id)arg1 didFailToConnectOverCloud:(id)arg2 cbuuid:(id)arg3 ;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID13*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(void)link:(id)arg1 didConnectOverCloud:(id)arg2 cbuuid:(id)arg3 ;
-(void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(void)link:(id)arg1 didReceiveSKEData:(id)arg2 ;
-(void)link:(id)arg1 didRATChange:(unsigned char)arg2 ;
-(void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2 ;
-(void)link:(id)arg1 didReceiveReportEvent:(id)arg2 ;
-(unsigned long long)sendPacketBufferArray:(/*function pointer*/void**)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(void)link:(id)arg1 didGetLinkProbingStatus:(id)arg2 ;
-(char)link:(id)arg1 didReceivePacket:(SCD_Struct_ID13*)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(void)link:(id)arg1 didReceiveSessionInfo:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 success:(char)arg5 ;
-(id)copyLinkStatsDict;
-(void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(void)link:(id)arg1 hostAwakeDidChange:(char)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(void)link:(id)arg1 hasSpaceAvailable:(char)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(void)link:(id)arg1 didWiFiNWPathFlagsChanged:(unsigned short)arg2 ;
-(void)link:(id)arg1 didCellularNWPathFlagsChanged:(unsigned short)arg2 ;
-(void)createConnectionDataForDevice:(id)arg1 localPartyID:(id)arg2 dataReadyHandler:(/*^block*/id)arg3 ;
-(void)startConnectionForDevice:(id)arg1 isInitiator:(char)arg2 remotePartyID:(id)arg3 useStunMICheck:(char)arg4 ;
-(void)stopUDPGlobalLinkForDevice:(id)arg1 ;
-(void)setAcceptedRelaySession:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3 ;
-(void)startUDPGlobalLinkForDevice:(id)arg1 ;
-(void)connectGlobalLinkForDevice:(id)arg1 sessionInfo:(id)arg2 connectReadyHandler:(/*^block*/id)arg3 withLocalInterfacePreference:(int)arg4 ;
-(void)setHasPendingAllocation:(char)arg1 forIDSSession:(id)arg2 ;
-(void)stopGlobalLinkForDevice:(id)arg1 ;
-(void)disconnectGlobalLinkForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processRemoteConnectionDataForDevice:(id)arg1 remoteConnectionData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startGlobalLinkForDevice:(id)arg1 ;
-(void)injectFakePacketInBTLink:(SCD_Struct_ID13*)arg1 cbuuid:(id)arg2 ;
-(void)stopLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 disconnectWP:(char)arg3 ;
-(void)flushBuffer:(unsigned long long)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(char)isConnectedToDeviceID:(id)arg1 ;
-(unsigned long long)currentLinkType:(id)arg1 ;
-(void)triggerBTCorruptionRecoveryForCBUUID:(id)arg1 ;
-(void)setRequireBT:(char)arg1 ;
-(void)stopBTDatagramLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(void)startBTDatagramLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(void)triggerFixedInterfaceLinksDidConnect;
-(void)setShouldStartBTLinkManager:(char)arg1 ;
-(void)startLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(void)setIsOnPhoneCall:(char)arg1 forDeviceID:(id)arg2 ;
-(void)handleAllocateRequestFailureForDevice:(id)arg1 requestID:(id)arg2 errorCode:(int)arg3 ;
-(void)currentLinkType:(unsigned long long*)arg1 andRATType:(unsigned*)arg2 forDeviceID:(id)arg3 ;
-(void)sendSKEData:(id)arg1 skeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDefaultUnderlyingLink:(id)arg1 linkID:(char)arg2 ;
-(void)setPacketNotificationFilter:(id)arg1 linkID:(char)arg2 uniqueTag:(unsigned)arg3 isEnabled:(char)arg4 ;
-(void)dropIPPackets:(id)arg1 linkID:(char)arg2 payloadArray:(id)arg3 ;
-(void)updateProtocolQualityOfService:(id)arg1 linkID:(char)arg2 isGood:(char)arg3 ;
-(void)stopKeepAlive:(id)arg1 linkIDs:(id)arg2 ;
-(void)setWiFiAssistState:(id)arg1 isWiFiAssistEnabled:(char)arg2 ;
-(void)currentCellularSignalStrength:(id)arg1 signalRaw:(int*)arg2 signalStrength:(int*)arg3 signalGrade:(int*)arg4 ;
-(void)startLinkProbing:(id)arg1 options:(id)arg2 ;
-(void)stopLinkProbing:(id)arg1 options:(id)arg2 ;
-(void)queryLinkProbingStatus:(id)arg1 options:(id)arg2 ;
-(void)flushLinkProbingStatus:(id)arg1 options:(id)arg2 ;
-(void)setRemoteDeviceVersion:(id)arg1 version:(unsigned)arg2 ;
-(void)getSessionInfo:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 options:(id)arg4 ;
-(void)updateSessionParticipants:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 participants:(id)arg4 ;
-(void)obliterateConnectionInfo;
-(unsigned long long)currentDefaultDeviceLinkType;
-(void)_startReporter;
-(void)_createWiFiManagerClient;
-(void)_bringUpWiFi:(char)arg1 ;
-(id)_newUDPLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 IPVersion:(unsigned long long)arg3 port:(unsigned short)arg4 ;
-(void)_setBestLinkToCurrent:(id)arg1 ;
-(void)_nearbyChangedForDefaultDevice;
-(id)generateLinkReport:(double)arg1 forceReport:(char)arg2 ;
-(void)_connectivityChangedForDefaultDevice:(char)arg1 isCloudConnected:(char)arg2 ;
-(void)_sendUDPLinkInterfaceAddresses:(id)arg1 toDeviceID:(id)arg2 isRetransmission:(char)arg3 isReply:(char)arg4 ;
-(char)_startUDPLinkHandshakeForDefaultDevice:(char)arg1 immediately:(char)arg2 ;
-(id)_selectBestLink:(id)arg1 ;
-(void)_processLinkChangeForDefaultDeviceFrom:(id)arg1 to:(id)arg2 ;
-(void)_startNetworkInterfaceListener:(char)arg1 ;
-(void)_startCellularDataStatusListener:(char)arg1 ;
-(unsigned long long)_sendPacketBuffer:(SCD_Struct_ID13*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 link:(id)arg4 ;
-(void)_removeAllLinksForDeviceID:(id)arg1 ;
-(id)_newUDPGlobalLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(char)_hasGlobalLinkConnectingOrConnected;
-(void)_removeAllocateRequestForDevice:(id)arg1 requestID:(id)arg2 ;
-(id)_newGlobalLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 options:(id)arg3 ;
-(id)_linkKeyForLink:(id)arg1 ;
-(void)_removeLinkForDeviceID:(id)arg1 linkKey:(id)arg2 verifyWithLink:(id)arg3 ;
-(void)_processLMCommandPacket:(SCD_Struct_ID13*)arg1 fromLink:(id)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(void)_startAllocateRequestForDevice:(id)arg1 ;
-(void)manager:(id)arg1 didPowerStateChange:(char)arg2 ;
-(void)manager:(id)arg1 linkDidConnect:(id)arg2 ;
-(void)manager:(id)arg1 linkDidDisconnect:(id)arg2 ;
-(void)_addAllocateRequestForDevice:(id)arg1 requestID:(id)arg2 ;
-(void)manager:(id)arg1 didPairedDeviceChange:(char)arg2 ;
-(void)_handleNetworkChanges:(id)arg1 ;
-(id)linkForCBUUID:(id)arg1 ;
-(id)_getIDSLinkTypeString:(unsigned long long)arg1 ;
-(void)_handleWRMLinkRecommendation:(unsigned long long)arg1 ;
-(void)_subscribeToWRMForLinkRecommendation:(unsigned long long)arg1 ;
-(void)_unsubscribeFromWRMForLinkRecommendation;
@end
