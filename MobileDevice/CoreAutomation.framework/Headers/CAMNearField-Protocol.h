//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreAutomation/NSObject-Protocol.h>

@class CAMReturnArray, CAMReturnBool, CAMReturnData, CAMReturnDictionary, CAMReturnInteger, CAMReturnString, CAMReturnVoid, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol CAMNearField <NSObject>

@optional
- (CAMReturnArray *)allAppletIdentifiers;
- (CAMReturnArray *)allAppletIdentifiers:(NSNumber *)arg1;
- (CAMReturnArray *)allApplets;
- (CAMReturnArray *)allApplets:(NSNumber *)arg1;
- (CAMReturnDictionary *)appletWithIdentifier:(NSString *)arg1;
- (CAMReturnDictionary *)appletWithIdentifier:(NSString *)arg1 useIcf:(NSNumber *)arg2;
- (CAMReturnVoid *)authorizeContactlessPaymentWithAuthToken:(NSData *)arg1;
- (CAMReturnDictionary *)authorizeEcommerceTransaction:(NSDictionary *)arg1 authorization:(NSData *)arg2;
- (CAMReturnInteger *)buttonDoublePressCount;
- (CAMReturnArray *)callbackList;
- (CAMReturnDictionary *)checkNdefSupportsReadAndWrite;
- (CAMReturnBool *)checkPresence;
- (CAMReturnVoid *)clearCallbackList;
- (CAMReturnVoid *)clearEventData;
- (CAMReturnBool *)connectTag:(NSDictionary *)arg1;
- (CAMReturnBool *)connectToServer:(NSString *)arg1;
- (CAMReturnBool *)contactlessPaymentSessionRunning;
- (CAMReturnVoid *)deauthorizeContactlessPayment;
- (CAMReturnDictionary *)defaultApplet;
- (CAMReturnBool *)deleteAllApplets;
- (CAMReturnBool *)deleteAllApplets:(NSNumber *)arg1;
- (CAMReturnBool *)deleteAllAppletsAndQueueServerConnection:(NSNumber *)arg1;
- (CAMReturnBool *)deleteAllAppletsAndQueueServerConnection:(NSNumber *)arg1 useIcf:(NSNumber *)arg2;
- (CAMReturnBool *)deleteAppletsWithIdentifiers:(NSArray *)arg1 queueServerConnection:(NSNumber *)arg2;
- (CAMReturnBool *)deleteAppletsWithIdentifiers:(NSArray *)arg1 queueServerConnection:(NSNumber *)arg2 useIcf:(NSNumber *)arg3;
- (CAMReturnBool *)disconnectTag;
- (CAMReturnVoid *)enableQuickPayForButtonPress:(NSString *)arg1 checkRestricted:(NSNumber *)arg2 performActivate:(NSNumber *)arg3 performAuth:(NSNumber *)arg4 startEmulation:(NSNumber *)arg5;
- (CAMReturnData *)endEventData;
- (CAMReturnBool *)fieldDetectSessionRunning;
- (CAMReturnInteger *)fieldDetectSuspended;
- (CAMReturnBool *)fieldPresent;
- (CAMReturnBool *)formatNdefWithKey:(NSData *)arg1;
- (CAMReturnVoid *)insertLogText:(NSString *)arg1 toFile:(NSString *)arg2;
- (CAMReturnInteger *)isFieldDetectRunning;
- (CAMReturnBool *)isInRestrictedMode;
- (CAMReturnBool *)isInRestrictedMode:(NSNumber *)arg1;
- (CAMReturnBool *)listenForDoubleButtonPressWithinTimeout:(NSNumber *)arg1;
- (CAMReturnBool *)loyaltyAndPaymentSessionRunning;
- (CAMReturnString *)ndefRead;
- (CAMReturnBool *)ndefWriteRecords:(NSArray *)arg1;
- (CAMReturnDictionary *)performECommercePayment:(NSDictionary *)arg1 authorization:(NSData *)arg2;
- (CAMReturnArray *)performanceData;
- (CAMReturnBool *)queueServerConnection:(NSString *)arg1;
- (CAMReturnBool *)queueServerConnectionForApplets:(NSArray *)arg1;
- (CAMReturnVoid *)readerSessionRunning;
- (CAMReturnVoid *)registerHardwareEventListener;
- (CAMReturnDictionary *)registrationInfo;
- (CAMReturnBool *)secureElementSessionRunning;
- (CAMReturnString *)serialNumber;
- (CAMReturnString *)serialNumber:(NSNumber *)arg1;
- (CAMReturnBool *)setActivePaymentApplet:(NSString *)arg1 makeDefault:(NSNumber *)arg2;
- (CAMReturnBool *)setActivePaymentApplet:(NSString *)arg1 makeDefault:(NSNumber *)arg2 authorization:(NSData *)arg3;
- (CAMReturnBool *)setFieldDetectEnabled:(NSNumber *)arg1;
- (CAMReturnBool *)setHostCards:(NSArray *)arg1;
- (CAMReturnBool *)setLoyaltyNotReady;
- (CAMReturnBool *)setRegistrationInfo:(NSDictionary *)arg1;
- (CAMReturnData *)signChallenge:(NSData *)arg1;
- (CAMReturnData *)signChallenge:(NSData *)arg1 useIcf:(NSNumber *)arg2;
- (CAMReturnBool *)startCardEmulation:(NSNumber *)arg1 authorization:(NSData *)arg2;
- (CAMReturnBool *)startCardEmulationWithAuthorization:(NSData *)arg1;
- (CAMReturnVoid *)startContactlessPaymentSession;
- (CAMReturnData *)startEventData;
- (CAMReturnVoid *)startFieldDetect:(NSNumber *)arg1 idleExit:(NSNumber *)arg2;
- (CAMReturnVoid *)startFieldDetectSession;
- (CAMReturnVoid *)startLoyaltyAndPaymentSession;
- (CAMReturnBool *)startPolling;
- (CAMReturnVoid *)startReaderSession;
- (CAMReturnVoid *)startRemoteAdminEventListener;
- (CAMReturnVoid *)startValueAddedServiceSession;
- (CAMReturnDictionary *)stateInformation;
- (CAMReturnDictionary *)stateInformation:(NSNumber *)arg1;
- (CAMReturnVoid *)stockholmLastError;
- (CAMReturnVoid *)stopContactlessPaymentSession;
- (CAMReturnVoid *)stopFieldDetect;
- (CAMReturnVoid *)stopFieldDetectSession;
- (CAMReturnVoid *)stopLoyaltyAndPaymentSession;
- (CAMReturnBool *)stopPolling;
- (CAMReturnVoid *)stopReaderSession;
- (CAMReturnVoid *)stopRemoteAdminEventListener;
- (CAMReturnVoid *)stopSecureElementSession;
- (CAMReturnVoid *)stopValueAddedServiceSession;
- (CAMReturnData *)transceive:(NSData *)arg1;
- (CAMReturnData *)transceiveWithSecureElement:(NSData *)arg1;
- (CAMReturnData *)transceiveWithSecureElement:(NSData *)arg1 useIcf:(NSNumber *)arg2;
- (CAMReturnVoid *)tsmBrokerAuthToken:(NSString *)arg1;
- (CAMReturnVoid *)tsmBrokerURL:(NSString *)arg1;
- (CAMReturnString *)tsmClientInfoHeader;
- (CAMReturnBool *)tsmCreateSSDForARGON;
- (CAMReturnBool *)tsmCreateSSDForARGON:(NSNumber *)arg1;
- (CAMReturnBool *)tsmCreateSSDForHELIUM;
- (CAMReturnBool *)tsmCreateSSDForHELIUM:(NSNumber *)arg1;
- (CAMReturnBool *)tsmCreateSSDForKRYPTON;
- (CAMReturnBool *)tsmCreateSSDForKRYPTON:(NSNumber *)arg1;
- (CAMReturnBool *)tsmCreateSSDForNEON;
- (CAMReturnBool *)tsmCreateSSDForNEON:(NSNumber *)arg1;
- (CAMReturnBool *)tsmCreateSSDForPNO:(NSString *)arg1;
- (CAMReturnBool *)tsmCreateSSDForPNO:(NSString *)arg1 useIcf:(NSNumber *)arg2;
- (CAMReturnArray *)tsmListCards;
- (CAMReturnArray *)tsmListCards:(NSNumber *)arg1;
- (CAMReturnArray *)tsmListPendingCommands;
- (CAMReturnArray *)tsmListPendingCommands:(NSNumber *)arg1;
- (CAMReturnArray *)tsmPersoCardWithId:(NSString *)arg1;
- (CAMReturnArray *)tsmPersoCardWithId:(NSString *)arg1 useIcf:(NSNumber *)arg2;
- (CAMReturnString *)tsmSERegistrationInfo;
- (CAMReturnString *)tsmSERegistrationInfo:(NSNumber *)arg1;
- (CAMReturnString *)tsmServerRegister;
- (CAMReturnString *)tsmServerRegister:(NSNumber *)arg1;
- (CAMReturnBool *)tsmServerUnregister;
- (CAMReturnBool *)tsmTriggerSoftTP;
- (CAMReturnBool *)tsmTriggerSoftTP:(NSNumber *)arg1;
- (CAMReturnVoid *)tsmTrustedServiceManagerURL:(NSString *)arg1;
- (CAMReturnVoid *)unregisterHardwareEventListener;
- (CAMReturnBool *)valueAddedServiceSessionRunning;
@end

