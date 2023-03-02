/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:47:57 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface IDSDRegistrationListener : NSObject {

	NSMutableSet* _completionBlocks;

}

@property (nonatomic,retain) NSMutableSet * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSMutableSet *)completionBlocks;
-(void)setCompletionBlocks:(NSMutableSet *)arg1 ;
-(void)_callBlocksWithResult:(char)arg1 registrations:(id)arg2 error:(id)arg3 ;
-(id)addBlockForRegistrationCompletion:(/*^block*/id)arg1 ;
-(void)removeBlockForIdentifier:(id)arg1 ;
-(void)registrationController:(id)arg1 allRegistrationsSucceeded:(id)arg2 ;
@end

