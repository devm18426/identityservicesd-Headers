/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:47:57 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSXPCDaemon
@required
-(void)activateWithCompletion:(/*^block*/id)arg1;
-(void)pairingCollaboratorWithCompletion:(/*^block*/id)arg1;
-(void)pairedDeviceManagerCollaboratorWithCompletion:(/*^block*/id)arg1;
-(void)reunionSyncCollaboratorForClientProcessName:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)opportunisticCollaboratorWithCompletion:(/*^block*/id)arg1;
-(void)registrationCollaboratorWithCompletion:(/*^block*/id)arg1;
-(void)activityMonitorCollaboratorWithCompletion:(/*^block*/id)arg1;
-(void)interalTestingCollaboratorWithCompletion:(/*^block*/id)arg1;

@end

