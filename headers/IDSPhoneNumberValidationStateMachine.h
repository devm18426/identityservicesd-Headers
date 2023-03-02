/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:12 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMSystemMonitorListener.h>
#import <libobjc.A.dylib/IDSCTPNRDelegate.h>

@protocol IDSPhoneNumberValidationStateMachineMessageDelivery, IDSPhoneNumberValidationStateMachineLockdownManager, IDSPreflightStackStore;
@class IDSPushHandler, NSMutableArray, NSDate, IMTimer, IMSystemMonitor, IDSPhoneNumberValidationModeArbiter, IDSSystemAccountAdapter, IDSCTPNR, IDSPreflightStack, NSString;

@interface IDSPhoneNumberValidationStateMachine : NSObject <IMSystemMonitorListener, IDSCTPNRDelegate> {

	IDSPushHandler* _pushHandler;
	long long _status;
	NSMutableArray* _handlers;
	NSMutableArray* _requestors;
	NSMutableArray* _promises;
	unsigned _numberOfSuccessfulSends;
	unsigned _numberOfAttemptsWithoutSuccessfulSend;
	unsigned _numberOfPreflights;
	char _isSMSWarningUp;
	char _hasAcceptedSMSRequest;
	NSDate* _phoneNumberValidationStartDate;
	NSDate* _smsSendDate;
	IMTimer* _lastSendSMSTimer;
	char _commCenterDead;
	char _needsToCheckPhoneNumberState;
	char _didReceiveSIMSetupCompleteNotification;
	long long _reason;
	id<IDSPhoneNumberValidationStateMachineMessageDelivery> _httpMessageDelivery;
	id<IDSPhoneNumberValidationStateMachineLockdownManager> _lockdownManager;
	IMSystemMonitor* _systemMonitor;
	IDSPhoneNumberValidationModeArbiter* _arbiter;
	IDSSystemAccountAdapter* _systemAccountAdapter;
	id<IDSPreflightStackStore> _preflighStackStore;
	/*^block*/id _inFlightHeartbeatBlock;
	/*^block*/id _inFlightSMSTimeoutBlock;
	IDSCTPNR* _CTPNR;
	NSMutableArray* _registrations;
	NSDate* _nextSendSMSDate;

}

@property (nonatomic,retain) id<IDSPhoneNumberValidationStateMachineMessageDelivery> httpMessageDelivery;              //@synthesize httpMessageDelivery=_httpMessageDelivery - In the implementation block
@property (nonatomic,retain) id<IDSPhoneNumberValidationStateMachineLockdownManager> lockdownManager;                  //@synthesize lockdownManager=_lockdownManager - In the implementation block
@property (nonatomic,retain) IMSystemMonitor * systemMonitor;                                                          //@synthesize systemMonitor=_systemMonitor - In the implementation block
@property (nonatomic,retain) IDSPhoneNumberValidationModeArbiter * arbiter;                                            //@synthesize arbiter=_arbiter - In the implementation block
@property (nonatomic,retain) IDSPushHandler * pushHandler;                                                             //@synthesize pushHandler=_pushHandler - In the implementation block
@property (nonatomic,retain) IDSSystemAccountAdapter * systemAccountAdapter;                                           //@synthesize systemAccountAdapter=_systemAccountAdapter - In the implementation block
@property (nonatomic,retain) id<IDSPreflightStackStore> preflighStackStore;                                            //@synthesize preflighStackStore=_preflighStackStore - In the implementation block
@property (nonatomic,copy) id inFlightHeartbeatBlock;                                                                  //@synthesize inFlightHeartbeatBlock=_inFlightHeartbeatBlock - In the implementation block
@property (nonatomic,copy) id inFlightSMSTimeoutBlock;                                                                 //@synthesize inFlightSMSTimeoutBlock=_inFlightSMSTimeoutBlock - In the implementation block
@property (nonatomic,copy) IDSPreflightStack * currentPreflightStack; 
@property (assign,nonatomic) long long status;                                                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) IDSCTPNR * CTPNR;                                                                         //@synthesize CTPNR=_CTPNR - In the implementation block
@property (nonatomic,retain) NSMutableArray * handlers;                                                                //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,retain) NSMutableArray * registrations;                                                           //@synthesize registrations=_registrations - In the implementation block
@property (assign,nonatomic) unsigned numberOfSuccessfulSends;                                                         //@synthesize numberOfSuccessfulSends=_numberOfSuccessfulSends - In the implementation block
@property (assign,nonatomic) unsigned numberOfAttemptsWithoutSuccessfulSend;                                           //@synthesize numberOfAttemptsWithoutSuccessfulSend=_numberOfAttemptsWithoutSuccessfulSend - In the implementation block
@property (assign,nonatomic) unsigned numberOfPreflights;                                                              //@synthesize numberOfPreflights=_numberOfPreflights - In the implementation block
@property (assign,nonatomic) char isSMSWarningUp;                                                                      //@synthesize isSMSWarningUp=_isSMSWarningUp - In the implementation block
@property (assign,nonatomic) char hasAcceptedSMSRequest;                                                               //@synthesize hasAcceptedSMSRequest=_hasAcceptedSMSRequest - In the implementation block
@property (assign,nonatomic) char commCenterDead;                                                                      //@synthesize commCenterDead=_commCenterDead - In the implementation block
@property (assign,nonatomic) char needsToCheckPhoneNumberState;                                                        //@synthesize needsToCheckPhoneNumberState=_needsToCheckPhoneNumberState - In the implementation block
@property (assign,nonatomic) char didReceiveSIMSetupCompleteNotification;                                              //@synthesize didReceiveSIMSetupCompleteNotification=_didReceiveSIMSetupCompleteNotification - In the implementation block
@property (nonatomic,retain) NSDate * nextSendSMSDate;                                                                 //@synthesize nextSendSMSDate=_nextSendSMSDate - In the implementation block
@property (nonatomic,retain) NSDate * phoneNumberValidationStartDate;                                                  //@synthesize phoneNumberValidationStartDate=_phoneNumberValidationStartDate - In the implementation block
@property (nonatomic,retain) NSDate * smsSendDate;                                                                     //@synthesize smsSendDate=_smsSendDate - In the implementation block
@property (nonatomic,retain) IMTimer * lastSendSMSTimer;                                                               //@synthesize lastSendSMSTimer=_lastSendSMSTimer - In the implementation block
@property (assign,nonatomic) long long reason;                                                                         //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(long long)reason;
-(long long)status;
-(void)setReason:(long long)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)systemDidStopBackup;
-(void)systemDidFinishMigration;
-(void)systemRestoreStateDidChange;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(NSMutableArray *)registrations;
-(void)setRegistrations:(NSMutableArray *)arg1 ;
-(long long)_registrationControlStatus;
-(IDSPhoneNumberValidationModeArbiter *)arbiter;
-(void)_registerForLockdownNotifications;
-(void)_lockdownStateChanged:(id)arg1 ;
-(char)commCenterDead;
-(NSMutableArray *)handlers;
-(void)setHandlers:(NSMutableArray *)arg1 ;
-(id<IDSPhoneNumberValidationStateMachineLockdownManager>)lockdownManager;
-(void)setLockdownManager:(id<IDSPhoneNumberValidationStateMachineLockdownManager>)arg1 ;
-(void)heartbeat;
-(IMSystemMonitor *)systemMonitor;
-(IDSPushHandler *)pushHandler;
-(void)setPushHandler:(IDSPushHandler *)arg1 ;
-(void)setSystemMonitor:(IMSystemMonitor *)arg1 ;
-(void)_keychainMigrationComplete:(id)arg1 ;
-(void)_registerForDeviceCenterNotifications;
-(void)_cancelScheduledHeartbeat;
-(void)setInFlightHeartbeatBlock:(id)arg1 ;
-(id)inFlightHeartbeatBlock;
-(void)_cancelScheduledSMSTimeout;
-(void)timedOutWaitingForSMS;
-(void)setInFlightSMSTimeoutBlock:(id)arg1 ;
-(id)inFlightSMSTimeoutBlock;
-(unsigned)loadNumberOfSuccessfulValidationSends;
-(unsigned)loadNumberOfPreflightAttempts;
-(id)initWithCTPNR:(id)arg1 preflightStackStore:(id)arg2 HTTPDelivery:(id)arg3 pushHandler:(id)arg4 lockdownManager:(id)arg5 systemMonitor:(id)arg6 arbiter:(id)arg7 systemAccountAdapter:(id)arg8 ;
-(void)_clearSMSDeliveryTimeout;
-(void)_deviceIDChangedNotification:(id)arg1 ;
-(id<IDSPreflightStackStore>)preflighStackStore;
-(id)_getHighestPriorityMechanism;
-(long long)_errorCodeForRegistrationError:(long long)arg1 ;
-(void)_failPromisesWithError:(long long)arg1 ;
-(void)_fulfillPromisesWithPhoneNumber:(id)arg1 token:(id)arg2 ;
-(char)_validSIMStateForRegistration;
-(void)_scheduleHeartbeat:(double)arg1 ;
-(void)handleRegistrationSMSSuccessfullyDeliveredWithTelephonyTimeout:(id)arg1 ;
-(void)handleRegistrationSMSDeliveryFailed;
-(void)handleIncomingSMSForResponse:(id)arg1 ;
-(void)_smsDeliveryClear;
-(char)_canDeliverSMSNow;
-(void)_issueAsyncCoreTelephonyPhoneNumberValidationRequestWithPushToken:(id)arg1 mechanism:(id)arg2 ;
-(IDSPreflightStack *)currentPreflightStack;
-(void)_sendPreflightVerificationWithIMSI:(id)arg1 PLMN:(id)arg2 ;
-(void)_performHighestPriorityPreflightVerification;
-(void)setCurrentPreflightStack:(IDSPreflightStack *)arg1 ;
-(void)_sendSMSVerificationWithMechanism:(id)arg1 ;
-(void)_notifyFailureWithError:(long long)arg1 ;
-(id<IDSPhoneNumberValidationStateMachineMessageDelivery>)httpMessageDelivery;
-(void)persistNumberOfPreflightAttempts:(unsigned)arg1 ;
-(char)_isPhoneNumberIdentificationSupported;
-(char)_userHasDisabledSMSRegistration;
-(char)_isAwaitingUserSelectionDuringSetup;
-(char)_deviceCanRegisterPresently;
-(void)_tryToSendSMSIdentification;
-(void)_requestUserConsentForPhoneNumberValidationWithCompletion:(/*^block*/id)arg1 ;
-(void)resetSMSCounter;
-(void)_sendPreflightVerificationIfNeeded;
-(void)handleRegistrationSMSDeliveryFailedWithShouldBypassRetry:(char)arg1 ;
-(void)_popHighestPriorityPreflightVerification;
-(void)persistNumberOfSuccessfulValidationSends:(unsigned)arg1 ;
-(void)_scheduleSMSTimeout:(double)arg1 ;
-(void)_notifySuccess:(id)arg1 ;
-(void)addPhoneNumberValidationRequestor:(id)arg1 ;
-(void)PNRReadyStateChanged:(char)arg1 ;
-(void)PNRRequestSentWithRequestData:(id)arg1 ;
-(void)PNRResponseReceivedWithResponseData:(id)arg1 ;
-(id)initWithCTPNR:(id)arg1 preflightStackStore:(id)arg2 ;
-(char)_isUserSubscriptionSelectionStillPending;
-(void)_SIMSetupDidComplete;
-(void)_setSMSDeliveryTimeout:(double)arg1 ;
-(id)identifyPhoneNumberForRequestor:(id)arg1 queue:(id)arg2 ;
-(void)removePhoneNumberValidationRequestor:(id)arg1 ;
-(void)setHttpMessageDelivery:(id<IDSPhoneNumberValidationStateMachineMessageDelivery>)arg1 ;
-(void)setArbiter:(IDSPhoneNumberValidationModeArbiter *)arg1 ;
-(IDSSystemAccountAdapter *)systemAccountAdapter;
-(void)setSystemAccountAdapter:(IDSSystemAccountAdapter *)arg1 ;
-(void)setPreflighStackStore:(id<IDSPreflightStackStore>)arg1 ;
-(IDSCTPNR *)CTPNR;
-(void)setCTPNR:(IDSCTPNR *)arg1 ;
-(unsigned)numberOfSuccessfulSends;
-(void)setNumberOfSuccessfulSends:(unsigned)arg1 ;
-(unsigned)numberOfAttemptsWithoutSuccessfulSend;
-(void)setNumberOfAttemptsWithoutSuccessfulSend:(unsigned)arg1 ;
-(unsigned)numberOfPreflights;
-(void)setNumberOfPreflights:(unsigned)arg1 ;
-(char)isSMSWarningUp;
-(void)setIsSMSWarningUp:(char)arg1 ;
-(char)hasAcceptedSMSRequest;
-(void)setHasAcceptedSMSRequest:(char)arg1 ;
-(void)setCommCenterDead:(char)arg1 ;
-(char)needsToCheckPhoneNumberState;
-(void)setNeedsToCheckPhoneNumberState:(char)arg1 ;
-(char)didReceiveSIMSetupCompleteNotification;
-(void)setDidReceiveSIMSetupCompleteNotification:(char)arg1 ;
-(NSDate *)nextSendSMSDate;
-(void)setNextSendSMSDate:(NSDate *)arg1 ;
-(NSDate *)phoneNumberValidationStartDate;
-(void)setPhoneNumberValidationStartDate:(NSDate *)arg1 ;
-(NSDate *)smsSendDate;
-(void)setSmsSendDate:(NSDate *)arg1 ;
-(IMTimer *)lastSendSMSTimer;
-(void)setLastSendSMSTimer:(IMTimer *)arg1 ;
@end
