/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:47:58 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/IDSRegistrationKeyManagerKeyPairProvider.h>

@protocol IDSRegistrationKeyManagerKeyPairProvider <NSObject>
@required
-(void)copyRegistrationKeyPairForIdentifier:(id)arg1 publicKey:(*)arg2 privateKey:(*)arg3 keyPairSignature:(id*)arg4 isMigratedSignature:(char*)arg5 isUpgradePending:(char*)arg6;

@end


@class NSString;

@interface IDSRegistrationKeyManagerKeyPairProvider : NSObject <IDSRegistrationKeyManagerKeyPairProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)copyRegistrationKeyPairForIdentifier:(id)arg1 publicKey:(_SecKey*)arg2 privateKey:(_SecKey*)arg3 keyPairSignature:(id*)arg4 isMigratedSignature:(char*)arg5 isUpgradePending:(char*)arg6 ;
@end

