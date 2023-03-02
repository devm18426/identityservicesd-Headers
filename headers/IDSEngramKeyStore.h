/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:47:59 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSCloudKitContainer, CUTPromiseSeal, NSHashTable, NSData, IDSKeychainWrapper;

@interface IDSEngramKeyStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IDSCloudKitContainer* _ckContainer;
	CUTPromiseSeal* _seal;
	NSHashTable* _listeners;
	NSData* _deviceKey;
	IDSKeychainWrapper* _keychainWrapper;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CUTPromiseSeal * seal;                             //@synthesize seal=_seal - In the implementation block
@property (nonatomic,readonly) IDSCloudKitContainer * ckContainer;              //@synthesize ckContainer=_ckContainer - In the implementation block
@property (nonatomic,retain) IDSKeychainWrapper * keychainWrapper;              //@synthesize keychainWrapper=_keychainWrapper - In the implementation block
@property (nonatomic,retain) NSHashTable * listeners;                           //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,readonly) NSData * deviceKey;                              //@synthesize deviceKey=_deviceKey - In the implementation block
+(id)_keychainIdentifier;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)isEngramEnabled;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(NSHashTable *)listeners;
-(void)setListeners:(NSHashTable *)arg1 ;
-(void)setSeal:(CUTPromiseSeal *)arg1 ;
-(CUTPromiseSeal *)seal;
-(NSData *)deviceKey;
-(IDSCloudKitContainer *)ckContainer;
-(IDSKeychainWrapper *)keychainWrapper;
-(void)setKeychainWrapper:(IDSKeychainWrapper *)arg1 ;
-(id)accountIdentityElector;
-(void)existingAccountIdentityClusterWithCompletion:(/*^block*/id)arg1 ;
-(void)accountIdentityClusterForRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(id)rollFullDeviceIdentityWithCluster:(id)arg1 error:(id*)arg2 ;
-(void)existingFullDeviceIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)rollAccountIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)notifyListenersEngramKeyStoreDidUpdateIdentities;
@end
