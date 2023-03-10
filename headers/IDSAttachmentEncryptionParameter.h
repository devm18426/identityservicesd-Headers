/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:03 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSEncryptionParameter.h>

@class NSString, NSData, NSArray, NSDictionary;

@interface IDSAttachmentEncryptionParameter : NSObject <IDSEncryptionParameter> {

	unsigned long long _encryptionType;
	NSString* _guid;
	NSData* _dataToEncrypt;
	NSArray* _endpoints;
	NSDictionary* _endpointsToEncryptedData;

}

@property (assign,nonatomic) unsigned long long encryptionType;                    //@synthesize encryptionType=_encryptionType - In the implementation block
@property (nonatomic,retain) NSString * guid;                                      //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSData * dataToEncrypt;                               //@synthesize dataToEncrypt=_dataToEncrypt - In the implementation block
@property (nonatomic,retain) NSArray * endpoints;                                  //@synthesize endpoints=_endpoints - In the implementation block
@property (nonatomic,retain) NSDictionary * endpointsToEncryptedData;              //@synthesize endpointsToEncryptedData=_endpointsToEncryptedData - In the implementation block
-(NSArray *)endpoints;
-(void)setEndpoints:(NSArray *)arg1 ;
-(void)setDataToEncrypt:(NSData *)arg1 ;
-(NSString *)guid;
-(void)setEncryptionType:(unsigned long long)arg1 ;
-(unsigned long long)encryptionType;
-(NSData *)dataToEncrypt;
-(void)setGuid:(NSString *)arg1 ;
-(void)setEndpointsToEncryptedData:(NSDictionary *)arg1 ;
-(NSDictionary *)endpointsToEncryptedData;
@end

