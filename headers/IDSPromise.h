/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:20 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUTResult, NSMutableArray;

@interface IDSPromise : NSObject {

	CUTResult* _result;
	NSMutableArray* _completionBlocks;

}
+(id)all:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(char)completed;
-(id)initWithValue:(id)arg1 ;
-(id)then:(/*^block*/id)arg1 ;
-(void)fullfillWithValue:(id)arg1 ;
-(void)registerCompletionBlock:(/*^block*/id)arg1 ;
@end

