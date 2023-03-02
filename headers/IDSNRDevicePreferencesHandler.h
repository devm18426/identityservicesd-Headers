/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:08 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSNRDevicePreferences, NSMutableSet;

@interface IDSNRDevicePreferencesHandler : NSObject {

	unsigned _quickRelayRequestsCount;
	IDSNRDevicePreferences* _nrDevicePreferences;
	NSMutableSet* _servicesPreferringInfraWiFi;

}

@property (nonatomic,retain) IDSNRDevicePreferences * nrDevicePreferences;              //@synthesize nrDevicePreferences=_nrDevicePreferences - In the implementation block
@property (nonatomic,retain) NSMutableSet * servicesPreferringInfraWiFi;                //@synthesize servicesPreferringInfraWiFi=_servicesPreferringInfraWiFi - In the implementation block
@property (assign,nonatomic) unsigned quickRelayRequestsCount;                          //@synthesize quickRelayRequestsCount=_quickRelayRequestsCount - In the implementation block
-(void)cancel;
-(void)setAllowedTrafficClasses:(id)arg1 ;
-(id)initWithDeviceIdentifier:(id)arg1 ;
-(void)localSetUpStarted;
-(void)localSetUpCompleted;
-(void)setPreferInfraWiFiRequest:(char)arg1 services:(id)arg2 ;
-(void)setBluetoothLinkPreferences:(id)arg1 inputbps:(id)arg2 outputbps:(id)arg3 ;
-(void)setQuickRelayRequest:(char)arg1 ;
-(IDSNRDevicePreferences *)nrDevicePreferences;
-(NSMutableSet *)servicesPreferringInfraWiFi;
-(void)_reportPreferInfraWiFiToPowerLogs:(char)arg1 ;
-(unsigned)quickRelayRequestsCount;
-(void)setQuickRelayRequestsCount:(unsigned)arg1 ;
-(void)setServicesPreferringInfraWiFi:(NSMutableSet *)arg1 ;
-(void)setNrDevicePreferences:(IDSNRDevicePreferences *)arg1 ;
@end
