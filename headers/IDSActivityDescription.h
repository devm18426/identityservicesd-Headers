/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:24 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface IDSActivityDescription : NSObject <NSSecureCoding> {

	double _timeSubscribed;
	NSString* _activity;
	NSString* _subActivity;

}

@property (assign,nonatomic) double timeSubscribed;               //@synthesize timeSubscribed=_timeSubscribed - In the implementation block
@property (nonatomic,retain) NSString * activity;                 //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSString * subActivity;              //@synthesize subActivity=_subActivity - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)activity;
-(void)setActivity:(NSString *)arg1 ;
-(NSString *)subActivity;
-(void)setSubActivity:(NSString *)arg1 ;
-(void)setTimeSubscribed:(double)arg1 ;
-(double)timeSubscribed;
@end

