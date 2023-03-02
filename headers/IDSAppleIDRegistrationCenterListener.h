/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:01 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSAppleIDRegistrationCenterListener
@optional
-(void)center:(id)arg1 startedAuthenticating:(id)arg2;
-(void)center:(id)arg1 succeededAuthentication:(id)arg2;
-(void)center:(id)arg1 succeededInitialRegionQuery:(id)arg2;
-(void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(char)arg6;
-(void)center:(id)arg1 failedAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;
-(void)center:(id)arg1 failedRegionValidation:(id)arg2 error:(long long)arg3 info:(id)arg4;

@end
