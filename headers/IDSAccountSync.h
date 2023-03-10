/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:12 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, IDSPairingManager, IDSDServiceController, IDSDAccountController, IDSPushHandler, IMUserDefaults;

@interface IDSAccountSync : NSObject {

	NSMutableDictionary* _currentInFlightSyncAttempts;
	IDSPairingManager* _pairingManager;
	IDSDServiceController* _serviceController;
	IDSDAccountController* _accountController;
	IDSPushHandler* _pushHandler;
	IMUserDefaults* _userDefaults;

}

@property (nonatomic,retain) NSMutableDictionary * currentInFlightSyncAttempts;              //@synthesize currentInFlightSyncAttempts=_currentInFlightSyncAttempts - In the implementation block
@property (nonatomic,retain) IDSPairingManager * pairingManager;                             //@synthesize pairingManager=_pairingManager - In the implementation block
@property (nonatomic,retain) IDSDServiceController * serviceController;                      //@synthesize serviceController=_serviceController - In the implementation block
@property (nonatomic,retain) IDSDAccountController * accountController;                      //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) IDSPushHandler * pushHandler;                                   //@synthesize pushHandler=_pushHandler - In the implementation block
@property (nonatomic,retain) IMUserDefaults * userDefaults;                                  //@synthesize userDefaults=_userDefaults - In the implementation block
+(id)sharedInstance;
+(double)retryTimeForKey:(id)arg1 attempts:(long long)arg2 ;
+(id)usefulLoggingDescriptionAccountInfos:(id)arg1 ;
-(id)init;
-(IMUserDefaults *)userDefaults;
-(void)setUserDefaults:(IMUserDefaults *)arg1 ;
-(IDSPairingManager *)pairingManager;
-(IDSDServiceController *)serviceController;
-(IDSDAccountController *)accountController;
-(void)setAccountController:(IDSDAccountController *)arg1 ;
-(IDSPushHandler *)pushHandler;
-(void)setPushHandler:(IDSPushHandler *)arg1 ;
-(void)setServiceController:(IDSDServiceController *)arg1 ;
-(void)setPairingManager:(IDSPairingManager *)arg1 ;
-(void)resetAndResynchronizeEverything;
-(NSMutableDictionary *)currentInFlightSyncAttempts;
-(void)saveTracking;
-(id)_constructAccountInfo:(id)arg1 ;
-(id)_sendAccountSyncMessage:(id)arg1 withPersistentKey:(id)arg2 ;
-(void)synchronizeAccountsWithRemoteInfo:(id)arg1 service:(id)arg2 ;
-(void)_updatePreferredAccountWithAccountInfo:(id)arg1 withAccountSyncCommand:(unsigned)arg2 ;
-(void)_updateTinkerDeviceWithURIs:(id)arg1 pushToken:(id)arg2 ;
-(void)_registerAccountsWithRemoteInfo:(id)arg1 ;
-(id)initWithPairingManager:(id)arg1 serviceController:(id)arg2 accountController:(id)arg3 pushHandler:(id)arg4 userDefaults:(id)arg5 remoteCredential:(id)arg6 ;
-(void)stopAnyUnfinishedSynchronization;
-(void)kickAnyUnfinishedSynchronization;
-(void)_startRetryForKey:(id)arg1 withAction:(/*^block*/id)arg2 ;
-(void)_stopAllPendingActions;
-(void)noteShouldSynchronizeTinkerDeviceInfo;
-(void)noteShouldSynchronizeAllServices;
-(void)noteShouldSynchronizePreferredAccount;
-(void)noteShouldFetchRemoteAccountInfoForAllServices;
-(void)_noteShouldSynchronizeTinkerDeviceInfo;
-(void)_noteShouldSynchronizeServices:(id)arg1 ;
-(id)constructRAResponseDictionary:(id)arg1 ;
-(void)_syncTinkerDeviceInfo;
-(void)incomingSyncMessage:(id)arg1 ;
-(void)setCurrentInFlightSyncAttempts:(NSMutableDictionary *)arg1 ;
@end

