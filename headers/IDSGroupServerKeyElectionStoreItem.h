/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:16 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSData, ENGroupID, NSNumber;

@interface IDSGroupServerKeyElectionStoreItem : NSObject {

	NSData* _accountBlob;
	NSData* _signature;
	ENGroupID* _groupID;
	NSData* _forwardingTicket;
	_SecKey* _parentPg;
	_SecKey* _newPg;
	NSNumber* _parentVersion;
	NSData* _ENID;

}

@property (nonatomic,retain) NSData * accountBlob;                   //@synthesize accountBlob=_accountBlob - In the implementation block
@property (nonatomic,retain) NSData * signature;                     //@synthesize signature=_signature - In the implementation block
@property (nonatomic,retain) ENGroupID * groupID;                    //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSData * forwardingTicket;              //@synthesize forwardingTicket=_forwardingTicket - In the implementation block
@property (assign,nonatomic) _SecKey* parentPg;                      //@synthesize parentPg=_parentPg - In the implementation block
@property (assign,nonatomic) _SecKey* newPg;                         //@synthesize newPg=_newPg - In the implementation block
@property (nonatomic,retain) NSNumber * parentVersion;               //@synthesize parentVersion=_parentVersion - In the implementation block
@property (nonatomic,retain) NSData * ENID;                          //@synthesize ENID=_ENID - In the implementation block
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(ENGroupID *)groupID;
-(void)setGroupID:(ENGroupID *)arg1 ;
-(NSData *)forwardingTicket;
-(void)setAccountBlob:(NSData *)arg1 ;
-(void)setForwardingTicket:(NSData *)arg1 ;
-(void)setParentPg:(_SecKey*)arg1 ;
-(void)setNewPg:(_SecKey*)arg1 ;
-(void)setParentVersion:(NSNumber *)arg1 ;
-(void)setENID:(NSData *)arg1 ;
-(NSData *)accountBlob;
-(_SecKey*)parentPg;
-(_SecKey*)newPg;
-(NSNumber *)parentVersion;
-(NSData *)ENID;
@end

