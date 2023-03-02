/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:11 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, IDSQueryKeyTransparencyContext;

@interface IDSPeerIDValue : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _endpoints;
	IDSQueryKeyTransparencyContext* _keyTransparencyContext;

}

@property (nonatomic,readonly) NSArray * endpoints;                                                  //@synthesize endpoints=_endpoints - In the implementation block
@property (nonatomic,readonly) IDSQueryKeyTransparencyContext * keyTransparencyContext;              //@synthesize keyTransparencyContext=_keyTransparencyContext - In the implementation block
+(char)supportsSecureCoding;
+(id)peerIDValueWithEndpoints:(id)arg1 keyTransparencyContext:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)endpoints;
-(IDSQueryKeyTransparencyContext *)keyTransparencyContext;
-(id)initWithEndpoints:(id)arg1 keyTransparencyContext:(id)arg2 ;
-(char)isEqualToPeerIDValue:(id)arg1 ;
@end
