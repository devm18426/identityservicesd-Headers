/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:04 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class IMTimer, NSMutableDictionary;

@interface IDSDeviceHeartbeatCenter : NSObject <IMSystemMonitorListener> {

	IMTimer* _getDependentHeartbeatTimer;
	NSMutableDictionary* _usersToHeartbeatDatesMap;
	char _isSetup;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)printInfo;
-(void)_heartBeat;
-(void)systemDidWake;
-(void)setup;
-(void)invalidateTimer;
-(void)accountsChanged;
-(char)_fetchExpiryDatesIfNecessary;
-(void)_cleanupKeychain;
-(char)_scheduleDependentRegistrations;
-(void)_scheduleRescueHeartBeat;
-(id)_getNextExpirationDate;
-(void)_updateDependentRegistrations;
-(void)_updateExpiry:(double)arg1 forUser:(id)arg2 ;
-(void)resetExpiryForUser:(id)arg1 ;
@end

