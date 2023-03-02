/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:18 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IMTimer;

@interface IDSOTRSessionInfo : NSObject {

	NSString* _token;
	char _isNegotiating;
	char _isReady;
	char _isSuspended;
	double _lastStartTime;
	IMTimer* _negotiationTimer;
	unsigned _negotiationCount;
	/*^block*/id _otrTestBlock;

}

@property (nonatomic,readonly) NSString * token;                     //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) char isNegotiating;                     //@synthesize isNegotiating=_isNegotiating - In the implementation block
@property (assign,nonatomic) char isReady;                           //@synthesize isReady=_isReady - In the implementation block
@property (assign,nonatomic) char isSuspended;                       //@synthesize isSuspended=_isSuspended - In the implementation block
@property (assign,nonatomic) double lastStartTime;                   //@synthesize lastStartTime=_lastStartTime - In the implementation block
@property (assign,nonatomic) unsigned negotiationCount;              //@synthesize negotiationCount=_negotiationCount - In the implementation block
@property (nonatomic,copy) id otrTestBlock;                          //@synthesize otrTestBlock=_otrTestBlock - In the implementation block
-(void)dealloc;
-(NSString *)token;
-(char)isReady;
-(char)isSuspended;
-(id)initWithToken:(id)arg1 ;
-(void)setIsReady:(char)arg1 ;
-(void)setIsSuspended:(char)arg1 ;
-(void)setLastStartTime:(double)arg1 ;
-(double)lastStartTime;
-(void)removeNegotiationTimer;
-(void)_handleNegotiationTimeout;
-(void)setNegotiationTimer;
-(char)isNegotiating;
-(void)setIsNegotiating:(char)arg1 ;
-(unsigned)negotiationCount;
-(void)setNegotiationCount:(unsigned)arg1 ;
-(id)otrTestBlock;
-(void)setOtrTestBlock:(id)arg1 ;
@end

