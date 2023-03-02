/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:22 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSKeyTransparencyPolicy : NSObject
-(char)isKeyTransparencyXPCActivityEnabled;
-(unsigned long long)keyTransparencyXPCActivityIntervalInSeconds;
-(unsigned long long)keyTransparencyMaximumVerificationsPerXPCActivity;
-(char)isKeyTransparencyEnabled;
-(char)isKeyTransparencyUIEnabled;
-(char)shouldSyncTrustCircleAfterSelfQueryForServiceIdentifier:(id)arg1 ;
-(char)isKeyTransparencyEnabledForServiceType:(id)arg1 ;
-(char)isKeyTransparencyEnabledForServiceIdentifier:(id)arg1 ;
-(char)isKeyTransparencyPeerVerificationAllowedWithoutEnrollment;
-(char)isKeyTransparencyTrustCircleEnabled;
-(char)isKeyTransparencyTrustCircleAllowedWithoutEnrollment;
-(char)isKeyTransparencyCloudKitCircleEnabled;
-(char)isKeyTransparencyAccountKeyCircleEnabled;
-(char)isKeyTransparencyAnalyticsEnabled;
-(char)isKeyTransparencyRTCAnalyticsEnabled;
-(char)isKeyTransparencySFAnalyticsEnabled;
-(char)_isKeyTransparencyEnabledViaDefaults;
-(char)_isKeyTransparencyEnabledViaServerBag;
-(long long)_keyTransparencyEnablementLevelFromServerBag;
@end
