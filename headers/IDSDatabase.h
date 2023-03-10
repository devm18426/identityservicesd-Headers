/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:23 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSDatabase : NSObject {

	unsigned _dataProtectionClass;
	NSString* _filename;

}

@property (assign,nonatomic) unsigned dataProtectionClass;              //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (nonatomic,copy) NSString * filename;                         //@synthesize filename=_filename - In the implementation block
-(id)init;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)deleteDatabase;
-(unsigned)dataProtectionClass;
-(void)setDataProtectionClass:(unsigned)arg1 ;
-(void)ensureDatabaseIsInitialized;
-(id)initWithDataProtectionClass:(unsigned)arg1 ;
-(id)initWithDataProtectionClass:(unsigned)arg1 filename:(id)arg2 ;
@end

