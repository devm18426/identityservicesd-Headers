/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:20 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSNRDeviceMonitorDelegate.h>

@protocol IDSNRDeviceBridgeDelegate, OS_dispatch_queue;
@class NSObject, IDSNRDeviceMonitor, NSUUID, NSString;

@interface IDSNRDeviceBridge : NSObject <IDSNRDeviceMonitorDelegate> {

	unsigned char _latestLinkType;
	id<IDSNRDeviceBridgeDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _nrMonitorQueue;
	IDSNRDeviceMonitor* _nrDeviceMonitor;
	NSUUID* _deviceIdentifier;

}

@property (assign,nonatomic,__weak) id<IDSNRDeviceBridgeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nrMonitorQueue;                //@synthesize nrMonitorQueue=_nrMonitorQueue - In the implementation block
@property (nonatomic,retain) IDSNRDeviceMonitor * nrDeviceMonitor;                       //@synthesize nrDeviceMonitor=_nrDeviceMonitor - In the implementation block
@property (nonatomic,retain) NSUUID * deviceIdentifier;                                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned char latestLinkType;                               //@synthesize latestLinkType=_latestLinkType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<IDSNRDeviceBridgeDelegate>)delegate;
-(void)setDelegate:(id<IDSNRDeviceBridgeDelegate>)arg1 ;
-(char)isConnected;
-(NSUUID *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSUUID *)arg1 ;
-(char)isNearby;
-(char)isRegistered;
-(char)isClassCConnected;
-(char)isDevicesIdentifierEqualTo:(id)arg1 ;
-(id)initWithDeviceIdentifier:(id)arg1 delegate:(id)arg2 ;
-(unsigned char)latestLinkType;
-(id)initWithDeviceIdentifier:(id)arg1 delegate:(id)arg2 startMonitor:(char)arg3 ;
-(void)_startNRDeviceMonitor:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)nrMonitorQueue;
-(void)setNrDeviceMonitor:(IDSNRDeviceMonitor *)arg1 ;
-(IDSNRDeviceMonitor *)nrDeviceMonitor;
-(void)_notifyIDSNanoRegistryPluginManagerOnWatch:(char)arg1 ;
-(void)setLatestLinkType:(unsigned char)arg1 ;
-(void)_notifyWirelessRadioManagerAboutLinkChange:(unsigned char)arg1 ;
-(void)deviceIsNearbyDidChange:(id)arg1 isNearby:(char)arg2 ;
-(void)deviceIsConnectedDidChange:(id)arg1 isConnected:(char)arg2 ;
-(void)deviceIsCloudConnectedDidChange:(id)arg1 isCloudConnected:(char)arg2 ;
-(void)deviceIsAsleepDidChange:(id)arg1 isAsleep:(char)arg2 ;
-(void)deviceLinkTypeDidChange:(id)arg1 linkType:(unsigned char)arg2 ;
-(void)deviceIsClassCConnectedDidChange:(id)arg1 isClassCConnected:(char)arg2 ;
-(void)setNrMonitorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

