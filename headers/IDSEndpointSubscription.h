/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:13 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, IDSURI, NSArray, NSObject, NSMutableDictionary;

@interface IDSEndpointSubscription : NSObject {

	NSString* _serviceIdentifier;
	IDSURI* _localURI;
	NSArray* _subscribedURIs;
	/*^block*/id _resolvedEndpointsDidUpdateHandler;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _endpointMap;
	NSString* _peerIDManagerToken;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * endpointMap;                 //@synthesize endpointMap=_endpointMap - In the implementation block
@property (nonatomic,readonly) NSString * peerIDManagerToken;                   //@synthesize peerIDManagerToken=_peerIDManagerToken - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier;                    //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,readonly) IDSURI * localURI;                               //@synthesize localURI=_localURI - In the implementation block
@property (nonatomic,readonly) NSArray * subscribedURIs;                        //@synthesize subscribedURIs=_subscribedURIs - In the implementation block
@property (nonatomic,copy) id resolvedEndpointsDidUpdateHandler;                //@synthesize resolvedEndpointsDidUpdateHandler=_resolvedEndpointsDidUpdateHandler - In the implementation block
-(void)dealloc;
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)serviceIdentifier;
-(IDSURI *)localURI;
-(void)initializeWithCompletion:(/*^block*/id)arg1 ;
-(id)resolvedEndpoints;
-(id)peerIDManager;
-(id)initWithServiceIdentifier:(id)arg1 localURI:(id)arg2 subscribedURIs:(id)arg3 queue:(id)arg4 ;
-(void)setResolvedEndpointsDidUpdateHandler:(id)arg1 ;
-(NSArray *)subscribedURIs;
-(void)_registerEndpointQueryCompletionBlock;
-(void)setEndpointMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)endpointMap;
-(void)_noteSourceDidDiscoverEndpointMap:(id)arg1 forLocalURI:(id)arg2 ;
-(NSString *)peerIDManagerToken;
-(void)_signalDidUpdateEndpoints;
-(id)resolvedEndpointsDidUpdateHandler;
@end
