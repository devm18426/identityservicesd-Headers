/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:17 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IDSPersistentMapMetadata : NSObject <NSCopying, NSSecureCoding> {

	long long _versionNumber;

}

@property (nonatomic,readonly) long long versionNumber;              //@synthesize versionNumber=_versionNumber - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)versionNumber;
-(id)initWithVersionNumber:(long long)arg1 ;
@end
