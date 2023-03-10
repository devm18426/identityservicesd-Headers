/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:47:57 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSXPCDaemon.h>

@protocol OS_dispatch_queue, IDSDXPCDaemonCollaboratorProvider, IDSXPCReunionSync;
@class IDSXPCConnection, NSObject;

@interface IDSDXPCDaemon : NSObject <IDSXPCDaemon> {

	IDSXPCConnection* _clientConnection;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _invalidationHandler;
	id<IDSDXPCDaemonCollaboratorProvider> _collaboratorProvider;
	id<IDSXPCReunionSync> _reunionSyncCollaborator;

}

@property (nonatomic,retain) IDSXPCConnection * clientConnection;                                     //@synthesize clientConnection=_clientConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) id<IDSDXPCDaemonCollaboratorProvider> collaboratorProvider;              //@synthesize collaboratorProvider=_collaboratorProvider - In the implementation block
@property (nonatomic,retain) id<IDSXPCReunionSync> reunionSyncCollaborator;                           //@synthesize reunionSyncCollaborator=_reunionSyncCollaborator - In the implementation block
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)invalidationHandler;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)pairingCollaboratorWithCompletion:(/*^block*/id)arg1 ;
-(void)pairedDeviceManagerCollaboratorWithCompletion:(/*^block*/id)arg1 ;
-(void)reunionSyncCollaboratorForClientProcessName:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)opportunisticCollaboratorWithCompletion:(/*^block*/id)arg1 ;
-(void)registrationCollaboratorWithCompletion:(/*^block*/id)arg1 ;
-(void)activityMonitorCollaboratorWithCompletion:(/*^block*/id)arg1 ;
-(void)interalTestingCollaboratorWithCompletion:(/*^block*/id)arg1 ;
-(IDSXPCConnection *)clientConnection;
-(void)setClientConnection:(IDSXPCConnection *)arg1 ;
-(id<IDSDXPCDaemonCollaboratorProvider>)collaboratorProvider;
-(id<IDSXPCReunionSync>)reunionSyncCollaborator;
-(void)setReunionSyncCollaborator:(id<IDSXPCReunionSync>)arg1 ;
-(id)initWithQueue:(id)arg1 collaboratorProvider:(id)arg2 takingOverAndResumingConnection:(id)arg3 ;
-(void)setCollaboratorProvider:(id<IDSDXPCDaemonCollaboratorProvider>)arg1 ;
@end

