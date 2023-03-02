/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:19 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <identityservicesd/identityservicesd-Structs.h>
@class NSRecursiveLock, NSObject, IDSDatabase, NSMutableDictionary;

@interface IDSDMessageStore : NSObject {

	NSRecursiveLock* _recursiveLock;
	NSObject*<OS_dispatch_source> _databaseCloseTimer;
	double _databaseLastUpdateTime;
	unsigned _dataProtectionClass;
	IDSDatabase* _database;
	NSMutableDictionary* _checkpoints;

}

@property (nonatomic,readonly) unsigned dataProtectionClass; 
@property (nonatomic,retain,readonly) IDSDatabase * database;              //@synthesize database=_database - In the implementation block
+(id)sharedInstance;
+(void)deleteIncomingMessageWithGUID:(id)arg1 ;
+(void)clearStatementCache;
+(id)sharedInstanceForDataProtectionClass:(unsigned)arg1 ;
+(void)markLocalDestinationDeviceUUIDForAccounts:(id)arg1 deviceUUID:(id)arg2 ;
+(void)markAllMessageAsPendingDeleteForAccounts:(id)arg1 withDestinationDevice:(id)arg2 ;
+(id)allOutgoingMessagesPendingDeleteWithLimit:(long long)arg1 ;
+(id)outgoingMessagesWithEnqueueDateOlderThan:(long long)arg1 notToDestinationDeviceID:(id)arg2 andLimit:(long long)arg3 ;
+(void)deleteExpiredIncomingMessagesOlderThan:(double)arg1 withLimit:(long long)arg2 ;
+(id)incomingMessagesUpToLimit:(unsigned long long)arg1 messageTransportType:(unsigned char)arg2 success:(char*)arg3 ;
+(id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 wantsPayload:(char)arg3 localDestinationDeviceID:(id)arg4 ;
+(id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3 ;
+(id)largestPayloadSizeAccountUUID;
+(id)allOutgoingMessagesByGUID:(id)arg1 ;
+(id)allOutgoingMessagesOnAccountGUID:(id)arg1 localDestinationDeviceID:(id)arg2 ;
+(id)allExpiredOutgoingMessages:(long long)arg1 ;
+(id)uniqueAccountGUIDsForUnsentOutgoingMessages:(long long)arg1 ;
+(id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 hardLimit:(long long)arg3 ;
+(id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 priority:(long long)arg3 hardLimit:(long long)arg4 wantsPayload:(char)arg5 messageType:(long long)arg6 success:(char*)arg7 ;
+(id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(char)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 ;
+(id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(char)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 withMessageTypes:(id)arg4 ;
+(id)unsentUrgentAccountUUIDsWithDataProtectionClass:(unsigned)arg1 withMessageTypes:(id)arg2 ;
+(void)deletePostponedMessages;
+(void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2 dataProtectionClass:(unsigned)arg3 ;
+(void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2 ;
+(void)markOutgoingMessagesAsUnsentIncludingClassD:(char)arg1 ;
+(void)markOutgoingMessagesAsUnsentForDestination:(id)arg1 ;
+(char)databaseSizeBiggerThanThreshold:(long long)arg1 ;
+(id)largestEnquedMessagesAccountUUIDOverThreshold:(long long)arg1 ;
+(void)deleteAllMessagesWithAccountGUID:(id)arg1 ;
+(id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 priority:(long long)arg3 hardLimit:(long long)arg4 ;
+(void)checkpointAndVacuumDBWithDataProtectionClass:(unsigned)arg1 ;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(IDSDatabase *)database;
-(void)deleteDatabase;
-(id)initWithDatabase:(id)arg1 ;
-(unsigned)dataProtectionClass;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(char)arg2 ;
-(void)closeDatabase;
-(void)_performInitialHousekeeping;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(void)deleteIncomingMessageWithGUID:(id)arg1 ;
-(void)__closeDatabase;
-(void)_clearDatabaseCloseTimer;
-(void)_setDatabaseCloseTimer;
-(void)markAllOutgoingMessagesAsUnsent;
-(void)clearStatementCache;
-(int)internalMigrationVersionOnDatabase;
-(void)markLocalDestinationDeviceUUIDForAccounts:(id)arg1 deviceUUID:(id)arg2 ;
-(void)updateInternalMigrationVersionOnDatabaseWithValue:(int)arg1 ;
-(id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(char)arg1 priority:(long long)arg2 ;
-(id)unsentUrgentAccountUUIDsForMessageTypes:(id)arg1 ;
-(void)markAllMessageAsPendingDeleteForAccounts:(id)arg1 withDestinationDevice:(id)arg2 ;
-(id)allOutgoingMessagesPendingDeleteWithLimit:(long long)arg1 ;
-(id)outgoingMessagesWithEnqueueDateOlderThan:(long long)arg1 notToDestinationDeviceID:(id)arg2 andLimit:(long long)arg3 ;
-(void)deletePostponedMessages:(id)arg1 classDDatabase:(id)arg2 ;
-(void)deleteExpiredIncomingMessagesOlderThan:(double)arg1 withLimit:(long long)arg2 ;
-(void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2 classDDatabase:(id)arg3 ;
-(id)incomingMessagesUpToLimit:(unsigned long long)arg1 messageTransportType:(unsigned char)arg2 success:(char*)arg3 ;
-(id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 wantsPayload:(char)arg3 localDestinationDeviceID:(id)arg4 ;
-(id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3 ;
-(long long)databaseSizeInMB;
-(id)largestPayloadSizeAccountUUID;
-(id)allOutgoingMessagesByGUID:(id)arg1 ;
-(id)allOutgoingMessagesOnAccountGUID:(id)arg1 localDestinationDeviceID:(id)arg2 ;
-(id)allExpiredOutgoingMessages:(long long)arg1 ;
-(id)uniqueAccountGUIDsForUnsentOutgoingMessages:(long long)arg1 ;
-(id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 hardLimit:(long long)arg3 ;
-(id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 priority:(long long)arg3 hardLimit:(long long)arg4 wantsPayload:(char)arg5 messageType:(long long)arg6 success:(char*)arg7 ;
-(void)checkpointAndVacuumDB;
-(id)initWithDataProtectionClass:(unsigned)arg1 ;
-(id)_incomingMessageIdentifierForMessageUUID:(id)arg1 messagePayload:(id)arg2 ;
-(void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 messageUUID:(id)arg4 messagePayload:(id)arg5 checkpointTrace:(id)arg6 isLocal:(char)arg7 dedupBehavior:(unsigned char)arg8 completionBlock:(/*^block*/id)arg9 ;
-(id)_createOutgoingMessageRecordsFromSQLRecords:(CFArrayRef)arg1 includeMessagePayloads:(char)arg2 ;
-(id)_unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 byteLimit:(unsigned long long)arg2 priority:(long long)arg3 accountUUID:(id)arg4 wantsPayload:(char)arg5 requireDuet:(char)arg6 localDestinationDeviceID:(id)arg7 ;
-(id)_unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 byteLimit:(unsigned long long)arg2 priority:(long long)arg3 accountUUID:(id)arg4 wantsPayload:(char)arg5 requireDuet:(char)arg6 localDestinationDeviceID:(id)arg7 messageTypes:(id)arg8 ;
-(void)deleteAllMessagesWithAccountGUID:(id)arg1 ;
-(void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 messageUUID:(id)arg4 messagePayload:(id)arg5 isLocal:(char)arg6 dedupBehavior:(unsigned char)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 messageUUID:(id)arg4 messagePayload:(id)arg5 checkpointTrace:(id)arg6 dedupBehavior:(unsigned char)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 messageUUID:(id)arg4 messagePayload:(id)arg5 dedupBehavior:(unsigned char)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)allUnsentOutgoingMessagesForAccounts:(id)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3 hardLimit:(long long)arg4 ;
-(id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(char)arg1 priority:(long long)arg2 messageTypes:(id)arg3 ;
-(id)unsentNonUrgentMessagesForAccountUUID:(id)arg1 priority:(long long)arg2 byteLimit:(unsigned long long)arg3 upToLimit:(unsigned long long)arg4 localDestinationDeviceID:(id)arg5 messageTypes:(id)arg6 ;
-(id)unsentNonUrgentMessagesForAccountUUID:(id)arg1 priority:(long long)arg2 byteLimit:(unsigned long long)arg3 upToLimit:(unsigned long long)arg4 localDestinationDeviceID:(id)arg5 ;
-(id)duetIdentifiersOverrideForAccountWithGUID:(id)arg1 priority:(long long)arg2 ;
-(id)largestEnquedMessagesAmountAccountUUID;
-(void)storeOutgoingMessageWithSendParameters:(id)arg1 guid:(id)arg2 canSend:(char)arg3 canBypassSimilarMessages:(char)arg4 fromQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)markOutgoingMessageWithGUID:(id)arg1 asSent:(char)arg2 ;
-(void)markAllOutgoingMessagesAsUnsentForLocalDestination:(id)arg1 ;
@end
