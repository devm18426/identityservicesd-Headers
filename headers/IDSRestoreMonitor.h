/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:13 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMTimer, NSMapTable;

@interface IDSRestoreMonitor : NSObject {

	/*^block*/id _timerBlock;
	IMTimer* _restoreTimer;
	NSMapTable* _actionByTarget;

}

@property (nonatomic,copy) id timerBlock;                              //@synthesize timerBlock=_timerBlock - In the implementation block
@property (nonatomic,retain) IMTimer * restoreTimer;                   //@synthesize restoreTimer=_restoreTimer - In the implementation block
@property (nonatomic,retain) NSMapTable * actionByTarget;              //@synthesize actionByTarget=_actionByTarget - In the implementation block
+(id)sharedInstance;
-(void)_timerFired;
-(void)removeTarget:(id)arg1 ;
-(char)hasActionForTarget:(id)arg1 ;
-(void)addTarget:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(id)initWithTimerBlock:(/*^block*/id)arg1 ;
-(id)timerBlock;
-(void)setTimerBlock:(id)arg1 ;
-(IMTimer *)restoreTimer;
-(void)setRestoreTimer:(IMTimer *)arg1 ;
-(NSMapTable *)actionByTarget;
-(void)setActionByTarget:(NSMapTable *)arg1 ;
@end

