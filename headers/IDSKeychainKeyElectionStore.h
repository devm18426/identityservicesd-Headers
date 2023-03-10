/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:02 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSKeychainWrapper;

@interface IDSKeychainKeyElectionStore : NSObject {

	IDSKeychainWrapper* _keychainWrapper;

}

@property (nonatomic,readonly) IDSKeychainWrapper * keychainWrapper;              //@synthesize keychainWrapper=_keychainWrapper - In the implementation block
+(char)isItemNotFoundError:(id)arg1 ;
-(IDSKeychainWrapper *)keychainWrapper;
-(id)initWithKeychainWrapper:(id)arg1 ;
-(id)_fullClusterFromData:(id)arg1 error:(id*)arg2 ;
-(id)identifierForFullCluster:(id)arg1 ;
-(void)_storeData:(id)arg1 forIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)fetchFullClusterWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)storeFullCluster:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)removeFullClusterWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_keychainEntryForCluster:(id)arg1 ;
@end

