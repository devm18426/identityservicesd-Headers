/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:12 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSXPCRegistration.h>

@protocol OS_dispatch_queue;
@class IDSUserStore, IDSDAccountController, IDSCTAdapter, NSObject, NSString;

@interface IDSDXPCRegistration : NSObject <IDSXPCRegistration> {

	char _onlyAllowReads;
	IDSUserStore* _userStore;
	IDSDAccountController* _accountController;
	IDSCTAdapter* _ctAdapter;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) IDSUserStore * userStore;                               //@synthesize userStore=_userStore - In the implementation block
@property (nonatomic,retain) IDSDAccountController * accountController;              //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) IDSCTAdapter * ctAdapter;                               //@synthesize ctAdapter=_ctAdapter - In the implementation block
@property (assign,nonatomic) char onlyAllowReads;                                    //@synthesize onlyAllowReads=_onlyAllowReads - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)requestSelectedSubscriptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)requestUnselectedTemporaryPhoneAliasesWithCompletion:(/*^block*/id)arg1 ;
-(void)selectSubscription:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)unselectSubscription:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setSelectedSubscriptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeTemporaryPhoneAlias:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)enableTemporaryPhoneAlias:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)disableTemporaryPhoneAlias:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)constructRAResponseDictionaryForServices:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(IDSDAccountController *)accountController;
-(void)setAccountController:(IDSDAccountController *)arg1 ;
-(IDSUserStore *)userStore;
-(void)setUserStore:(IDSUserStore *)arg1 ;
-(id)initWithQueue:(id)arg1 connection:(id)arg2 userStore:(id)arg3 accountController:(id)arg4 ctAdapter:(id)arg5 ;
-(IDSCTAdapter *)ctAdapter;
-(char)onlyAllowReads;
-(id)initWithQueue:(id)arg1 connection:(id)arg2 ;
-(void)setOnlyAllowReads:(char)arg1 ;
-(void)setCtAdapter:(IDSCTAdapter *)arg1 ;
@end

