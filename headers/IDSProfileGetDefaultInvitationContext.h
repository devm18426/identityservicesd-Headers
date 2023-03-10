/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:47:59 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSProfileMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface IDSProfileGetDefaultInvitationContext : IDSProfileMessage <NSCopying> {

	char _responseValidated;
	NSString* _responseBasePhoneNumber;
	NSString* _responseRegionID;
	NSDictionary* _responseExtraInfo;

}

@property (copy) NSString * responseRegionID;                     //@synthesize responseRegionID=_responseRegionID - In the implementation block
@property (copy) NSString * responseBasePhoneNumber;              //@synthesize responseBasePhoneNumber=_responseBasePhoneNumber - In the implementation block
@property (copy) NSDictionary * responseExtraInfo;                //@synthesize responseExtraInfo=_responseExtraInfo - In the implementation block
@property (assign) char responseValidated;                        //@synthesize responseValidated=_responseValidated - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)messageBody;
-(id)requiredKeys;
-(double)anisetteHeadersTimeout;
-(id)bagKey;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSString *)responseBasePhoneNumber;
-(void)setResponseBasePhoneNumber:(NSString *)arg1 ;
-(NSString *)responseRegionID;
-(void)setResponseRegionID:(NSString *)arg1 ;
-(NSDictionary *)responseExtraInfo;
-(void)setResponseExtraInfo:(NSDictionary *)arg1 ;
-(char)responseValidated;
-(void)setResponseValidated:(char)arg1 ;
@end

