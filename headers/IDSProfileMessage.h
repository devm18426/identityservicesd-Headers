/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:03 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface IDSProfileMessage : IDSBaseMessage <NSCopying> {

	NSData* _pushCert;
	SecKeyRef _pushKey;
	SecKeyRef _pushPublicKey;
	NSData* _pushToken;
	NSString* _authToken;
	NSString* _profileID;

}

@property (nonatomic,copy) NSString * profileID;                    //@synthesize profileID=_profileID - In the implementation block
@property (nonatomic,copy) NSString * authToken;                    //@synthesize authToken=_authToken - In the implementation block
@property (assign,nonatomic) SecKeyRef pushPrivateKey;              //@synthesize pushKey=_pushKey - In the implementation block
@property (assign,nonatomic) SecKeyRef pushPublicKey;               //@synthesize pushPublicKey=_pushPublicKey - In the implementation block
@property (nonatomic,copy) NSData * pushCertificate;                //@synthesize pushCert=_pushCert - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                      //@synthesize pushToken=_pushToken - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)command;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSData *)pushToken;
-(NSString *)profileID;
-(long long)responseCommand;
-(char)wantsHTTPHeaders;
-(char)wantsBinaryPush;
-(char)wantsCompressedBody;
-(char)wantsBagKey;
-(SecKeyRef)pushPrivateKey;
-(void)setPushPrivateKey:(SecKeyRef)arg1 ;
-(SecKeyRef)pushPublicKey;
-(void)setPushPublicKey:(SecKeyRef)arg1 ;
-(NSData *)pushCertificate;
-(void)setPushCertificate:(NSData *)arg1 ;
-(void)setPushToken:(NSData *)arg1 ;
-(char)hasRequiredKeys:(id*)arg1 ;
-(id)additionalMessageHeaders;
-(id)additionalMessageHeadersForOutgoingPush;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setProfileID:(NSString *)arg1 ;
@end

