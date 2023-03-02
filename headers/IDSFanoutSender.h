/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:06 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSMadridAckTrackerDelegate.h>
#import <libobjc.A.dylib/IDSAPNSAckTrackerDelegate.h>

@protocol OS_os_activity;
@class FTMessageDelivery, NSArray, NSString, NSObject, IDSAckStateMachine;

@interface IDSFanoutSender : NSObject <IDSMadridAckTrackerDelegate, IDSAPNSAckTrackerDelegate> {

	/*^block*/id _deliveryAcknowledgementBlock;
	/*^block*/id _sendCompletionBlock;
	FTMessageDelivery* _messageDelivery;
	NSArray* _uris;
	NSString* _guid;
	NSString* _service;
	NSObject*<OS_os_activity> _completionActivity;
	IDSAckStateMachine* _ackStateMachine;

}

@property (nonatomic,readonly) IDSAckStateMachine * ackStateMachine;              //@synthesize ackStateMachine=_ackStateMachine - In the implementation block
-(void)receivedErrorWithContext:(id)arg1 ;
-(void)finishedTrackingMadridAcksWithContext:(id)arg1 ;
-(void)finishedTrackingAPNSAcks;
-(void)receivedAPNSAckForMessage:(id)arg1 ;
-(id)initWithGUID:(id)arg1 service:(id)arg2 messageDelivery:(id)arg3 deliveryAcknowledgementBlock:(/*^block*/id)arg4 sendCompletionBlock:(/*^block*/id)arg5 completionActivity:(id)arg6 ;
-(void)sendFanouts:(id)arg1 forURIs:(id)arg2 messageQueue:(id)arg3 ;
-(IDSAckStateMachine *)ackStateMachine;
@end

