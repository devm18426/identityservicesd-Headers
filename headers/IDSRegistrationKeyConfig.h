/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:47:58 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class IDSMPFullDeviceIdentityContainer, IDSNGMKeyRollingTicket, NSString, IDSMPFullLegacyIdentity, IDSAccountSigningKeyReference;

@interface IDSRegistrationKeyConfig : NSObject {

	IDSMPFullDeviceIdentityContainer* _registeredIdentityContainer;
	IDSMPFullDeviceIdentityContainer* _previousRegisteredIdentityContainer;
	IDSMPFullDeviceIdentityContainer* _unregisteredIdentityContainer;
	IDSNGMKeyRollingTicket* _unappliedRollingTicket;
	NSString* _buildOfIdentityGeneration;
	NSString* _buildOfUnregisteredIdentityGeneration;
	IDSMPFullLegacyIdentity* _identityClassA;
	IDSMPFullLegacyIdentity* _unSavedidentityClassA;
	IDSMPFullLegacyIdentity* _identityClassC;
	IDSMPFullLegacyIdentity* _unSavedidentityClassC;
	IDSMPFullLegacyIdentity* _identityClassD;
	IDSMPFullLegacyIdentity* _unSavedidentityClassD;
	IDSAccountSigningKeyReference* _accountSigningKeyReference;
	_SecKey* _privateKey;
	_SecKey* _publicKey;
	NSString* _signature;
	char _isMigratedSignature;

}

@property (nonatomic,retain) IDSMPFullDeviceIdentityContainer * registeredIdentityContainer;                      //@synthesize registeredIdentityContainer=_registeredIdentityContainer - In the implementation block
@property (nonatomic,retain) IDSMPFullDeviceIdentityContainer * previousRegisteredIdentityContainer;              //@synthesize previousRegisteredIdentityContainer=_previousRegisteredIdentityContainer - In the implementation block
@property (nonatomic,retain) IDSMPFullDeviceIdentityContainer * unregisteredIdentityContainer;                    //@synthesize unregisteredIdentityContainer=_unregisteredIdentityContainer - In the implementation block
@property (nonatomic,retain) IDSNGMKeyRollingTicket * unappliedRollingTicket;                                     //@synthesize unappliedRollingTicket=_unappliedRollingTicket - In the implementation block
@property (nonatomic,retain) NSString * buildOfIdentityGeneration;                                                //@synthesize buildOfIdentityGeneration=_buildOfIdentityGeneration - In the implementation block
@property (nonatomic,retain) NSString * buildOfUnregisteredIdentityGeneration;                                    //@synthesize buildOfUnregisteredIdentityGeneration=_buildOfUnregisteredIdentityGeneration - In the implementation block
@property (nonatomic,retain) IDSMPFullLegacyIdentity * identityClassA;                                            //@synthesize identityClassA=_identityClassA - In the implementation block
@property (nonatomic,retain) IDSMPFullLegacyIdentity * unSavedidentityClassA;                                     //@synthesize unSavedidentityClassA=_unSavedidentityClassA - In the implementation block
@property (nonatomic,retain) IDSMPFullLegacyIdentity * identityClassC;                                            //@synthesize identityClassC=_identityClassC - In the implementation block
@property (nonatomic,retain) IDSMPFullLegacyIdentity * unSavedidentityClassC;                                     //@synthesize unSavedidentityClassC=_unSavedidentityClassC - In the implementation block
@property (nonatomic,retain) IDSMPFullLegacyIdentity * identityClassD;                                            //@synthesize identityClassD=_identityClassD - In the implementation block
@property (nonatomic,retain) IDSMPFullLegacyIdentity * unSavedidentityClassD;                                     //@synthesize unSavedidentityClassD=_unSavedidentityClassD - In the implementation block
@property (nonatomic,retain) IDSAccountSigningKeyReference * accountSigningKeyReference;                          //@synthesize accountSigningKeyReference=_accountSigningKeyReference - In the implementation block
@property (assign,nonatomic) _SecKey* privateKey;                                                                 //@synthesize privateKey=_privateKey - In the implementation block
@property (assign,nonatomic) _SecKey* publicKey;                                                                  //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,retain) NSString * signature;                                                                //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) char isMigratedSignature;                                                            //@synthesize isMigratedSignature=_isMigratedSignature - In the implementation block
-(void)dealloc;
-(NSString *)signature;
-(_SecKey*)publicKey;
-(void)setSignature:(NSString *)arg1 ;
-(_SecKey*)privateKey;
-(void)setPublicKey:(_SecKey*)arg1 ;
-(void)setPrivateKey:(_SecKey*)arg1 ;
-(IDSMPFullDeviceIdentityContainer *)registeredIdentityContainer;
-(IDSMPFullDeviceIdentityContainer *)unregisteredIdentityContainer;
-(IDSMPFullDeviceIdentityContainer *)previousRegisteredIdentityContainer;
-(NSString *)buildOfIdentityGeneration;
-(NSString *)buildOfUnregisteredIdentityGeneration;
-(void)setRegisteredIdentityContainer:(IDSMPFullDeviceIdentityContainer *)arg1 ;
-(void)setUnregisteredIdentityContainer:(IDSMPFullDeviceIdentityContainer *)arg1 ;
-(void)setPreviousRegisteredIdentityContainer:(IDSMPFullDeviceIdentityContainer *)arg1 ;
-(IDSMPFullLegacyIdentity *)identityClassA;
-(void)setIdentityClassA:(IDSMPFullLegacyIdentity *)arg1 ;
-(IDSMPFullLegacyIdentity *)identityClassC;
-(void)setIdentityClassC:(IDSMPFullLegacyIdentity *)arg1 ;
-(IDSMPFullLegacyIdentity *)identityClassD;
-(void)setIdentityClassD:(IDSMPFullLegacyIdentity *)arg1 ;
-(void)setIsMigratedSignature:(char)arg1 ;
-(char)isMigratedSignature;
-(void)setBuildOfIdentityGeneration:(NSString *)arg1 ;
-(void)setAccountSigningKeyReference:(IDSAccountSigningKeyReference *)arg1 ;
-(IDSAccountSigningKeyReference *)accountSigningKeyReference;
-(void)setBuildOfUnregisteredIdentityGeneration:(NSString *)arg1 ;
-(IDSNGMKeyRollingTicket *)unappliedRollingTicket;
-(void)setUnappliedRollingTicket:(IDSNGMKeyRollingTicket *)arg1 ;
-(IDSMPFullLegacyIdentity *)unSavedidentityClassA;
-(void)setUnSavedidentityClassA:(IDSMPFullLegacyIdentity *)arg1 ;
-(IDSMPFullLegacyIdentity *)unSavedidentityClassC;
-(void)setUnSavedidentityClassC:(IDSMPFullLegacyIdentity *)arg1 ;
-(IDSMPFullLegacyIdentity *)unSavedidentityClassD;
-(void)setUnSavedidentityClassD:(IDSMPFullLegacyIdentity *)arg1 ;
@end

