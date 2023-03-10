/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:12 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSPhoneNumberIdentification : NSObject {

	NSString* _phoneNumber;
	NSString* _phoneToken;

}

@property (nonatomic,readonly) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * phoneToken;               //@synthesize phoneToken=_phoneToken - In the implementation block
-(NSString *)phoneNumber;
-(id)initWithPhoneNumber:(id)arg1 phoneToken:(id)arg2 ;
-(NSString *)phoneToken;
@end

