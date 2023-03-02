/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:22 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSMutableDictionary, NSSet, NSObject, NSArray, IDSServiceProperties;

@interface IDSDServiceController : NSObject {

	NSMapTable* _services;
	NSMapTable* _servicesToNameMap;
	NSMapTable* _servicesToTopicMap;
	NSMutableDictionary* _deviceIDToSubServicesMap;
	NSSet* _allAdHocServices;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * allServices; 
@property (nonatomic,__weak,readonly) NSArray * allTinkerServices; 
@property (nonatomic,__weak,readonly) NSArray * allServicesStrings; 
@property (nonatomic,readonly) NSSet * allAdHocServices;                          //@synthesize allAdHocServices=_allAdHocServices - In the implementation block
@property (nonatomic,readonly) NSSet * allPrimaryServices; 
@property (nonatomic,readonly) IDSServiceProperties * iTunesService; 
@property (nonatomic,readonly) IDSServiceProperties * iCloudService; 
+(id)sharedInstance;
+(char)shouldLoadService:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)userDefaults;
-(void)updateSubServices:(id)arg1 forService:(id)arg2 deviceUniqueID:(id)arg3 ;
-(id)serviceLoader;
-(NSArray *)allServices;
-(id)serviceWithIdentifier:(id)arg1 ;
-(id)serviceWithName:(id)arg1 ;
-(void)_loadServices;
-(id)serviceWithPushTopic:(id)arg1 ;
-(NSArray *)allServicesStrings;
-(NSArray *)allTinkerServices;
-(id)adHocServicesForIdentifier:(id)arg1 ;
-(id)linkedServicesForService:(id)arg1 ;
-(IDSServiceProperties *)iCloudService;
-(NSSet *)allPrimaryServices;
-(IDSServiceProperties *)iTunesService;
-(id)allServicesWithAdHocServiceType:(unsigned)arg1 ;
-(void)_loadSubServices;
-(void)_loadService:(id)arg1 ;
-(id)_currentSubServicesForDevice:(id)arg1 superService:(id)arg2 ;
-(void)_updateSubServicesForDevice:(id)arg1 superService:(id)arg2 newSubservices:(id)arg3 ;
-(void)_saveSubServices;
-(char)_anyDeviceUsingSubService:(id)arg1 superService:(id)arg2 ;
-(void)_unloadServiceWithName:(id)arg1 ;
-(void)_loadSubServiceWithName:(id)arg1 usingService:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_combinedServicesForAllDevices;
-(NSSet *)allAdHocServices;
@end

