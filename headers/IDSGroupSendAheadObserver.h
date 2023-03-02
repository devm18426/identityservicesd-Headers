/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:05 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ENGroupContextObserverMiddleware.h>

@class NSString;

@interface IDSGroupSendAheadObserver : NSObject <ENGroupContextObserverMiddleware> {

	NSString* _topic;

}

@property (nonatomic,retain) NSString * topic;                      //@synthesize topic=_topic - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)topic;
-(void)setTopic:(NSString *)arg1 ;
-(void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3 ;
-(void)_sendAheadGroup:(id)arg1 withContext:(id)arg2 ;
-(id)initWithProtectionSpace:(long long)arg1 ;
@end
