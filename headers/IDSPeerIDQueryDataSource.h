/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:47:58 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSPeerIDQueryHandlerDataSource.h>

@class IDSPeerIDManager, IDSIDStatusQueryController, NSString;

@interface IDSPeerIDQueryDataSource : NSObject <IDSPeerIDQueryHandlerDataSource> {

	IDSPeerIDManager* _peerIDManager;
	IDSIDStatusQueryController* _IDStatusQueryController;

}

@property (assign,nonatomic,__weak) IDSPeerIDManager * peerIDManager;                           //@synthesize peerIDManager=_peerIDManager - In the implementation block
@property (nonatomic,retain) IDSIDStatusQueryController * IDStatusQueryController;              //@synthesize IDStatusQueryController=_IDStatusQueryController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPeerIDManager:(id)arg1 IDStatusQueryController:(id)arg2 ;
-(IDSPeerIDManager *)peerIDManager;
-(char)hasPeerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(IDSIDStatusQueryController *)IDStatusQueryController;
-(char)hasQueryResultsForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(id)initWithPeerIDManager:(id)arg1 ;
-(void)setPeerIDManager:(IDSPeerIDManager *)arg1 ;
-(void)setIDStatusQueryController:(IDSIDStatusQueryController *)arg1 ;
@end

