/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:00 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSError;

@interface IDSValidationSigningResult : NSObject {

	NSData* _resultData;
	NSData* _serverKey;
	NSError* _error;

}

@property (nonatomic,readonly) NSData * resultData;              //@synthesize resultData=_resultData - In the implementation block
@property (nonatomic,readonly) NSData * serverKey;               //@synthesize serverKey=_serverKey - In the implementation block
@property (nonatomic,readonly) NSError * error;                  //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(NSData *)resultData;
-(id)initWithResultData:(id)arg1 serverKey:(id)arg2 error:(id)arg3 ;
-(NSData *)serverKey;
@end

