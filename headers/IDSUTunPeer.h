/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:04 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/IDSUTunConnectionDelegate.h>
#import <libobjc.A.dylib/IDSWPLinkManagerConnectivityDelegate.h>

@protocol IDSUTunPeerDelegate, OS_dispatch_source;
@class NSString, NSArray, NSMutableDictionary, IDSUTunConnection, NSMutableSet, NSTimer, NSObject, IDSUTunPeerServiceMap, NSDictionary;

@interface IDSUTunPeer : NSObject <IDSUTunConnectionDelegate, IDSWPLinkManagerConnectivityDelegate> {

	NSString* _identifier;
	NSString* _btUUID;
	NSString* _uniqueID;
	NSString* _originalbtUUID;
	char _shouldUseIPsecLink;
	NSArray* _directConnections;
	NSArray* _urgentDirectConnections;
	NSArray* _defaultDirectConnections;
	NSArray* _syncDirectConnections;
	NSMutableDictionary* _connectedStates;
	NSMutableDictionary* _emptyStates;
	IDSUTunConnection* _urgentConnectionForAck;
	IDSUTunConnection* _defaultConnectionForAck;
	IDSUTunConnection* _syncConnectionForAck;
	IDSUTunConnection* _urgentCloudConnectionForAck;
	IDSUTunConnection* _defaultCloudConnectionForAck;
	char _isCloudConnected;
	char _isNearby;
	char _isMagnetIndicatingPeerIsAwake;
	char _localSetupInProgress;
	char _isPeerAlwaysConnected;
	char _isDefaultPairedDevice;
	char _waitForDefaultPairedDevice;
	char _supportsCloudConnections;
	char _pendingCloudEnable;
	id<IDSUTunPeerDelegate> _delegate;
	NSMutableSet* _servicesPreferringInfraWiFi;
	unsigned long long _totalDeliveredMessagesInfraWiFi;
	unsigned long long _totalPacketsReceivedInfraWiFi;
	unsigned long long _totalPacketsReceivedClientSockets;
	unsigned _dispatchCounterInfraWiFi;
	char _hadInfraWiFiTraffic;
	NSTimer* _disableTimer;
	NSTimer* _cloudDisableTimer;
	NSObject*<OS_dispatch_source> _powerLogTimerUrgent;
	NSObject*<OS_dispatch_source> _powerLogTimerDefault;
	NSObject*<OS_dispatch_source> _powerLogTimerSync;
	NSObject*<OS_dispatch_source> _powerLogTimerSockets;
	int _continuityConnectCount;
	IDSUTunPeerServiceMap* _incomingServiceMap;
	IDSUTunPeerServiceMap* _outgoingServiceMap;
	char _isClassCConnected;
	os_unfair_lock_s _emptyStatesLock;

}

@property (assign,nonatomic) os_unfair_lock_s emptyStatesLock;                                   //@synthesize emptyStatesLock=_emptyStatesLock - In the implementation block
@property (assign,nonatomic) char localSetupInProgress;                                          //@synthesize localSetupInProgress=_localSetupInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<IDSUTunPeerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * btUUID;                                                    //@synthesize btUUID=_btUUID - In the implementation block
@property (nonatomic,copy) NSString * uniqueID;                                                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSString * originalbtUUID;                                            //@synthesize originalbtUUID=_originalbtUUID - In the implementation block
@property (assign,nonatomic) char isDefaultPairedDevice;                                         //@synthesize isDefaultPairedDevice=_isDefaultPairedDevice - In the implementation block
@property (assign,nonatomic) char isNearby;                                                      //@synthesize isNearby=_isNearby - In the implementation block
@property (assign,nonatomic) char isMagnetIndicatingPeerIsAwake;                                 //@synthesize isMagnetIndicatingPeerIsAwake=_isMagnetIndicatingPeerIsAwake - In the implementation block
@property (nonatomic,readonly) char isConnected; 
@property (assign,nonatomic) char isPeerAlwaysConnected;                                         //@synthesize isPeerAlwaysConnected=_isPeerAlwaysConnected - In the implementation block
@property (assign,nonatomic) char isCloudConnected;                                              //@synthesize isCloudConnected=_isCloudConnected - In the implementation block
@property (assign,nonatomic) char isClassCConnected;                                             //@synthesize isClassCConnected=_isClassCConnected - In the implementation block
@property (assign,nonatomic) char supportsCloudConnections;                                      //@synthesize supportsCloudConnections=_supportsCloudConnections - In the implementation block
@property (assign,nonatomic) char pendingCloudEnable;                                            //@synthesize pendingCloudEnable=_pendingCloudEnable - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * sendingMessageStatistics; 
@property (nonatomic,readonly) NSDictionary * urgentPriorityMessageStatistics; 
@property (nonatomic,readonly) NSDictionary * urgentCloudPriorityMessageStatistics; 
@property (nonatomic,readonly) NSDictionary * defaultPriorityMessageStatistics; 
@property (nonatomic,readonly) NSDictionary * syncPriorityMessageStatistics; 
@property (assign,nonatomic) int continuityConnectCount;                                         //@synthesize continuityConnectCount=_continuityConnectCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<IDSUTunPeerDelegate>)delegate;
-(void)setDelegate:(id<IDSUTunPeerDelegate>)arg1 ;
-(NSString *)identifier;
-(NSString *)uniqueID;
-(void)setUniqueID:(NSString *)arg1 ;
-(char)isConnected;
-(char)isDefaultPairedDevice;
-(char)isCloudConnected;
-(char)isNearby;
-(void)setLinkPreferences:(id)arg1 ;
-(void)clearStats;
-(void)admissionPolicyChangedForTopic:(id)arg1 allowed:(char)arg2 ;
-(NSDictionary *)syncPriorityMessageStatistics;
-(NSDictionary *)defaultPriorityMessageStatistics;
-(NSDictionary *)urgentPriorityMessageStatistics;
-(NSDictionary *)urgentCloudPriorityMessageStatistics;
-(NSDictionary *)sendingMessageStatistics;
-(id)createConnectionWithIdentifier:(id)arg1 priority:(long long)arg2 shouldUseIPsecLink:(char)arg3 dataProtectionClass:(unsigned)arg4 ;
-(char)_shouldLogTransportStats;
-(void)_powerlogTransportStats;
-(void)enableCloudConnection;
-(void)performBlock:(/*^block*/id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 ;
-(char)isClassCConnected;
-(id)_copyStatisticsDict:(id)arg1 ;
-(void)_addStatsFromDict:(id)arg1 toAggregate:(id)arg2 ;
-(void)_accumulateStats:(id)arg1 intoMessages:(unsigned long long*)arg2 andBytes:(unsigned long long*)arg3 ;
-(id)_copyPowerlogDictionaryWithOutgoingStats:(id)arg1 incomingStats:(id)arg2 ;
-(void)_startPowerLogTimersForAllPriorities;
-(void)_powerlogDictionaryForSockets;
-(void)_powerlogDictionaryForPriority:(long long)arg1 ;
-(void)performBlockForAllConnections:(/*^block*/id)arg1 ;
-(void)performBlockSynchronouslyForAllConnections:(/*^block*/id)arg1 ;
-(void)setEnableOTR:(char)arg1 ;
-(void)setIsMagnetIndicatingPeerIsAwake:(char)arg1 ;
-(id)defaultCloudPriorityMessageStatistics;
-(void)_powerLogServices:(id)arg1 prefersInfraWifi:(char)arg2 ;
-(void)_checkServicesPreferringInfraWiFi:(unsigned)arg1 ;
-(void)setLocalSetupInProgress:(char)arg1 ;
-(void)dropDisallowedMessages;
-(void)trafficClassesChanged;
-(void)cancelMessageID:(id)arg1 ;
-(void)kickProgressBlockForMessageID:(id)arg1 ;
-(id)_connectionForPriority:(long long)arg1 messageType:(long long)arg2 dataProtectionClass:(unsigned)arg3 ;
-(id)rapportClient;
-(char)_messageTypeSupportedForCloudConnection:(long long)arg1 ;
-(long long)_priorityForConnection:(id)arg1 ;
-(long long)_connectionTypeForConnection:(id)arg1 ;
-(void)performBlockForDirectConnections:(/*^block*/id)arg1 ;
-(void)_startDisableTimerIfNecessary;
-(void)_startCloudDisableTimerIfNecessary;
-(void)_clearDisableTimer;
-(void)_handleCBUUIDDidConnect:(id)arg1 isDefaultPairedDevice:(char)arg2 isAlwaysConnected:(char)arg3 ;
-(void)_handleCBUUIDFailToConnect:(id)arg1 withReason:(id)arg2 ;
-(void)_disableTimerFired:(id)arg1 ;
-(char)_allConnectionsAreIdle;
-(void)_cloudDisableTimerFired:(id)arg1 ;
-(void)_clearCloudDisableTimer;
-(char)_allCloudConnectionsAreIdle;
-(void)connection:(id)arg1 connectivityChanged:(char)arg2 ;
-(void)connection:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(char)arg7 expectsPeerResponse:(char)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(char)arg11 didWakeHint:(char)arg12 ;
-(void)connection:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(char)arg7 expectsPeerResponse:(char)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(char)arg11 didWakeHint:(char)arg12 ;
-(void)connection:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(char)arg7 expectsPeerResponse:(char)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(char)arg11 didWakeHint:(char)arg12 ;
-(void)connection:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 fromID:(id)arg3 messageID:(id)arg4 peerResponseIdentifier:(id)arg5 ;
-(void)connectionHasSpaceForMessages:(id)arg1 dataProtectionClass:(unsigned)arg2 ;
-(void)connectionIsEmpty:(id)arg1 ;
-(void)connectionIsEmptyOfCloudMessages:(id)arg1 ;
-(void)manager:(id)arg1 cbuuidDidConnect:(id)arg2 isAlwaysConnected:(char)arg3 ;
-(void)manager:(id)arg1 cbuuidDidDisconnect:(id)arg2 ;
-(char)manager:(id)arg1 cbuuidDidDiscover:(id)arg2 ;
-(void)manager:(id)arg1 cbuuidDidFailToConnect:(id)arg2 withReason:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 btUUID:(id)arg2 uniqueID:(id)arg3 shouldUseIPsecLink:(char)arg4 isNearby:(char)arg5 isClassCConnected:(char)arg6 ;
-(void)setSupportsCloudConnections:(char)arg1 ;
-(void)setBtUUID:(NSString *)arg1 ;
-(char)sendAckForMessageWithSequenceNumber:(unsigned)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 connectionType:(long long)arg4 ;
-(char)hasSpaceForMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned)arg2 messageType:(long long)arg3 ;
-(id)syncCloudPriorityMessageStatistics;
-(void)logCurrentTransportStatsAndResetTimers;
-(void)enableConnection;
-(void)disableConnectionForReason:(long long)arg1 shouldWait:(char)arg2 ;
-(void)disableCloudConnectionForReason:(long long)arg1 ;
-(void)setPreferInfraWiFi:(char)arg1 services:(id)arg2 ;
-(void)unpairStart;
-(void)sendMessage:(id)arg1 priority:(long long)arg2 messageType:(long long)arg3 ;
-(void)setPendingCloudEnable:(char)arg1 ;
-(void)setIsPeerAlwaysConnected:(char)arg1 ;
-(void)forceOTRNegotiationForTopic:(id)arg1 priority:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSString *)btUUID;
-(void)setIsDefaultPairedDevice:(char)arg1 ;
-(void)setIsNearby:(char)arg1 ;
-(char)localSetupInProgress;
-(char)isMagnetIndicatingPeerIsAwake;
-(char)supportsCloudConnections;
-(char)pendingCloudEnable;
-(char)isPeerAlwaysConnected;
-(int)continuityConnectCount;
-(void)setContinuityConnectCount:(int)arg1 ;
-(NSString *)originalbtUUID;
-(void)setOriginalbtUUID:(NSString *)arg1 ;
-(void)setIsCloudConnected:(char)arg1 ;
-(void)setIsClassCConnected:(char)arg1 ;
-(os_unfair_lock_s)emptyStatesLock;
-(void)setEmptyStatesLock:(os_unfair_lock_s)arg1 ;
@end
