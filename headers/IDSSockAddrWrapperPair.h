/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:10 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IDSSockAddrWrapper;

@interface IDSSockAddrWrapperPair : NSObject <NSCopying> {

	IDSSockAddrWrapper* _localAddress;
	IDSSockAddrWrapper* _remoteAddress;

}

@property (nonatomic,retain,readonly) IDSSockAddrWrapper * localAddress;               //@synthesize localAddress=_localAddress - In the implementation block
@property (nonatomic,retain,readonly) IDSSockAddrWrapper * remoteAddress;              //@synthesize remoteAddress=_remoteAddress - In the implementation block
+(id)wrapperPairWithLocalAddress:(id)arg1 remoteAddress:(id)arg2 ;
+(id)shortDescriptionForLocalAddress:(id)arg1 remoteAddress:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)shortDescription;
-(IDSSockAddrWrapper *)remoteAddress;
-(IDSSockAddrWrapper *)localAddress;
-(id)initWithLocalAddress:(id)arg1 remoteAddress:(id)arg2 ;
-(char)isEqualToSockAddrWrapperPair:(id)arg1 ;
@end

