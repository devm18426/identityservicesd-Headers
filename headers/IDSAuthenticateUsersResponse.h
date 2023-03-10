/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:04 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface IDSAuthenticateUsersResponse : NSObject {

	NSString* _userID;
	long long _responseCode;
	NSData* _cert;

}

@property (nonatomic,retain) NSString * userID;                   //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) long long responseCode;              //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,retain) NSData * cert;                       //@synthesize cert=_cert - In the implementation block
-(id)description;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(long long)responseCode;
-(void)setResponseCode:(long long)arg1 ;
-(NSData *)cert;
-(void)setCert:(NSData *)arg1 ;
@end

