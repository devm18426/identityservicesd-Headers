/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:05 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_service_connector;
#import <identityservicesd/identityservicesd-Structs.h>
@class NSString, IDSSockAddrWrapper, NSMutableDictionary, IDSUTunControlChannel, NSData, NSMutableSet, NSMutableArray, NSObject;

@interface IDSDeviceConnectionInfo : NSObject {

	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	IDSSockAddrWrapper* _remoteSA;
	NSMutableDictionary* _connectionsByID;
	IDSUTunControlChannel* _controlChannel;
	NSData* _controlChannelCachedSYN;
	NSString* _controlChannelVersion;
	NSMutableSet* _highPriorityConnectionSendingSet;
	unsigned _localCIDSet[2048];
	char _suspendTraffic;
	double _suspendTrafficCheckTime;
	char _linkLayerConnected;
	double _linkLayerDisconnectTime;
	NEVirtualInterface_sRef _vifRef;
	NSString* _vifName;
	IDSSockAddrWrapper* _localSA;
	IDSPortMap _portMap;
	SimpleUInt32ToObjectTable* _connectionsTableByLocalRemotePortKey;
	SimpleUInt32ToObjectTable* _outgoingEncryptionTableBySSRC;
	SimpleUInt32ToObjectTable* _incomingEncryptionTableBySSRC;
	NSMutableArray* _blocksOnLinkConnect;
	int _utunSocket;
	unsigned char _utunNexusUUID[16];
	channelRef _utunChannel;
	unsigned _utunChannelMaxSlotSize;
	channel_ring_descRef _utunChannelTxRing;
	channel_ring_descRef _utunChannelRxRing;
	unsigned _utunChannelRxCount;
	unsigned _utunChannelRxRingSize;
	double _utunChannelLastNoSlotTime;
	IDSDCI_OutgoingPacketList* urgentPackets;
	IDSDCI_OutgoingPacketList* regularPackets;
	char _shouldUseIPsecLink;
	NSObject*<OS_nw_service_connector> _serviceConnector;
	NSMutableDictionary* _serviceConnectionCache;
	unsigned char _selfInstanceID[16];
	unsigned char _instanceID[16];
	unsigned long long _capabilityFlags;
	unsigned short _serviceMinCompatibilityVersion;
	NSObject*<OS_nw_service_connector> _cloudServiceConnector;

}

@property (nonatomic,copy) NSString * cbuuid;                                                                //@synthesize cbuuid=_cbuuid - In the implementation block
@property (nonatomic,copy) NSString * deviceUniqueID;                                                        //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (nonatomic,copy) IDSSockAddrWrapper * remoteSA;                                                    //@synthesize remoteSA=_remoteSA - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * connectionsByID;                                 //@synthesize connectionsByID=_connectionsByID - In the implementation block
@property (nonatomic,retain) IDSUTunControlChannel * controlChannel;                                         //@synthesize controlChannel=_controlChannel - In the implementation block
@property (nonatomic,retain) NSData * controlChannelCachedSYN;                                               //@synthesize controlChannelCachedSYN=_controlChannelCachedSYN - In the implementation block
@property (nonatomic,retain) NSString * controlChannelVersion;                                               //@synthesize controlChannelVersion=_controlChannelVersion - In the implementation block
@property (nonatomic,retain) NSMutableSet * highPriorityConnectionSendingSet;                                //@synthesize highPriorityConnectionSendingSet=_highPriorityConnectionSendingSet - In the implementation block
@property (assign,nonatomic) char suspendTraffic;                                                            //@synthesize suspendTraffic=_suspendTraffic - In the implementation block
@property (assign,nonatomic) double suspendTrafficCheckTime;                                                 //@synthesize suspendTrafficCheckTime=_suspendTrafficCheckTime - In the implementation block
@property (assign,nonatomic) char linkLayerConnected;                                                        //@synthesize linkLayerConnected=_linkLayerConnected - In the implementation block
@property (assign,nonatomic) double linkLayerDisconnectTime;                                                 //@synthesize linkLayerDisconnectTime=_linkLayerDisconnectTime - In the implementation block
@property (assign,nonatomic) NEVirtualInterface_sRef vifRef;                                                 //@synthesize vifRef=_vifRef - In the implementation block
@property (nonatomic,copy) NSString * vifName;                                                               //@synthesize vifName=_vifName - In the implementation block
@property (nonatomic,copy) IDSSockAddrWrapper * localSA;                                                     //@synthesize localSA=_localSA - In the implementation block
@property (nonatomic,readonly) IDSPortMap* portMap; 
@property (nonatomic,readonly) SimpleUInt32ToObjectTable* connectionsTableByLocalRemotePortKey; 
@property (nonatomic,readonly) SimpleUInt32ToObjectTable* outgoingEncryptionTableBySSRC; 
@property (nonatomic,readonly) SimpleUInt32ToObjectTable* incomingEncryptionTableBySSRC; 
@property (assign,nonatomic) int utunSocket;                                                                 //@synthesize utunSocket=_utunSocket - In the implementation block
@property (assign,nonatomic) unsigned char* utunNexusUUID[16]; 
@property (assign,nonatomic) channelRef utunChannel;                                                         //@synthesize utunChannel=_utunChannel - In the implementation block
@property (assign,nonatomic) unsigned utunChannelMaxSlotSize;                                                //@synthesize utunChannelMaxSlotSize=_utunChannelMaxSlotSize - In the implementation block
@property (assign,nonatomic) channel_ring_descRef utunChannelTxRing;                                         //@synthesize utunChannelTxRing=_utunChannelTxRing - In the implementation block
@property (assign,nonatomic) channel_ring_descRef utunChannelRxRing;                                         //@synthesize utunChannelRxRing=_utunChannelRxRing - In the implementation block
@property (assign,nonatomic) unsigned utunChannelRxCount;                                                    //@synthesize utunChannelRxCount=_utunChannelRxCount - In the implementation block
@property (assign,nonatomic) unsigned utunChannelRxRingSize;                                                 //@synthesize utunChannelRxRingSize=_utunChannelRxRingSize - In the implementation block
@property (assign,nonatomic) double utunChannelLastNoSlotTime;                                               //@synthesize utunChannelLastNoSlotTime=_utunChannelLastNoSlotTime - In the implementation block
@property (nonatomic,readonly) unsigned char* selfInstanceID[16]; 
@property (assign,nonatomic) unsigned char* instanceID[16]; 
@property (assign,nonatomic) unsigned long long capabilityFlags;                                             //@synthesize capabilityFlags=_capabilityFlags - In the implementation block
@property (assign,nonatomic) unsigned short serviceMinCompatibilityVersion;                                  //@synthesize serviceMinCompatibilityVersion=_serviceMinCompatibilityVersion - In the implementation block
@property (assign,nonatomic) char shouldUseIPsecLink;                                                        //@synthesize shouldUseIPsecLink=_shouldUseIPsecLink - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_service_connector> serviceConnector;                            //@synthesize serviceConnector=_serviceConnector - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_service_connector> cloudServiceConnector;                       //@synthesize cloudServiceConnector=_cloudServiceConnector - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * serviceConnectionCache;                          //@synthesize serviceConnectionCache=_serviceConnectionCache - In the implementation block
-(void)dealloc;
-(id)description;
-(id)init;
-(void)invalidate;
-(void)setInstanceID:(unsigned char*)arg1 ;
-(unsigned char*)instanceID;
-(NSString *)cbuuid;
-(unsigned short)serviceMinCompatibilityVersion;
-(unsigned long long)capabilityFlags;
-(void)setCbuuid:(NSString *)arg1 ;
-(NSString *)deviceUniqueID;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
-(IDSUTunControlChannel *)controlChannel;
-(IDSPortMap*)portMap;
-(NSString *)controlChannelVersion;
-(void)setControlChannelVersion:(NSString *)arg1 ;
-(void)setCapabilityFlags:(unsigned long long)arg1 ;
-(void)setServiceMinCompatibilityVersion:(unsigned short)arg1 ;
-(SimpleUInt32ToObjectTable*)connectionsTableByLocalRemotePortKey;
-(SimpleUInt32ToObjectTable*)outgoingEncryptionTableBySSRC;
-(SimpleUInt32ToObjectTable*)incomingEncryptionTableBySSRC;
-(unsigned char*)utunNexusUUID;
-(void)setUtunNexusUUID:(unsigned char*)arg1 ;
-(unsigned char*)selfInstanceID;
-(unsigned short)nextAvailableLocalCID;
-(void)clearLocalCID:(unsigned short)arg1 ;
-(void)addBlocksOnLinkConnect:(/*^block*/id)arg1 ;
-(void)performBlocksOnLinkConnect;
-(void)cancelBlockOnLinkConnectWithID:(id)arg1 cancelSucceeded:(char*)arg2 ;
-(void)cancelBlocksOnLinkConnect;
-(IDSSockAddrWrapper *)remoteSA;
-(void)setRemoteSA:(IDSSockAddrWrapper *)arg1 ;
-(NSMutableDictionary *)connectionsByID;
-(void)setControlChannel:(IDSUTunControlChannel *)arg1 ;
-(NSData *)controlChannelCachedSYN;
-(void)setControlChannelCachedSYN:(NSData *)arg1 ;
-(NSMutableSet *)highPriorityConnectionSendingSet;
-(void)setHighPriorityConnectionSendingSet:(NSMutableSet *)arg1 ;
-(char)suspendTraffic;
-(void)setSuspendTraffic:(char)arg1 ;
-(double)suspendTrafficCheckTime;
-(void)setSuspendTrafficCheckTime:(double)arg1 ;
-(char)linkLayerConnected;
-(void)setLinkLayerConnected:(char)arg1 ;
-(double)linkLayerDisconnectTime;
-(void)setLinkLayerDisconnectTime:(double)arg1 ;
-(NEVirtualInterface_sRef)vifRef;
-(void)setVifRef:(NEVirtualInterface_sRef)arg1 ;
-(channelRef)utunChannel;
-(void)setUtunChannel:(channelRef)arg1 ;
-(unsigned)utunChannelMaxSlotSize;
-(void)setUtunChannelMaxSlotSize:(unsigned)arg1 ;
-(channel_ring_descRef)utunChannelTxRing;
-(void)setUtunChannelTxRing:(channel_ring_descRef)arg1 ;
-(channel_ring_descRef)utunChannelRxRing;
-(void)setUtunChannelRxRing:(channel_ring_descRef)arg1 ;
-(unsigned)utunChannelRxCount;
-(void)setUtunChannelRxCount:(unsigned)arg1 ;
-(unsigned)utunChannelRxRingSize;
-(void)setUtunChannelRxRingSize:(unsigned)arg1 ;
-(double)utunChannelLastNoSlotTime;
-(void)setUtunChannelLastNoSlotTime:(double)arg1 ;
-(NSString *)vifName;
-(void)setVifName:(NSString *)arg1 ;
-(IDSSockAddrWrapper *)localSA;
-(void)setLocalSA:(IDSSockAddrWrapper *)arg1 ;
-(int)utunSocket;
-(void)setUtunSocket:(int)arg1 ;
-(char)shouldUseIPsecLink;
-(void)setShouldUseIPsecLink:(char)arg1 ;
-(NSObject*<OS_nw_service_connector>)serviceConnector;
-(void)setServiceConnector:(NSObject*<OS_nw_service_connector>)arg1 ;
-(NSObject*<OS_nw_service_connector>)cloudServiceConnector;
-(void)setCloudServiceConnector:(NSObject*<OS_nw_service_connector>)arg1 ;
-(NSMutableDictionary *)serviceConnectionCache;
@end

