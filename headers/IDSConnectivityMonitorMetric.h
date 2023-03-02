/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:00 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTRTCMetric.h>

@class NSDictionary, IDSConnectivityMonitorMetricProperties, NSString;

@interface IDSConnectivityMonitorMetric : NSObject <CUTRTCMetric> {

	IDSConnectivityMonitorMetricProperties* _properties;

}

@property (nonatomic,retain) IDSConnectivityMonitorMetricProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) unsigned short rtcType; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithProperties:(id)arg1 ;
-(IDSConnectivityMonitorMetricProperties *)properties;
-(void)setProperties:(IDSConnectivityMonitorMetricProperties *)arg1 ;
-(unsigned short)rtcType;
@end

