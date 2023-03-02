/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:06 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSMPFullDeviceIdentityContainerEncrypter.h>

@protocol IDSMPFullDeviceIdentityContainerEncrypter <NSObject>
@required
-(id)encryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usingIdentifier:(id)arg3 error:(id*)arg4;
-(id)encryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usedIdentifier:(id*)arg3 error:(id*)arg4;
-(id)decryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 error:(id*)arg3 usingIdentifier:(id)arg4 isRetry:(char)arg5;
-(id)decryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usingIdentifier:(id)arg3 isRetry:(char)arg4;

@end


@class IDSRegistrationKeyManager, NSString;

@interface IDSMPFullDeviceIdentityContainerEncrypter : NSObject <IDSMPFullDeviceIdentityContainerEncrypter> {

	IDSRegistrationKeyManager* _registrationKeyManager;

}

@property (nonatomic,readonly) IDSRegistrationKeyManager * registrationKeyManager;              //@synthesize registrationKeyManager=_registrationKeyManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)encryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usingIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)encryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usedIdentifier:(id*)arg3 error:(id*)arg4 ;
-(id)decryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 error:(id*)arg3 usingIdentifier:(id)arg4 isRetry:(char)arg5 ;
-(id)decryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usingIdentifier:(id)arg3 isRetry:(char)arg4 ;
-(id)initWithRegistrationKeyManager:(id)arg1 ;
-(IDSRegistrationKeyManager *)registrationKeyManager;
-(id)_validateParametersWithFullIdentityToUse:(id)arg1 fullIdentity:(id)arg2 publicIdentity:(id)arg3 inputData:(id)arg4 identifier:(id)arg5 forDecryption:(char)arg6 ;
@end

