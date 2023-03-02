/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:10 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSUTunTimingEvent.h>

@class NSString;

@interface IDSUTunTimingEventIncoming : NSObject <IDSUTunTimingEvent> {

	double _timestamp;
	double _duration;
	double _processTime;
	double _compressionTime;
	double _kernelTime;
	long long _bytes;

}

@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(void)appendToString:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 duration:(double)arg2 processTime:(double)arg3 compressionTime:(double)arg4 kernelTime:(double)arg5 bytes:(long long)arg6 ;
@end

