/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:22 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSKeyTransparencyRegistrationDataSource, CUTMetricLogger;
@class IDSCloudKitKeyTransparencyStore, IDSKeyTransparencyPolicy, KTVerifier, IDSRegistrationKeyManager;

@interface IDSKeyTransparencyVerifier : NSObject {

	IDSCloudKitKeyTransparencyStore* _keyTransparencyStore;
	IDSKeyTransparencyPolicy* _policy;
	KTVerifier* _KTVerifier;
	IDSRegistrationKeyManager* _keyManager;
	id<IDSKeyTransparencyRegistrationDataSource> _registrationDataSource;
	id<CUTMetricLogger> _internalMetricLogger;
	id<CUTMetricLogger> _productionMetricLogger;

}

@property (nonatomic,readonly) KTVerifier * KTVerifier;                                                          //@synthesize KTVerifier=_KTVerifier - In the implementation block
@property (nonatomic,readonly) IDSRegistrationKeyManager * keyManager;                                           //@synthesize keyManager=_keyManager - In the implementation block
@property (nonatomic,readonly) id<IDSKeyTransparencyRegistrationDataSource> registrationDataSource;              //@synthesize registrationDataSource=_registrationDataSource - In the implementation block
@property (nonatomic,readonly) id<CUTMetricLogger> internalMetricLogger;                                         //@synthesize internalMetricLogger=_internalMetricLogger - In the implementation block
@property (nonatomic,readonly) id<CUTMetricLogger> productionMetricLogger;                                       //@synthesize productionMetricLogger=_productionMetricLogger - In the implementation block
@property (nonatomic,readonly) IDSCloudKitKeyTransparencyStore * keyTransparencyStore;                           //@synthesize keyTransparencyStore=_keyTransparencyStore - In the implementation block
@property (nonatomic,readonly) IDSKeyTransparencyPolicy * policy;                                                //@synthesize policy=_policy - In the implementation block
+(id)sharedInstance;
+(id)keyTransparencyVersionNumberForServiceType:(id)arg1 ;
+(char)isKeyTransparencyEnabled;
+(id)_keyTransparencyURIPrefixForServiceIdentifier:(id)arg1 ;
-(id)init;
-(IDSKeyTransparencyPolicy *)policy;
-(IDSRegistrationKeyManager *)keyManager;
-(IDSCloudKitKeyTransparencyStore *)keyTransparencyStore;
-(void)performTrustCircleVerificationForSelfQueryResultsWithIndex:(id)arg1 entries:(id)arg2 localURI:(id)arg3 ticket:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchLocalDeviceTrustCircleEligibleServiceIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(id)currentTrustCircleVerificationResultsForSelfQueriedIndex:(id)arg1 entries:(id)arg2 ticket:(id)arg3 ;
-(id)currentPeerVerificationResultsForQueriedIndex:(id)arg1 ticket:(id)arg2 ;
-(void)forceVerificationWithIndex:(id)arg1 ticket:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)fetchTrustedDevicesFromTrustCircle;
-(id)fetchCloudKitTrustedDevices;
-(id)fetchAccountKeyTrustedDevices;
-(void)nukeKeyTransparencyStateWithCompletion:(/*^block*/id)arg1 ;
-(id)transparencyTicketForRegistrationWithIndex:(id)arg1 verificationState:(id)arg2 entry:(id)arg3 ;
-(id)enrollTrustedDevice:(id)arg1 ;
-(id)_clientErrorWithCode:(long long)arg1 debugDescription:(id)arg2 underlyingError:(id)arg3 ;
-(id)transparencyTicketForQueryResultsWithIndex:(id)arg1 verificationState:(id)arg2 entries:(id)arg3 localURI:(id)arg4 ;
-(id)initWithPolicy:(id)arg1 verifier:(id)arg2 keyManager:(id)arg3 store:(id)arg4 registrationDataSource:(id)arg5 internalMetricLogger:(id)arg6 productionMetricLogger:(id)arg7 ;
-(void)_presentInternalVerificationAlertWithText:(id)arg1 ;
-(id<IDSKeyTransparencyRegistrationDataSource>)registrationDataSource;
-(void)fetchLocalDeviceTrustCircleEligibilityWithCompletion:(/*^block*/id)arg1 ;
-(char)isDeviceAccountStateKeyTransparencyEligible;
-(id)_transparencyTicketForQueryResultsWithIndex:(id)arg1 verificationState:(id)arg2 entries:(id)arg3 ;
-(id)_verifyKeyTransparencyOfRegisteredIndex:(id)arg1 verificationState:(id)arg2 entry:(id)arg3 ;
-(id)_pruneTrustedDevice:(id)arg1 givenEligibleServiceIdentifiers:(id)arg2 ;
-(id)_enrollTrustedDevice:(id)arg1 ;
-(id)_fetchTrustedDevicesFromTrustCircle;
-(void)_performTrustCircleVerificationForSelfQueryResultsWithIndex:(id)arg1 entries:(id)arg2 localURI:(id)arg3 ticket:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_currentPeerVerificationResultsForQueriedIndex:(id)arg1 ticket:(id)arg2 ;
-(id)_currentSelfVerificationResultsAgainstTrustCircleForSelfQueriedIndex:(id)arg1 entries:(id)arg2 ticket:(id)arg3 ;
-(id)_currentVerificationResultsForRegisteredIndex:(id)arg1 ticket:(id)arg2 ;
-(void)_forceVerificationWithIndex:(id)arg1 ticket:(id)arg2 completion:(/*^block*/id)arg3 ;
-(KTVerifier *)KTVerifier;
-(id)_KTDatasForIDSKeyTransparencyEntries:(id)arg1 ;
-(void)_fulfullOrFailPromiseSeal:(id)arg1 basedOnIndex:(id)arg2 KTResult:(unsigned long long)arg3 transparentData:(id)arg4 error:(id)arg5 ;
-(id)_fetchTrustedDevicesFromTrustCircleGivenIndex:(id)arg1 entries:(id)arg2 ;
-(id)_KTDatasForIDSProtoKeyTransparencyTrustedDevices:(id)arg1 serviceIdentifier:(id)arg2 ;
-(void)_mutateSuccessfulSyncIndicatorOnKTLoggableDatas:(id)arg1 forIndex:(id)arg2 ;
-(id)_clientErrorForKTResult:(unsigned long long)arg1 underlyingError:(id)arg2 ;
-(id)_KTDataForIDSKeyTransparencyEntry:(id)arg1 ;
-(id)_IDSEndpointTransparencyStatesForKTTransparentData:(id)arg1 index:(id)arg2 ;
-(id)_enrollTrustedDeviceToCloudKit:(id)arg1 ;
-(id)_enrollTrustedDeviceViaAccountKeySignature:(id)arg1 ;
-(void)_submitMetricsForTrustedDeviceEnrollmentWithCloudKitResult:(id)arg1 cloudKitOperationTimeInterval:(double)arg2 accountKeyResult:(id)arg3 accountKeyOperationTimeInterval:(double)arg4 ;
-(id)_fetchAccountKeyTrustedDevicesGivenIndex:(id)arg1 entries:(id)arg2 ;
-(id)_mergeCloudKitTrustedDevices:(id)arg1 accountKeyTrustedDevices:(id)arg2 ;
-(void)_submitMetricsForTrustedDeviceVerificationWithCloudKitResult:(id)arg1 cloudKitOperationTimeInterval:(double)arg2 accountKeyResult:(id)arg3 accountKeyOperationTimeInterval:(double)arg4 index:(id)arg5 entries:(id)arg6 ;
-(id)_IDSProtoKeyTransparencyTrustedDeviceForKeyTransparencyIndex:(id)arg1 entry:(id)arg2 ;
-(id<CUTMetricLogger>)internalMetricLogger;
-(id<CUTMetricLogger>)productionMetricLogger;
-(unsigned long long)_numberOfMatchesForCandidates:(id)arg1 index:(id)arg2 trustedDevices:(id)arg3 ;
-(char)_isTrustedCandidate:(id)arg1 index:(id)arg2 givenTrustedDevices:(id)arg3 ;
-(id)currentVerificationResultsForRegisteredIndex:(id)arg1 ticket:(id)arg2 ;
@end

