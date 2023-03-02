/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:03 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSArray;

@interface IDSTapToRadarPushPayload : NSObject {

	NSString* _errorCode;
	NSString* _serverErrorDetail;
	NSString* _promptMessage;
	NSString* _promptTitle;
	NSString* _radarTitle;
	NSString* _radarDescription;
	NSString* _radarComponentName;
	NSString* _radarComponentVersion;
	NSNumber* _radarComponentId;
	NSString* _radarClassification;
	NSString* _radarReproducibility;
	NSArray* _radarKeywords;

}

@property (nonatomic,readonly) NSString * errorCode;                          //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) NSString * serverErrorDetail;                  //@synthesize serverErrorDetail=_serverErrorDetail - In the implementation block
@property (nonatomic,readonly) NSString * promptMessage;                      //@synthesize promptMessage=_promptMessage - In the implementation block
@property (nonatomic,readonly) NSString * promptTitle;                        //@synthesize promptTitle=_promptTitle - In the implementation block
@property (nonatomic,readonly) NSString * radarTitle;                         //@synthesize radarTitle=_radarTitle - In the implementation block
@property (nonatomic,readonly) NSString * radarDescription;                   //@synthesize radarDescription=_radarDescription - In the implementation block
@property (nonatomic,readonly) NSString * radarComponentName;                 //@synthesize radarComponentName=_radarComponentName - In the implementation block
@property (nonatomic,readonly) NSString * radarComponentVersion;              //@synthesize radarComponentVersion=_radarComponentVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * radarComponentId;                   //@synthesize radarComponentId=_radarComponentId - In the implementation block
@property (nonatomic,readonly) NSString * radarClassification;                //@synthesize radarClassification=_radarClassification - In the implementation block
@property (nonatomic,readonly) NSString * radarReproducibility;               //@synthesize radarReproducibility=_radarReproducibility - In the implementation block
@property (nonatomic,readonly) NSArray * radarKeywords;                       //@synthesize radarKeywords=_radarKeywords - In the implementation block
-(NSString *)errorCode;
-(NSString *)promptTitle;
-(NSString *)radarDescription;
-(NSString *)radarComponentName;
-(NSString *)radarComponentVersion;
-(NSString *)radarTitle;
-(NSString *)radarClassification;
-(id)initWithPushPayload:(id)arg1 ;
-(NSString *)serverErrorDetail;
-(NSString *)promptMessage;
-(NSNumber *)radarComponentId;
-(NSString *)radarReproducibility;
-(NSArray *)radarKeywords;
@end
