/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:08 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/IDSUser.h>

@class NSDate, IDSPhoneUser, NSString;

@interface IDSTemporaryPhoneUser : NSObject <NSCopying, IDSUser> {

	char _hasBeenProvisioned;
	char _finishedRegistration;
	char _hasNotifiedSuccess;
	NSDate* _expirationDate;
	IDSPhoneUser* _phoneUser;

}

@property (nonatomic,retain) IDSPhoneUser * phoneUser;               //@synthesize phoneUser=_phoneUser - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) char hasBeenProvisioned;                //@synthesize hasBeenProvisioned=_hasBeenProvisioned - In the implementation block
@property (assign,nonatomic) char finishedRegistration;              //@synthesize finishedRegistration=_finishedRegistration - In the implementation block
@property (assign,nonatomic) char hasNotifiedSuccess;                //@synthesize hasNotifiedSuccess=_hasNotifiedSuccess - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * networkCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(id)uniqueIdentifier;
-(NSString *)phoneNumber;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(char)isEqualToUser:(id)arg1 ;
-(long long)realm;
-(id)storageIdentifier;
-(id)unprefixedIdentifier;
-(id)temporaryPhoneUserWithUpdatedExpirationDate:(id)arg1 ;
-(char)finishedRegistration;
-(id)temporaryPhoneUserWithFinishedRegistration;
-(char)hasNotifiedSuccess;
-(char)hasBeenProvisioned;
-(id)temporaryPhoneUserWithNotifiedSuccess;
-(id)realmPrefixedIdentifier;
-(IDSPhoneUser *)phoneUser;
-(NSString *)networkCode;
-(char)shouldReplace:(id)arg1 ;
-(char)isIdenticalToUser:(id)arg1 ;
-(id)initWithPhoneUser:(id)arg1 expirationDate:(id)arg2 finishedRegistration:(char)arg3 ;
-(void)setHasBeenProvisioned:(char)arg1 ;
-(void)setFinishedRegistration:(char)arg1 ;
-(void)setHasNotifiedSuccess:(char)arg1 ;
-(char)isEqualToTemporaryPhoneUser:(id)arg1 ;
-(id)initWithPhoneUser:(id)arg1 ;
-(void)setPhoneUser:(IDSPhoneUser *)arg1 ;
@end

