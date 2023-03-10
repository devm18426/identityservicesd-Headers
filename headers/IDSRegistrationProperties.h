/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:11 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface IDSRegistrationProperties : NSObject {

	NSArray* _interesting;
	NSArray* _requireAll;
	NSArray* _lackAll;

}

@property (nonatomic,retain) NSArray * interesting;              //@synthesize interesting=_interesting - In the implementation block
@property (nonatomic,retain) NSArray * requireAll;               //@synthesize requireAll=_requireAll - In the implementation block
@property (nonatomic,retain) NSArray * lackAll;                  //@synthesize lackAll=_lackAll - In the implementation block
-(NSArray *)interesting;
-(NSArray *)requireAll;
-(NSArray *)lackAll;
-(void)setInteresting:(NSArray *)arg1 ;
-(void)setRequireAll:(NSArray *)arg1 ;
-(void)setLackAll:(NSArray *)arg1 ;
@end

