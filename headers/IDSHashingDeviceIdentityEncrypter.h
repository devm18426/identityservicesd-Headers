/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:11 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSMPFullDeviceIdentityContainerEncrypter.h>

@class IDSMPFullDeviceIdentityContainerEncrypter, IDSMessageHashChecker, NSString;

@interface IDSHashingDeviceIdentityEncrypter : NSObject <IDSMPFullDeviceIdentityContainerEncrypter> {

	IDSMPFullDeviceIdentityContainerEncrypter* _fullDeviceIdentityContainerEncrypter;
	IDSMessageHashChecker* _messageHashChecker;

}

@property (nonatomic,readonly) IDSMPFullDeviceIdentityContainerEncrypter * fullDeviceIdentityContainerEncrypter;              //@synthesize fullDeviceIdentityContainerEncrypter=_fullDeviceIdentityContainerEncrypter - In the implementation block
@property (nonatomic,readonly) IDSMessageHashChecker * messageHashChecker;                                                    //@synthesize messageHashChecker=_messageHashChecker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IDSMPFullDeviceIdentityContainerEncrypter *)fullDeviceIdentityContainerEncrypter;
-(id)encryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usingIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)encryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usedIdentifier:(id*)arg3 error:(id*)arg4 ;
-(id)decryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 error:(id*)arg3 usingIdentifier:(id)arg4 isRetry:(char)arg5 ;
-(id)decryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usingIdentifier:(id)arg3 isRetry:(char)arg4 ;
-(id)initWithDeviceIdentityContainerEncrypter:(id)arg1 messageHashChecker:(id)arg2 ;
-(id)_checkMessageHashForData:(id)arg1 identifier:(id)arg2 isRetry:(char)arg3 delayedCommitBlock:(/*^block*/id*)arg4 ;
-(IDSMessageHashChecker *)messageHashChecker;
@end
