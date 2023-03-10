/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:19 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSNRDeviceIdentifier, NSString;

@interface IDSNREndpoint : NSObject {

	unsigned char _dataProtectionClass;
	IDSNRDeviceIdentifier* _deviceIdentifier;
	NSString* _portString;

}

@property (nonatomic,readonly) IDSNRDeviceIdentifier * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * portString;                                 //@synthesize portString=_portString - In the implementation block
@property (nonatomic,readonly) unsigned char dataProtectionClass;                     //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
-(IDSNRDeviceIdentifier *)deviceIdentifier;
-(id)copyEndpoint;
-(unsigned char)dataProtectionClass;
-(NSString *)portString;
-(id)initWithDeviceIdentifier:(id)arg1 portString:(id)arg2 dataProtectionClass:(unsigned char)arg3 ;
@end

