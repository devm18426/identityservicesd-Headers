/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:12 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSXPCRegistration <NSObject>
@required
-(void)requestSelectedSubscriptionsWithCompletion:(/*^block*/id)arg1;
-(void)requestUnselectedTemporaryPhoneAliasesWithCompletion:(/*^block*/id)arg1;
-(void)selectSubscription:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)unselectSubscription:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)setSelectedSubscriptions:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeTemporaryPhoneAlias:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)enableTemporaryPhoneAlias:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)disableTemporaryPhoneAlias:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)constructRAResponseDictionaryForServices:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end
