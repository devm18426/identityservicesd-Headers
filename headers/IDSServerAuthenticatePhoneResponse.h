/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:04 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSPhoneUser, IDSAuthenticationCertificate;

@interface IDSServerAuthenticatePhoneResponse : NSObject {

	long long _status;
	IDSPhoneUser* _user;
	IDSAuthenticationCertificate* _authenticationCertificate;

}

@property (nonatomic,readonly) long long status;                                                      //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) IDSPhoneUser * user;                                                   //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) IDSAuthenticationCertificate * authenticationCertificate;              //@synthesize authenticationCertificate=_authenticationCertificate - In the implementation block
-(IDSPhoneUser *)user;
-(long long)status;
-(IDSAuthenticationCertificate *)authenticationCertificate;
-(id)initWithStatus:(long long)arg1 user:(id)arg2 authenticationCertificate:(id)arg3 ;
@end

