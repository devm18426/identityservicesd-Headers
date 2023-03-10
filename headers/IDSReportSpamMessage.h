/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:16 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>

@class NSArray, NSString;

@interface IDSReportSpamMessage : FTIDSMessage {

	NSArray* _spamMessages;
	NSString* _responseMessage;
	NSArray* _responseSpamMessages;

}

@property (copy) NSArray * spamMessages;                      //@synthesize spamMessages=_spamMessages - In the implementation block
@property (copy) NSString * responseMessage;                  //@synthesize responseMessage=_responseMessage - In the implementation block
@property (copy) NSArray * responseSpamMessages;              //@synthesize responseSpamMessages=_responseSpamMessages - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)messageBody;
-(id)requiredKeys;
-(int)maxTimeoutRetries;
-(char)wantsExtraTimeoutRetry;
-(char)wantsManagedRetries;
-(double)anisetteHeadersTimeout;
-(char)wantsBodySignature;
-(id)bagKey;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setResponseMessage:(NSString *)arg1 ;
-(NSString *)responseMessage;
-(void)setSpamMessages:(NSArray *)arg1 ;
-(NSArray *)spamMessages;
-(NSArray *)responseSpamMessages;
-(void)setResponseSpamMessages:(NSArray *)arg1 ;
@end

