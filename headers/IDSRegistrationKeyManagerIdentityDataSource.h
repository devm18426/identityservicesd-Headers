/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:47:57 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSKeychainWrapper;

@interface IDSRegistrationKeyManagerIdentityDataSource : NSObject {

	IDSKeychainWrapper* _keychainWrapper;

}

@property (nonatomic,readonly) IDSKeychainWrapper * keychainWrapper;              //@synthesize keychainWrapper=_keychainWrapper - In the implementation block
+(id)storageItemNameForLegacyIdentityIdentifier:(long long)arg1 ;
+(id)containerStorageItemNameForContainerIdentityIdentfier:(long long)arg1 ;
+(id)legacyStorageItemNameForContainerIdentityIdentifier:(long long)arg1 ;
-(unsigned)ngmVersion;
-(IDSKeychainWrapper *)keychainWrapper;
-(id)_retrying_loadLegacyIdentityWithIdentifier:(id)arg1 serializationDidChange:(char*)arg2 deserializationDidFail:(char*)arg3 error:(id*)arg4 ;
-(id)_loadContainerWithIdentifier:(id)arg1 serializationDidChage:(char*)arg2 deserializationDidFail:(char*)arg3 needsEncryptionIdentityRoll:(char*)arg4 error:(id*)arg5 ;
-(char)saveIdentityContainer:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id*)arg4 ;
-(id)_loadLegacyIdentityWithIdentifier:(id)arg1 serializationDidChange:(char*)arg2 deserializationDidFail:(char*)arg3 error:(id*)arg4 ;
-(id)initWithKeychainWrapper:(id)arg1 ;
-(id)generateLegacyIdentityWithIdentifier:(long long)arg1 dataProtectionClass:(long long)arg2 error:(id*)arg3 ;
-(char)saveLegacyIdentity:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id*)arg4 ;
-(id)loadLegacyIdentityWithIdentifier:(long long)arg1 serializationDidChange:(char*)arg2 error:(id*)arg3 ;
-(char)removeLegacyIdentity:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id*)arg4 ;
-(id)generateIdentityContainerWithIdentifier:(long long)arg1 existingLegacyIdentity:(id)arg2 existingNGMIdentity:(id)arg3 dataProtectionClass:(long long)arg4 nonLegacyError:(id*)arg5 error:(id*)arg6 ;
-(id)loadIdentityContainerWithIdentifier:(long long)arg1 withLegacyFallback:(char)arg2 serializationDidChange:(char*)arg3 deserializationDidFail:(char*)arg4 needsEncryptionIdentityRoll:(char*)arg5 nonLegacyError:(id*)arg6 error:(id*)arg7 ;
-(char)removeIdentityContainer:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id*)arg4 ;
-(id)dataRepresentationForNGMVersion:(unsigned)arg1 ;
-(unsigned)ngmVersionFromDataRepresentation:(id)arg1 ;
@end

