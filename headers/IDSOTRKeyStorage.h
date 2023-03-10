/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:11 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRecursiveLock, NSMutableDictionary, IMTimer;

@interface IDSOTRKeyStorage : NSObject {

	NSRecursiveLock* _lock;
	NSMutableDictionary* _sessionKeyStorage;
	IMTimer* _purgeTimer;
	IMTimer* _saveTimer;
	/*^block*/id _saveCancelBlock;
	/*^block*/id _saveEnqueueBlock;
	/*^block*/id _purgeCancelBlock;
	/*^block*/id _purgeEnqueueBlock;
	char _isClassDStoreAvailable;
	char _isClassCStoreAvailable;
	char _isClassAStoreAvailable;
	char _changedSinceLastSave;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidLeaveDataProtectionLock;
-(void)systemDidEnterDataProtectionLock;
-(id)_objectForKey:(id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_save;
-(void)_removeObjectForKey:(id)arg1 ;
-(void)_daemonWillShutdown:(id)arg1 ;
-(void)_loadIfNeeded;
-(char)_isUnderFirstDataProtectionLock;
-(void)removeSessionKeyForAllTokenFromMainQueue;
-(void)loadStoreForDataProtectionClass:(unsigned)arg1 ;
-(void)_saveNow;
-(char)__saveStoreForDataProtectionClass:(unsigned)arg1 ;
-(char)isUnderLock;
-(void)_purgeMap;
-(void)removeSessionKeyForToken:(id)arg1 ;
-(void)_setSaveTimer;
-(char)isSessionStoreAvailableForDataProtectionClass:(unsigned)arg1 ;
-(id)sessionKeyForToken:(id)arg1 ;
-(void)storeSessionKey:(id)arg1 token:(id)arg2 ;
@end

