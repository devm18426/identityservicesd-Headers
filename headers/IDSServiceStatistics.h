/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:03 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSServiceStatistics : NSObject {

	unsigned long long _packetsSent;
	unsigned long long _packetsReceived;
	unsigned long long _bytesSent;
	unsigned long long _bytesReceived;

}

@property (assign,nonatomic) unsigned long long packetsSent;                  //@synthesize packetsSent=_packetsSent - In the implementation block
@property (assign,nonatomic) unsigned long long packetsReceived;              //@synthesize packetsReceived=_packetsReceived - In the implementation block
@property (assign,nonatomic) unsigned long long bytesSent;                    //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) unsigned long long bytesReceived;                //@synthesize bytesReceived=_bytesReceived - In the implementation block
-(id)description;
-(unsigned long long)bytesSent;
-(void)setBytesSent:(unsigned long long)arg1 ;
-(unsigned long long)packetsSent;
-(unsigned long long)bytesReceived;
-(unsigned long long)packetsReceived;
-(void)setPacketsSent:(unsigned long long)arg1 ;
-(void)setBytesReceived:(unsigned long long)arg1 ;
-(void)setPacketsReceived:(unsigned long long)arg1 ;
@end
