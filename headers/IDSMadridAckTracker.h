/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:00 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSMadridAckTrackerDelegate;
@class NSNumber, NSString;

@interface IDSMadridAckTracker : NSObject {

	NSNumber* _overallSendTimestamp;
	NSString* _guid;
	id<IDSMadridAckTrackerDelegate> _delegate;

}

@property (nonatomic,retain) id<IDSMadridAckTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IDSMadridAckTrackerDelegate>)delegate;
-(void)setDelegate:(id<IDSMadridAckTrackerDelegate>)arg1 ;
-(id)initWithGUID:(id)arg1 ;
-(void)addBlockToAggregateMessage:(id)arg1 forURIs:(id)arg2 messageQueue:(id)arg3 ;
-(void)addBlockToAggregatableMessage:(id)arg1 trackingSet:(id)arg2 ;
-(void)trackMessages:(id)arg1 forURIs:(id)arg2 messageQueue:(id)arg3 ;
@end

