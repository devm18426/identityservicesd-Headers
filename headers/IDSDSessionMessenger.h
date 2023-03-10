/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:47:58 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSDSessionIDSDSessionAWDMetrics;
@class APSConnection, NSNumber, IDSDSessionSharedState;

@interface IDSDSessionMessenger : NSObject {

	unsigned char keyMaterial[60];
	char _alwaysSkipSelf;
	APSConnection* _apsConnection;
	id<IDSDSession><IDSDSessionAWDMetrics> _delegate;
	NSNumber* _remoteUsePhoneContinuityLocalMessage;
	IDSDSessionSharedState* _sharedState;

}

@property (nonatomic,retain) IDSDSessionSharedState * sharedState;                                //@synthesize sharedState=_sharedState - In the implementation block
@property (assign,nonatomic) char alwaysSkipSelf;                                                 //@synthesize alwaysSkipSelf=_alwaysSkipSelf - In the implementation block
@property (nonatomic,retain) APSConnection * apsConnection;                                       //@synthesize apsConnection=_apsConnection - In the implementation block
@property (assign,nonatomic,__weak) id<IDSDSession><IDSDSessionAWDMetrics> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNumber * remoteUsePhoneContinuityLocalMessage;                     //@synthesize remoteUsePhoneContinuityLocalMessage=_remoteUsePhoneContinuityLocalMessage - In the implementation block
-(id<IDSDSession><IDSDSessionAWDMetrics>)delegate;
-(void)setDelegate:(id<IDSDSession><IDSDSessionAWDMetrics>)arg1 ;
-(APSConnection *)apsConnection;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(void)setAlwaysSkipSelf:(char)arg1 ;
-(void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2 ;
-(char)alwaysSkipSelf;
-(IDSDSessionSharedState *)sharedState;
-(void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 ;
-(void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 fromID:(id)arg4 willSendBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_sendSinglePathMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 forceLocalDelivery:(char)arg4 messageGUID:(id)arg5 fromID:(id)arg6 willSendBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(char)_canSendMessageLocally:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 ;
-(NSNumber *)remoteUsePhoneContinuityLocalMessage;
-(id)initWithDictionary:(id)arg1 sharedState:(id)arg2 ;
-(void)sendMessage:(id)arg1 withCommand:(id)arg2 ;
-(void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 fromID:(id)arg4 ;
-(void)receivedSessionMessage:(id)arg1 fromID:(id)arg2 ;
-(void)receivedEndMessage:(id)arg1 fromID:(id)arg2 ;
-(void)sendReinitiateMessageWithSubcommand:(long long)arg1 ;
-(void)setRemoteUsePhoneContinuityLocalMessage:(NSNumber *)arg1 ;
-(void)setSharedState:(IDSDSessionSharedState *)arg1 ;
@end

