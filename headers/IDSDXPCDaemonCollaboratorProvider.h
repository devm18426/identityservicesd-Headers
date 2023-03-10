/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:22 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSDXPCDaemonCollaboratorProvider <NSObject>
@required
-(id)pairingCollaboratorForXPCDaemon:(id)arg1;
-(id)pairedDeviceManagerCollaboratorForXPCDaemon:(id)arg1;
-(id)reunionSyncCollaboratorWithClientProcessName:(id)arg1 forXPCDaemon:(id)arg2;
-(id)opportunisticCollaboratorForXPCDaemon:(id)arg1;
-(id)registrationCollaboratorForXPCDaemon:(id)arg1;
-(id)activityMonitorCollaboratorForXPCDaemon:(id)arg1;
-(id)internalTestingCollaboratorForXPCDaemon:(id)arg1;

@end

