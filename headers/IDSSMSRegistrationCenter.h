/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:20 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSPhoneNumberValidationRequestor.h>
#import <libobjc.A.dylib/IDSPhoneNumberValidationListener.h>

@protocol IDSPreflightStackStore;
@class NSMutableArray, IDSPushHandler, NSMutableDictionary, NSMutableSet, IDSRateLimiter, IDSUserStore, NSArray, NSString;

@interface IDSSMSRegistrationCenter : NSObject <IDSPhoneNumberValidationRequestor, IDSPhoneNumberValidationListener> {

	NSMutableArray* _registrations;
	NSMutableArray* _handlers;
	id<IDSPreflightStackStore> _preflightStackStore;
	IDSPushHandler* _pushHandler;
	NSMutableDictionary* _registrationReasonByUserID;
	NSMutableDictionary* _stateMachineByUserID;
	NSMutableSet* _userConsentDeniedForCTPNR;
	IDSRateLimiter* _smallWindowSMSTimeoutRateLimiter;
	IDSRateLimiter* _wideWindowSMSTimeoutRateLimiter;
	IDSRateLimiter* _registrationAttemptRateLimiter;

}

@property (nonatomic,readonly) NSMutableArray * registrations;                               //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * handlers;                                    //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,readonly) id<IDSPreflightStackStore> preflightStackStore;               //@synthesize preflightStackStore=_preflightStackStore - In the implementation block
@property (nonatomic,retain) IDSPushHandler * pushHandler;                                   //@synthesize pushHandler=_pushHandler - In the implementation block
@property (nonatomic,readonly) IDSUserStore * userStore; 
@property (nonatomic,retain) NSMutableDictionary * registrationReasonByUserID;               //@synthesize registrationReasonByUserID=_registrationReasonByUserID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stateMachineByUserID;                     //@synthesize stateMachineByUserID=_stateMachineByUserID - In the implementation block
@property (nonatomic,retain) NSMutableSet * userConsentDeniedForCTPNR;                       //@synthesize userConsentDeniedForCTPNR=_userConsentDeniedForCTPNR - In the implementation block
@property (nonatomic,retain) IDSRateLimiter * smallWindowSMSTimeoutRateLimiter;              //@synthesize smallWindowSMSTimeoutRateLimiter=_smallWindowSMSTimeoutRateLimiter - In the implementation block
@property (nonatomic,retain) IDSRateLimiter * wideWindowSMSTimeoutRateLimiter;               //@synthesize wideWindowSMSTimeoutRateLimiter=_wideWindowSMSTimeoutRateLimiter - In the implementation block
@property (nonatomic,retain) IDSRateLimiter * registrationAttemptRateLimiter;                //@synthesize registrationAttemptRateLimiter=_registrationAttemptRateLimiter - In the implementation block
@property (nonatomic,readonly) NSArray * validators; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSArray *)validators;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(NSMutableArray *)registrations;
-(NSMutableArray *)handlers;
-(IDSPushHandler *)pushHandler;
-(void)setPushHandler:(IDSPushHandler *)arg1 ;
-(IDSUserStore *)userStore;
-(void)sendRegistration:(id)arg1 ;
-(void)cancelActionsForRegistrationInfo:(id)arg1 ;
-(void)notePhoneNumberRegistrationReset;
-(void)setRegistrationReason:(long long)arg1 forUserUniqueIdentifier:(id)arg2 ;
-(void)clearConsentDenialsForPhoneUser:(id)arg1 ;
-(void)validator:(id)arg1 handleABCEvent:(long long)arg2 ;
-(void)validator:(id)arg1 failedIdentificationWithRegistrationError:(long long)arg2 ;
-(void)validator:(id)arg1 identifiedPhoneNumber:(id)arg2 token:(id)arg3 phoneBookNumber:(id)arg4 ;
-(void)requestUserConsentToValidatePhoneNumberForCTPNR:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)registrationReasonByUserID;
-(void)_noteRegistrationAttemptForIdentifier:(id)arg1 withRegistrationInfo:(id)arg2 ;
-(void)_clearConsentDenialsForUniqueIdentifier:(id)arg1 ;
-(void)_notifyFailureWithError:(long long)arg1 registration:(id)arg2 identifier:(id)arg3 ;
-(void)_cleanupUntrackedValidators;
-(id)_identifierForValidator:(id)arg1 ;
-(void)_notifySuccess:(id)arg1 token:(id)arg2 identifier:(id)arg3 ;
-(void)_sendABCForFailureForIdentifier:(id)arg1 WithEvent:(long long)arg2 context:(id)arg3 ;
-(char)_hasThresholdReachedForSMSTimeoutForIdentifier:(id)arg1 ;
-(void)_resetRateLimitersForSMSTimeoutForIdentifier:(id)arg1 ;
-(void)setRegistrationReason:(long long)arg1 forPhoneNumber:(id)arg2 ;
-(void)clearConsentDenialsForRegistration:(id)arg1 ;
-(void)_notifyNeedsNewIdentification;
-(id<IDSPreflightStackStore>)preflightStackStore;
-(void)setRegistrationReasonByUserID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)stateMachineByUserID;
-(void)setStateMachineByUserID:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)userConsentDeniedForCTPNR;
-(void)setUserConsentDeniedForCTPNR:(NSMutableSet *)arg1 ;
-(IDSRateLimiter *)smallWindowSMSTimeoutRateLimiter;
-(void)setSmallWindowSMSTimeoutRateLimiter:(IDSRateLimiter *)arg1 ;
-(IDSRateLimiter *)wideWindowSMSTimeoutRateLimiter;
-(void)setWideWindowSMSTimeoutRateLimiter:(IDSRateLimiter *)arg1 ;
-(IDSRateLimiter *)registrationAttemptRateLimiter;
-(void)setRegistrationAttemptRateLimiter:(IDSRateLimiter *)arg1 ;
@end

