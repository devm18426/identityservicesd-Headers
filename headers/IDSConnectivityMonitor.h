/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:24 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSUTunDeliveryControllerConnectivityDelegate.h>

@class NSTimer, IDSNRDeviceMonitor, NSString, NSDate;

@interface IDSConnectivityMonitor : NSObject <IDSUTunDeliveryControllerConnectivityDelegate> {

	char _isNearby;
	char _isConnected;
	NSTimer* _monitorTimer;
	IDSNRDeviceMonitor* _deviceMonitor;
	NSString* _cbuuidString;
	NSString* _pairedDeviceCBUUIDString;
	double _timeConnected;
	double _timeDisconnected;
	NSDate* _lastConnection;
	NSDate* _lastDisconnection;

}

@property (nonatomic,retain) NSTimer * monitorTimer;                           //@synthesize monitorTimer=_monitorTimer - In the implementation block
@property (nonatomic,retain) IDSNRDeviceMonitor * deviceMonitor;               //@synthesize deviceMonitor=_deviceMonitor - In the implementation block
@property (nonatomic,retain) NSString * cbuuidString;                          //@synthesize cbuuidString=_cbuuidString - In the implementation block
@property (nonatomic,retain) NSString * pairedDeviceCBUUIDString;              //@synthesize pairedDeviceCBUUIDString=_pairedDeviceCBUUIDString - In the implementation block
@property (assign,nonatomic) char isNearby;                                    //@synthesize isNearby=_isNearby - In the implementation block
@property (assign,nonatomic) char isConnected;                                 //@synthesize isConnected=_isConnected - In the implementation block
@property (assign,nonatomic) double timeConnected;                             //@synthesize timeConnected=_timeConnected - In the implementation block
@property (assign,nonatomic) double timeDisconnected;                          //@synthesize timeDisconnected=_timeDisconnected - In the implementation block
@property (nonatomic,retain) NSDate * lastConnection;                          //@synthesize lastConnection=_lastConnection - In the implementation block
@property (nonatomic,retain) NSDate * lastDisconnection;                       //@synthesize lastDisconnection=_lastDisconnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(char)isConnected;
-(char)isNearby;
-(void)setIsConnected:(char)arg1 ;
-(IDSNRDeviceMonitor *)deviceMonitor;
-(void)setDeviceMonitor:(IDSNRDeviceMonitor *)arg1 ;
-(NSDate *)lastConnection;
-(void)setLastConnection:(NSDate *)arg1 ;
-(double)timeConnected;
-(double)timeDisconnected;
-(NSString *)pairedDeviceCBUUIDString;
-(void)setTimeConnected:(double)arg1 ;
-(void)setTimeDisconnected:(double)arg1 ;
-(void)setPairedDeviceCBUUIDString:(NSString *)arg1 ;
-(void)setIsNearby:(char)arg1 ;
-(void)deliveryController:(id)arg1 uniqueID:(id)arg2 isConnected:(char)arg3 ;
-(void)checkConnectivityState:(id)arg1 ;
-(void)sendMonitorMessage;
-(NSDate *)lastDisconnection;
-(void)setLastDisconnection:(NSDate *)arg1 ;
-(NSTimer *)monitorTimer;
-(void)setMonitorTimer:(NSTimer *)arg1 ;
-(NSString *)cbuuidString;
-(void)setCbuuidString:(NSString *)arg1 ;
@end

