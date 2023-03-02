/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:47:59 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSEndpointResolverParameter.h>
#import <libobjc.A.dylib/IDSMadridEndpointFilterParameter.h>
#import <libobjc.A.dylib/IDSEncryptionParameter.h>
#import <libobjc.A.dylib/IDSMessageFactoryParameter.h>
#import <libobjc.A.dylib/IDSFanoutFactoryParameter.h>

@class NSArray, NSString, NSData, IDSRegistrationProperties, IDSPeerMessage, NSDictionary;

@interface IDSDeliveryPipelineParameter : NSObject <IDSEndpointResolverParameter, IDSMadridEndpointFilterParameter, IDSEncryptionParameter, IDSMessageFactoryParameter, IDSFanoutFactoryParameter> {

	char _alwaysSkipSelf;
	char _disallowQueryRefresh;
	char _sendOnePerToken;
	char _forceAttachmentMessage;
	char _forceOnePerFanout;
	char _wantsDeliveryStatus;
	char _wantsCertifiedDelivery;
	char _usedMMCS;
	NSArray* _uris;
	NSString* _fromID;
	NSString* _service;
	NSData* _fromIdentity;
	IDSRegistrationProperties* _registrationProperties;
	NSData* _dataToEncrypt;
	unsigned long long _encryptionType;
	unsigned long long _maxSize;
	IDSPeerMessage* _messageToSend;
	/*^block*/id _willSendBlock;
	NSString* _guid;
	NSArray* _endpoints;
	NSDictionary* _endpointsToEncryptedData;
	NSArray* _aggregatableMessages;
	NSArray* _aggregateMessages;

}

@property (nonatomic,retain) NSArray * uris;                                                  //@synthesize uris=_uris - In the implementation block
@property (nonatomic,retain) NSString * fromID;                                               //@synthesize fromID=_fromID - In the implementation block
@property (nonatomic,retain) NSString * service;                                              //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSData * fromIdentity;                                           //@synthesize fromIdentity=_fromIdentity - In the implementation block
@property (assign,nonatomic) char alwaysSkipSelf;                                             //@synthesize alwaysSkipSelf=_alwaysSkipSelf - In the implementation block
@property (assign,nonatomic) char disallowQueryRefresh;                                       //@synthesize disallowQueryRefresh=_disallowQueryRefresh - In the implementation block
@property (assign,nonatomic) char sendOnePerToken;                                            //@synthesize sendOnePerToken=_sendOnePerToken - In the implementation block
@property (nonatomic,retain) IDSRegistrationProperties * registrationProperties;              //@synthesize registrationProperties=_registrationProperties - In the implementation block
@property (nonatomic,retain) NSData * dataToEncrypt;                                          //@synthesize dataToEncrypt=_dataToEncrypt - In the implementation block
@property (assign,nonatomic) unsigned long long encryptionType;                               //@synthesize encryptionType=_encryptionType - In the implementation block
@property (assign,nonatomic) char forceAttachmentMessage;                                     //@synthesize forceAttachmentMessage=_forceAttachmentMessage - In the implementation block
@property (assign,nonatomic) char forceOnePerFanout;                                          //@synthesize forceOnePerFanout=_forceOnePerFanout - In the implementation block
@property (assign,nonatomic) unsigned long long maxSize;                                      //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,retain) IDSPeerMessage * messageToSend;                                  //@synthesize messageToSend=_messageToSend - In the implementation block
@property (assign,nonatomic) char wantsDeliveryStatus;                                        //@synthesize wantsDeliveryStatus=_wantsDeliveryStatus - In the implementation block
@property (assign,nonatomic) char wantsCertifiedDelivery;                                     //@synthesize wantsCertifiedDelivery=_wantsCertifiedDelivery - In the implementation block
@property (nonatomic,copy) id willSendBlock;                                                  //@synthesize willSendBlock=_willSendBlock - In the implementation block
@property (nonatomic,retain) NSString * guid;                                                 //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSArray * endpoints;                                             //@synthesize endpoints=_endpoints - In the implementation block
@property (nonatomic,retain) NSDictionary * endpointsToEncryptedData;                         //@synthesize endpointsToEncryptedData=_endpointsToEncryptedData - In the implementation block
@property (nonatomic,retain) NSArray * aggregatableMessages;                                  //@synthesize aggregatableMessages=_aggregatableMessages - In the implementation block
@property (assign,nonatomic) char usedMMCS;                                                   //@synthesize usedMMCS=_usedMMCS - In the implementation block
@property (nonatomic,retain) NSArray * aggregateMessages;                                     //@synthesize aggregateMessages=_aggregateMessages - In the implementation block
-(id)description;
-(unsigned long long)maxSize;
-(void)setMaxSize:(unsigned long long)arg1 ;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(NSArray *)endpoints;
-(void)setEndpoints:(NSArray *)arg1 ;
-(void)setDataToEncrypt:(NSData *)arg1 ;
-(void)setFromID:(NSString *)arg1 ;
-(void)setWantsDeliveryStatus:(char)arg1 ;
-(void)setWantsCertifiedDelivery:(char)arg1 ;
-(void)setAlwaysSkipSelf:(char)arg1 ;
-(NSString *)fromID;
-(NSString *)guid;
-(char)wantsDeliveryStatus;
-(char)wantsCertifiedDelivery;
-(char)sendOnePerToken;
-(void)setEncryptionType:(unsigned long long)arg1 ;
-(unsigned long long)encryptionType;
-(NSData *)dataToEncrypt;
-(char)alwaysSkipSelf;
-(void)setGuid:(NSString *)arg1 ;
-(char)usedMMCS;
-(NSArray *)uris;
-(void)setUris:(NSArray *)arg1 ;
-(IDSRegistrationProperties *)registrationProperties;
-(id)willSendBlock;
-(char)overrideSendOnePerTokenForService:(id)arg1 ;
-(NSData *)fromIdentity;
-(char)disallowQueryRefresh;
-(void)setEndpointsToEncryptedData:(NSDictionary *)arg1 ;
-(char)forceAttachmentMessage;
-(IDSPeerMessage *)messageToSend;
-(NSDictionary *)endpointsToEncryptedData;
-(void)setAggregatableMessages:(NSArray *)arg1 ;
-(void)setUsedMMCS:(char)arg1 ;
-(NSArray *)aggregatableMessages;
-(char)forceOnePerFanout;
-(void)setAggregateMessages:(NSArray *)arg1 ;
-(id)initWithInfo:(id)arg1 uris:(id)arg2 service:(id)arg3 maxSize:(unsigned long long)arg4 ;
-(void)setFromIdentity:(NSData *)arg1 ;
-(void)setDisallowQueryRefresh:(char)arg1 ;
-(void)setSendOnePerToken:(char)arg1 ;
-(void)setRegistrationProperties:(IDSRegistrationProperties *)arg1 ;
-(void)setForceAttachmentMessage:(char)arg1 ;
-(void)setForceOnePerFanout:(char)arg1 ;
-(void)setMessageToSend:(IDSPeerMessage *)arg1 ;
-(void)setWillSendBlock:(id)arg1 ;
-(NSArray *)aggregateMessages;
@end

