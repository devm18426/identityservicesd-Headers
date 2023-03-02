/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:16 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface IDSGetSIMAuthTokenMessage : FTIDSMessage <NSCopying> {

	NSString* _protocolVersion;
	NSString* _hardwareVersion;
	NSString* _osVersion;
	NSString* _softwareVersion;
	NSString* _carrierNonce;
	NSString* _IMEI;
	NSNumber* _responseStatus;
	NSString* _responseCarrierToken;
	NSString* _responseMessage;

}

@property (nonatomic,copy) NSString * protocolVersion;                   //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,copy) NSString * hardwareVersion;                   //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,copy) NSString * osVersion;                         //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy) NSString * softwareVersion;                   //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (nonatomic,copy) NSString * carrierNonce;                      //@synthesize carrierNonce=_carrierNonce - In the implementation block
@property (nonatomic,copy) NSString * IMEI;                              //@synthesize IMEI=_IMEI - In the implementation block
@property (nonatomic,copy) NSNumber * responseStatus;                    //@synthesize responseStatus=_responseStatus - In the implementation block
@property (nonatomic,copy) NSString * responseCarrierToken;              //@synthesize responseCarrierToken=_responseCarrierToken - In the implementation block
@property (nonatomic,copy) NSString * responseMessage;                   //@synthesize responseMessage=_responseMessage - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)messageBody;
-(NSString *)hardwareVersion;
-(NSString *)osVersion;
-(NSString *)IMEI;
-(NSString *)carrierNonce;
-(id)requiredKeys;
-(NSString *)protocolVersion;
-(char)isMultipleAuthCertCapable;
-(id)bagKey;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setIMEI:(NSString *)arg1 ;
-(void)setHardwareVersion:(NSString *)arg1 ;
-(void)setResponseMessage:(NSString *)arg1 ;
-(NSNumber *)responseStatus;
-(void)setResponseStatus:(NSNumber *)arg1 ;
-(NSString *)softwareVersion;
-(void)setSoftwareVersion:(NSString *)arg1 ;
-(NSString *)responseMessage;
-(void)setCarrierNonce:(NSString *)arg1 ;
-(NSString *)responseCarrierToken;
-(void)setResponseCarrierToken:(NSString *)arg1 ;
@end

