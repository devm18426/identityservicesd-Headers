/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:08 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSUTunPeerDelegate <NSObject>
@required
-(void)peerConnectivityChanged:(id)arg1;
-(void)peer:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(char)arg7 expectsPeerResponse:(char)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(char)arg12 connectionType:(long long)arg13 didWakeHint:(char)arg14;
-(void)peer:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(char)arg7 expectsPeerResponse:(char)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(char)arg12 connectionType:(long long)arg13 didWakeHint:(char)arg14;
-(void)peer:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(char)arg7 expectsPeerResponse:(char)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(char)arg12 connectionType:(long long)arg13 didWakeHint:(char)arg14;
-(void)peer:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 fromID:(id)arg3 messageID:(id)arg4 peerResponseIdentifier:(id)arg5 priority:(long long)arg6 connectionType:(long long)arg7;
-(void)peerHasSpaceForUrgentMessages:(id)arg1 dataProtectionClass:(unsigned)arg2 withTypes:(id)arg3;
-(void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 withTypes:(id)arg4;
-(void)peerNearbyStateChanged:(id)arg1 forceNotify:(char)arg2;
-(void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3;

@end

