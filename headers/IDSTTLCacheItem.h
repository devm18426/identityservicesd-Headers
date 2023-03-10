/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:17 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface IDSTTLCacheItem : NSObject {

	NSString* _key;
	id _object;
	NSDate* _evictionDate;

}

@property (nonatomic,retain) NSString * key;                     //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id object;                          //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSDate * evictionDate;              //@synthesize evictionDate=_evictionDate - In the implementation block
-(void)setObject:(id)arg1 ;
-(id)object;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSDate *)evictionDate;
-(void)setEvictionDate:(NSDate *)arg1 ;
-(id)initWithObject:(id)arg1 key:(id)arg2 ;
-(void)bumpEvictionDateToSecondsFromNow:(double)arg1 ;
@end

