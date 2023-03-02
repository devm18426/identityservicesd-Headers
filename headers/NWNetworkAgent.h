/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:10 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSUUID;


@protocol NWNetworkAgent
@property (nonatomic,copy) NSString * agentDescription; 
@property (nonatomic,copy) NSUUID * agentUUID; 
@property (assign,getter=isActive,nonatomic) char active; 
@property (assign,getter=isKernelActivated,nonatomic) char kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) char userActivated; 
@property (assign,getter=isVoluntary,nonatomic) char voluntary; 
@property (assign,getter=isSpecificUseOnly,nonatomic) char specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) char networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) char nexusProvider; 
@property (assign,nonatomic) char supportsListenRequests; 
@property (assign,nonatomic) char supportsBrowseRequests; 
@property (assign,nonatomic) char supportsResolveRequests; 
@property (assign,nonatomic) char requiresAssert; 
@property (assign,nonatomic) char updateClientsImmediately; 
@optional
-(char)startAgentWithOptions:(id)arg1;
-(char)assertAgentWithOptions:(id)arg1;
-(void)unassertAgentWithOptions:(id)arg1;
-(char)requestNexusWithOptions:(id)arg1;
-(void)closeNexusWithOptions:(id)arg1;
-(char)isSpecificUseOnly;
-(void)setSpecificUseOnly:(char)arg1;
-(char)isNetworkProvider;
-(void)setNetworkProvider:(char)arg1;
-(char)isNexusProvider;
-(void)setNexusProvider:(char)arg1;
-(char)supportsListenRequests;
-(void)setSupportsListenRequests:(char)arg1;
-(char)supportsBrowseRequests;
-(void)setSupportsBrowseRequests:(char)arg1;
-(char)supportsResolveRequests;
-(void)setSupportsResolveRequests:(char)arg1;
-(char)requiresAssert;
-(void)setRequiresAssert:(char)arg1;
-(char)updateClientsImmediately;
-(void)setUpdateClientsImmediately:(char)arg1;

@required
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1;
-(char)isActive;
-(void)setActive:(char)arg1;
-(id)copyAgentData;
-(void)setKernelActivated:(char)arg1;
-(void)setUserActivated:(char)arg1;
-(void)setVoluntary:(char)arg1;
-(NSString *)agentDescription;
-(void)setAgentDescription:(id)arg1;
-(NSUUID *)agentUUID;
-(void)setAgentUUID:(id)arg1;
-(char)isKernelActivated;
-(char)isUserActivated;
-(char)isVoluntary;

@end

