/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:13 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_channel;
#import <identityservicesd/identityservicesd-Structs.h>
@class NSUUID, NWPath, NSString, NSObject, NSMutableArray;

@interface IDSClientChannel : NSObject {

	char _hasMetadata;
	char _closed;
	char _clientReady;
	NSUUID* _uuid;
	NWPath* _path;
	unsigned char _nexusInstance[16];
	long long _transportType;
	NSString* _destination;
	NSObject*<OS_nw_channel> _nwChannel;
	/*^block*/id _connectHandler;
	nw_protocol* _clientProtocol;
	channelRef _osChannel;
	channel_attrRef _osChannelAttributes;
	channel_ring_descRef _osChannelTXRing;
	unsigned char _flowID[16];
	char _osChannelNeedSync;
	/*^block*/id _writeHandler;
	char _verboseFunctionalLogging;
	char _verbosePerformanceLogging;
	int _excessiveCachingReportCounter;
	int _excessiveCachingCount;
	/*^block*/id _readHandler;
	/*^block*/id _packetBufferHandler;
	NSMutableArray* _cachedDataForClient;

}

@property (nonatomic,readonly) long long transportType;                         //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) char clientReady;                                  //@synthesize clientReady=_clientReady - In the implementation block
@property (nonatomic,readonly) char closed;                                     //@synthesize closed=_closed - In the implementation block
@property (assign,nonatomic) char verboseFunctionalLogging;                     //@synthesize verboseFunctionalLogging=_verboseFunctionalLogging - In the implementation block
@property (assign,nonatomic) char verbosePerformanceLogging;                    //@synthesize verbosePerformanceLogging=_verbosePerformanceLogging - In the implementation block
@property (setter=setUUID:,nonatomic,copy) NSUUID * uuid;                       //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) id readHandler;                                      //@synthesize readHandler=_readHandler - In the implementation block
@property (nonatomic,copy) id writeHandler;                                     //@synthesize writeHandler=_writeHandler - In the implementation block
@property (nonatomic,copy) id packetBufferHandler;                              //@synthesize packetBufferHandler=_packetBufferHandler - In the implementation block
@property (nonatomic,readonly) char hasMetadata;                                //@synthesize hasMetadata=_hasMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedDataForClient;              //@synthesize cachedDataForClient=_cachedDataForClient - In the implementation block
@property (assign,nonatomic) int excessiveCachingReportCounter;                 //@synthesize excessiveCachingReportCounter=_excessiveCachingReportCounter - In the implementation block
@property (assign,nonatomic) int excessiveCachingCount;                         //@synthesize excessiveCachingCount=_excessiveCachingCount - In the implementation block
@property (nonatomic,readonly) NSString * destination;                          //@synthesize destination=_destination - In the implementation block
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSUUID *)uuid;
-(char)closed;
-(NSString *)destination;
-(long long)transportType;
-(void)setUUID:(id)arg1 ;
-(id)initWithDestination:(id)arg1 ;
-(void)osChannelInfoLog;
-(void)setReadHandler:(id)arg1 ;
-(char)hasMetadata;
-(char)writable;
-(id)readHandler;
-(id)writeHandler;
-(void)setWriteHandler:(id)arg1 ;
-(void)resumeRead;
-(void)suspendRead;
-(void)setVerboseFunctionalLogging:(char)arg1 ;
-(void)setVerbosePerformanceLogging:(char)arg1 ;
-(NSMutableArray *)cachedDataForClient;
-(void)setCachedDataForClient:(NSMutableArray *)arg1 ;
-(char)writePacketBuffer:(SCD_Struct_ID13*)arg1 metaData:(const void*)arg2 metadataSize:(unsigned)arg3 moreComing:(char)arg4 ;
-(int)excessiveCachingCount;
-(int)excessiveCachingReportCounter;
-(void)setExcessiveCachingReportCounter:(int)arg1 ;
-(void)setExcessiveCachingCount:(int)arg1 ;
-(void)setClientReady:(char)arg1 ;
-(char)connectWithTransportThread;
-(void)setPacketBufferHandler:(id)arg1 ;
-(char)writeBuffer:(char*)arg1 bufferSize:(unsigned)arg2 metaData:(const void*)arg3 metadataSize:(unsigned)arg4 moreComing:(char)arg5 ;
-(char)readDatagram:(const void*)arg1 datagramSize:(unsigned*)arg2 metaData:(const void*)arg3 metadataSize:(unsigned*)arg4 ;
-(char)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 metaData:(const void*)arg3 metadataSize:(unsigned)arg4 ;
-(void)connectWithProtocoHandler;
-(char)clientReady;
-(char)verboseFunctionalLogging;
-(char)verbosePerformanceLogging;
-(id)packetBufferHandler;
@end
