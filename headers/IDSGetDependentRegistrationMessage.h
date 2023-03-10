/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:24 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface IDSGetDependentRegistrationMessage : FTIDSMessage <NSCopying> {

	NSArray* _responseRegistrations;

}

@property (copy) NSArray * responseRegistrations;              //@synthesize responseRegistrations=_responseRegistrations - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)command;
-(id)messageBody;
-(long long)responseCommand;
-(id)requiredKeys;
-(char)wantsHTTPHeaders;
-(char)wantsBinaryPush;
-(char)requiresPushTokenKeys;
-(char)wantsCompressedBody;
-(char)wantsBagKey;
-(int)maxTimeoutRetries;
-(char)wantsExtraTimeoutRetry;
-(double)anisetteHeadersTimeout;
-(id)bagKey;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSArray *)responseRegistrations;
-(void)setResponseRegistrations:(NSArray *)arg1 ;
@end

