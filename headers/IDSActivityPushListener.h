/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:01 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSPushHandlerDelegate.h>

@protocol IDSActivityPushListenerDelegate, OS_dispatch_queue;
@class NSSet, IDSPushHandler, NSObject, NSString;

@interface IDSActivityPushListener : NSObject <IDSPushHandlerDelegate> {

	char _shouldListen;
	char _listening;
	NSSet* _topicsToListenOn;
	id<IDSActivityPushListenerDelegate> _delegate;
	IDSPushHandler* _pushHandler;
	IDSPushHandler* _persistentEnrollmentHandler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) IDSPushHandler * pushHandler;                                     //@synthesize pushHandler=_pushHandler - In the implementation block
@property (nonatomic,retain) IDSPushHandler * persistentEnrollmentHandler;                     //@synthesize persistentEnrollmentHandler=_persistentEnrollmentHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char listening;                                                   //@synthesize listening=_listening - In the implementation block
@property (assign,nonatomic) char shouldListen;                                                //@synthesize shouldListen=_shouldListen - In the implementation block
@property (nonatomic,retain) NSSet * topicsToListenOn;                                         //@synthesize topicsToListenOn=_topicsToListenOn - In the implementation block
@property (assign,nonatomic,__weak) id<IDSActivityPushListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IDSActivityPushListenerDelegate>)delegate;
-(void)setDelegate:(id<IDSActivityPushListenerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(char)listening;
-(void)setListening:(char)arg1 ;
-(IDSPushHandler *)pushHandler;
-(void)setPushHandler:(IDSPushHandler *)arg1 ;
-(void)_configurePushHandler;
-(void)setTopicsToListenOn:(NSSet *)arg1 ;
-(void)setShouldListen:(char)arg1 ;
-(char)shouldListen;
-(NSSet *)topicsToListenOn;
-(IDSPushHandler *)persistentEnrollmentHandler;
-(void)setPersistentEnrollmentHandler:(IDSPushHandler *)arg1 ;
@end
