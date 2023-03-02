/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:07 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSServerBag, IDSCTPNRValidationMechanism, NSString;

@interface IDSPhoneNumberValidationModeArbiter : NSObject {

	IDSServerBag* _serverBag;

}

@property (nonatomic,readonly) IDSServerBag * serverBag;                                                                  //@synthesize serverBag=_serverBag - In the implementation block
@property (nonatomic,readonly) long long validationMode; 
@property (nonatomic,readonly) char isValidationModeLegacy; 
@property (nonatomic,readonly) char isValidationModeUsingPreflight; 
@property (nonatomic,readonly) char isValidationModeShortCircuitingPreflight; 
@property (nonatomic,readonly) IDSCTPNRValidationMechanism * preflightShortCircuitMechanismOverride; 
@property (nonatomic,readonly) NSString * preflightTestDataOverride; 
@property (nonatomic,readonly) double minimumIntervalBetweenValidationAttempts; 
@property (nonatomic,readonly) unsigned maxAllowableNumberOfPreflightRequests; 
@property (nonatomic,readonly) unsigned maxAllowableNumberOfSuccessfullySentVerifications; 
@property (nonatomic,readonly) unsigned maxAllowableNumberOfValidationAttemptsWhileNoneHaveSentSuccessfully; 
-(id)init;
-(IDSServerBag *)serverBag;
-(id)initWithServerBag:(id)arg1 ;
-(long long)validationMode;
-(char)isPrefightEnabledByServerBag;
-(NSString *)preflightTestDataOverride;
-(char)isValidationModeShortCircuitingPreflight;
-(char)isValidationModeLegacy;
-(char)isValidationModeUsingPreflight;
-(IDSCTPNRValidationMechanism *)preflightShortCircuitMechanismOverride;
-(double)minimumIntervalBetweenValidationAttempts;
-(unsigned)maxAllowableNumberOfPreflightRequests;
-(unsigned)maxAllowableNumberOfSuccessfullySentVerifications;
-(unsigned)maxAllowableNumberOfValidationAttemptsWhileNoneHaveSentSuccessfully;
@end

