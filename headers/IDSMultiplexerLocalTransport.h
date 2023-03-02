/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:47:56 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/IDSMultiplexerTransport.h>

@class NSString, NSMutableArray;

@interface IDSMultiplexerLocalTransport : NSObject <IDSMultiplexerTransport> {

	NSString* _identifier;
	NSMutableArray* _portSignatures;
	NSMutableArray* _routedConnections;
	/*^block*/id _readHandler;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) int packetizationHeadroom; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(int)packetizationHeadroom;
-(void)setPacketBufferReadHandler:(/*^block*/id)arg1 ;
-(id)routeClientConnections:(id)arg1 ;
-(void)cancelClientConnection:(id)arg1 ;
-(char)tryConsumePacketBuffer:(SCD_Struct_ID4*)arg1 ;
@end

