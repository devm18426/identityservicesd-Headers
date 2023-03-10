/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2023 at 12:48:24 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/Contents/MacOS/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct channel* channelRef;

typedef struct channel_ring_desc* channel_ring_descRef;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	unsigned short field5;
} SCD_Struct_ID2;

typedef struct {
	char* field1;
	unsigned short field2;
	int field3;
	unsigned short field4[12];
	long long field5;
	unsigned char field6;
	unsigned short field7;
	unsigned char field8;
	char field9;
	char field10;
	unsigned short field11;
	SCD_Struct_ID2 field12;
	char field13;
	unsigned field14;
} SCD_Struct_ID3;

typedef struct {
	char* field1;
	unsigned long long field2;
	long long field3;
	long long field4;
	unsigned field5;
	char field6;
	char field7;
	char field8;
	char field9;
	char field10;
	char field11;
	unsigned field12;
	sockaddr_storage field13;
	sockaddr_storage field14;
	unsigned short field15;
	unsigned char field16;
	int field17;
	SCD_Struct_ID3 field18[8];
	char field19;
	char field20;
	int field21;
	double field22;
	unsigned long long field23;
	unsigned char field24[0];
} SCD_Struct_ID4;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct nexus_controller* nexus_controllerRef;

typedef struct _NSZone* NSZoneRef;

typedef struct _SecMPFullIdentity* SecMPFullIdentityRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned field1[8];
} SCD_Struct_ID10;

typedef struct IDSSockAddrPairTable {
	int iNumPair;
	int iMaxNumPair;
	IDSSockAddrPair pairs;
	int echoCount;
	unsigned char digestKeyData[1472];
	int digestKeyDataLen;
} IDSSockAddrPairTable;

typedef struct sockaddr_storage {
	unsigned char ss_len;
	unsigned char ss_family;
	char __ss_pad1[6];
	long long __ss_align;
	char __ss_pad2[112];
} sockaddr_storage;

typedef struct {
	char* field1;
	unsigned long long field2;
	long long field3;
	long long field4;
	unsigned field5;
	char field6;
	char field7;
	char field8;
	char field9;
	char field10;
	char field11;
	unsigned field12;
	SCD_Struct_ID3 field13;
	sockaddr_storage field14;
	unsigned short field15;
	unsigned char field16;
	int field17;
	sockaddr_storage field18[8];
	char field19;
	char field20;
	int field21;
	double field22;
	unsigned long long field23;
	unsigned char field24[0];
} SCD_Struct_ID13;

typedef struct __SecKey* SecKeyRef;

typedef struct NEVirtualInterface_s* NEVirtualInterface_sRef;

typedef struct IDSPortMap {
	unsigned long long ports[1024];
	unsigned short lastAssignedPort;
} IDSPortMap;

typedef struct SimpleUInt32ToObjectTable {
	int tableSize;
	SimpleUInt32ToObjectTableElement elements;
	int elementCount;
} SimpleUInt32ToObjectTable;

typedef struct IDSDCI_OutgoingPacketList {
	id genericConnection[64];
	void* sources[64];
	void* destinations[64];
	unsigned char upperProtocols[64];
	void* bytes[64];
	unsigned long long bytesLengths[64];
	unsigned numPackets;
	unsigned nextPacket;
} IDSDCI_OutgoingPacketList;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct cssm_data {
	unsigned long long Length;
	char* Data;
} cssm_data;

typedef struct tagSRTPCryptContext {
	cssm_data secAsn1Key;
	_CCCryptor ccCryptorRef;
	unsigned char ccContext[404];
} tagSRTPCryptContext;

typedef struct tagSRTPINFO {
	int fSRTPInitialized;
	int fSRTPEnded;
	int fCancelled;
	opaque_pthread_mutex_t xWait;
	opaque_pthread_cond_t cWait;
	unsigned dwSSRC;
	unsigned dwRTPROC;
	unsigned short wFirstRTPSeq;
	unsigned short wHighestRTPSeq;
	unsigned dwFirstRTCPSeq;
	unsigned dwHighestRTCPSeq;
	unsigned char MasterKey[16];
	unsigned char MasterSalt[14];
	unsigned char SessionKey[32];
	unsigned char SessionSalt[14];
	unsigned dwEncrCountRTPHi;
	unsigned dwEncrCountRTPLo;
	unsigned dwEncrCountRTCPHi;
	unsigned dwEncrCountRTCPLo;
	unsigned dwDerivationRate;
	tagSRTPCryptContext cryptContext;
	unsigned short wPreCalcSeq;
	unsigned char pbNextKeyStream[1600];
	int srtpProtocolVersion;
	SRTPReplayProtection replayWindow;
} tagSRTPINFO;

typedef struct {
	tagSRTPINFO SRTPSend;
	tagSRTPINFO SRTPRecv;
} SCD_Struct_ID23;

typedef struct SimpleNSStringToObjectTable {
	int tableSize;
	SimpleNSStringToObjectTableElement elements;
	int elementCount;
} SimpleNSStringToObjectTable;

typedef struct NACContextOpaque_* NACContextOpaque_Ref;

typedef struct channel_attr* channel_attrRef;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned field3;
	unsigned long long field4;
	unsigned field5;
	char* field6;
} SCD_Struct_ID27;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct {
	unsigned ktVersion : 1;
	unsigned ngmVersion : 1;
} SCD_Struct_ID29;

typedef struct _SecOTRSession* SecOTRSessionRef;

typedef struct _SecMPPublicIdentity* SecMPPublicIdentityRef;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	unsigned status : 1;
} SCD_Struct_ID33;

typedef const struct __CFDictionary* CFDictionaryRef;

typedef const struct __CFString* CFStringRef;

typedef const struct __CFData* CFDataRef;

