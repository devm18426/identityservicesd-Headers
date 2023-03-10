/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:03 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSDRegistrationControl.h>

@protocol IDSDRegistrationControl <NSObject>
@required
-(long long)registrationStateForRegistrationType:(long long)arg1 error:(id*)arg2;
-(char)updateRegistrationType:(long long)arg1 toState:(long long)arg2 error:(id*)arg3;

@end


@class NSString;

@interface IDSDRegistrationControl : NSObject <IDSDRegistrationControl>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(long long)registrationStateForRegistrationType:(long long)arg1 error:(id*)arg2 ;
-(char)_setKeychainData:(id)arg1 withServiceName:(id)arg2 withAccountKey:(id)arg3 withIDSRegistrationAccesssGroup:(id)arg4 error:(int)arg5 ;
-(char)updateRegistrationType:(long long)arg1 toState:(long long)arg2 error:(id*)arg3 ;
@end

