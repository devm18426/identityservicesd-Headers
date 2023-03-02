/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:06 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IDSRestrictions : NSObject {

	NSMutableDictionary* _parentalControls;
	char _active;
	char _shouldPostNotifications;

}

@property (nonatomic,readonly) char active;                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) char shouldPostNotifications;              //@synthesize shouldPostNotifications=_shouldPostNotifications - In the implementation block
+(id)sharedInstance;
-(id)init;
-(char)active;
-(void)setShouldPostNotifications:(char)arg1 ;
-(void)_updateParentalSettings;
-(void)_managedPrefsNotification:(id)arg1 ;
-(char)shouldPostNotifications;
-(void)updateAccountActivation;
-(char)shouldDisableAccount:(id)arg1 ;
-(char)_isDisabledService:(id)arg1 ;
-(char)shouldDisableService:(id)arg1 ;
-(void)_setIsDisabled:(char)arg1 forService:(id)arg2 ;
@end

