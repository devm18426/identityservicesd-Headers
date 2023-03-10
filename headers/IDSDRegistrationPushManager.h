/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:21 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSRegistrationPushHandlerListener.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class IDSRegistrationPushHandler, NSMutableSet, NSString;

@interface IDSDRegistrationPushManager : NSObject <IDSRegistrationPushHandlerListener, IMSystemMonitorListener> {

	IDSRegistrationPushHandler* _pushHandler;
	NSMutableSet* _registeredAccountIDs;
	char _registeredForPushes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_ignoreIncomingPushes;
-(void)stopTrackingRegisteredAccountID:(id)arg1 ;
-(void)fakeIncomingPushForUserID:(id)arg1 style:(id)arg2 service:(id)arg3 ;
-(void)_acceptIncomingPushes;
-(void)startTrackingRegisteredAccountID:(id)arg1 ;
-(void)handler:(id)arg1 requestedSysdiagnoseWithTapToRadarPushPayload:(id)arg2 ;
-(void)handler:(id)arg1 requestedPromptThroughPushWithTitle:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 defaultUrl:(id)arg5 alternateButton:(id)arg6 alternateUrl:(id)arg7 ;
-(void)handler:(id)arg1 reregisterUserID:(id)arg2 style:(id)arg3 service:(id)arg4 ;
-(void)_updatePushState;
-(id)_accountsWithService:(id)arg1 ;
-(char)_isAccountRelevantForRegistrationPush:(id)arg1 ;
-(void)_handleAction:(long long)arg1 forAccounts:(id)arg2 ;
-(void)_handleReIdentifyActionForAccounts:(id)arg1 ;
-(void)_handleReProvisionActionForAccounts:(id)arg1 ;
-(void)_handleReRegisterActionForAccounts:(id)arg1 ;
-(void)_handleValidateCredentialsActionForAccounts:(id)arg1 ;
-(void)_handleForceRepairRegistrationActionForAccounts:(id)arg1 ;
@end

