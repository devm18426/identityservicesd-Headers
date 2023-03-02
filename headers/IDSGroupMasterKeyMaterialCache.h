/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:09 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSSet;

@interface IDSGroupMasterKeyMaterialCache : NSObject {

	unsigned _numberOfBroadcastCacheMKM;
	id _currentLocalMasterKeyMaterial;
	id _nextLocalMasterKeyMaterial;
	double _automaticResetInterval;
	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _automaticResetBlock;
	/*^block*/id _inFlightResetBlock;
	NSSet* _masterKeyMaterials;
	NSSet* _membershipURIs;
	NSSet* _masterKeyIdentifiersReceivedByClient;

}

@property (nonatomic,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id automaticResetBlock;                                    //@synthesize automaticResetBlock=_automaticResetBlock - In the implementation block
@property (nonatomic,copy) id inFlightResetBlock;                                     //@synthesize inFlightResetBlock=_inFlightResetBlock - In the implementation block
@property (nonatomic,copy) NSSet * masterKeyMaterials;                                //@synthesize masterKeyMaterials=_masterKeyMaterials - In the implementation block
@property (nonatomic,copy) NSSet * membershipURIs;                                    //@synthesize membershipURIs=_membershipURIs - In the implementation block
@property (nonatomic,copy) NSSet * masterKeyIdentifiersReceivedByClient;              //@synthesize masterKeyIdentifiersReceivedByClient=_masterKeyIdentifiersReceivedByClient - In the implementation block
@property (nonatomic,retain) id currentLocalMasterKeyMaterial;                        //@synthesize currentLocalMasterKeyMaterial=_currentLocalMasterKeyMaterial - In the implementation block
@property (nonatomic,retain) id nextLocalMasterKeyMaterial;                           //@synthesize nextLocalMasterKeyMaterial=_nextLocalMasterKeyMaterial - In the implementation block
@property (assign,nonatomic) double automaticResetInterval;                           //@synthesize automaticResetInterval=_automaticResetInterval - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBroadcastCacheMKM;                    //@synthesize numberOfBroadcastCacheMKM=_numberOfBroadcastCacheMKM - In the implementation block
-(id)description;
-(id)debugDescription;
-(NSString *)identifier;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)resetRemoteMasterKeyMaterialCacheAndCancelResetInterval;
-(id)initWithIdentifier:(id)arg1 initialMembershipURIs:(id)arg2 automaticResetBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)setNextLocalMasterKeyMaterial:(id)arg1 ;
-(void)setCurrentLocalMasterKeyMaterial:(id)arg1 ;
-(id)currentLocalMasterKeyMaterial;
-(void)cleanUpMasterKeyMaterialUsingPredicate:(id)arg1 ;
-(id)nextLocalMasterKeyMaterial;
-(char)hasClientReceivedMasterKeyIdentifier:(id)arg1 ;
-(char)hasCachedMasterKeyIdentifier:(id)arg1 ;
-(void)noteClientReceiptOfMasterKeyIdentifier:(id)arg1 ;
-(id)cachedMasterKeyMaterialCollection;
-(NSSet *)masterKeyMaterials;
-(void)noteReceivedGroupMasterKeyMaterialCollection:(id)arg1 ;
-(id)groupMasterKeyCollectionToBroadcastForDestinationURI:(id)arg1 ;
-(id)localMasterKeyCollectionToBroadcastForDestinationURI:(id)arg1 ;
-(NSSet *)membershipURIs;
-(void)resetClientMasterKeyIdentifierReceipts;
-(id)initWithIdentifier:(id)arg1 initialMembershipURIs:(id)arg2 automaticResetInterval:(double)arg3 automaticResetBlock:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)setMembershipURIs:(NSSet *)arg1 ;
-(void)setMasterKeyMaterials:(NSSet *)arg1 ;
-(void)setInFlightResetBlock:(id)arg1 ;
-(void)_startAutomaticCacheResetTimerIfNeeded;
-(id)_groupMasterKeyCollectionToBroadcastForDestinationURI:(id)arg1 shouldIncludePeerKeys:(char)arg2 ;
-(id)sampleMkMCollectionToBroadcast:(id)arg1 ;
-(double)automaticResetInterval;
-(id)inFlightResetBlock;
-(id)automaticResetBlock;
-(NSSet *)masterKeyIdentifiersReceivedByClient;
-(void)setMasterKeyIdentifiersReceivedByClient:(NSSet *)arg1 ;
-(void)resetCacheWithNewMembershipURIs:(id)arg1 ;
-(void)setAutomaticResetInterval:(double)arg1 ;
-(unsigned)numberOfBroadcastCacheMKM;
-(void)setAutomaticResetBlock:(id)arg1 ;
@end
