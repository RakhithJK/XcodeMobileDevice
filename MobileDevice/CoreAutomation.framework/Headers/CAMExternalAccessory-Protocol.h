//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CAMReturnArray, CAMReturnBool, CAMReturnData, CAMReturnDictionary, CAMReturnInteger, CAMReturnString, CAMReturnVoid, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol CAMExternalAccessory

@optional
- (CAMReturnBool *)accessoryHasNMEASentencesAvailableWithAccessoryID:(NSNumber *)arg1;
- (CAMReturnVoid *)beginOOBBTPpairing;
- (CAMReturnVoid *)closeSessionWithSessionID:(NSNumber *)arg1;
- (CAMReturnVoid *)connectIPAccessory:(NSString *)arg1;
- (CAMReturnArray *)connectedAccessories;
- (CAMReturnVoid *)disconnectIPAccessory:(NSString *)arg1;
- (CAMReturnArray *)locationSentenceTypesWithAccessoryID:(NSNumber *)arg1;
- (CAMReturnString *)macAddressWithAccessoryID:(NSNumber *)arg1;
- (CAMReturnString *)nmeaSentenceWithAccessoryID:(NSNumber *)arg1;
- (CAMReturnInteger *)openSessionWithAccessoryID:(NSNumber *)arg1 withProtocolString:(NSString *)arg2;
- (CAMReturnArray *)openSessions;
- (CAMReturnString *)preferredAppWithAccessoryID:(NSNumber *)arg1;
- (CAMReturnInteger *)readBytesAvailableWithSessionID:(NSNumber *)arg1;
- (CAMReturnData *)readDataWithLength:(NSNumber *)arg1 withSessionID:(NSNumber *)arg2;
- (CAMReturnData *)readDataWithSessionID:(NSNumber *)arg1;
- (CAMReturnVoid *)sendDestinationInformation:(NSDictionary *)arg1 withUUID:(NSNumber *)arg2;
- (CAMReturnVoid *)setIAPTimeSyncWithAccessoryID:(NSNumber *)arg1 params:(NSDictionary *)arg2;
- (CAMReturnVoid *)setLocationSentenceTypes:(NSArray *)arg1 withAccessoryID:(NSNumber *)arg2;
- (CAMReturnVoid *)showBluetoothAccessoryPicker;
- (CAMReturnVoid *)startIPAccessoryDiscovery;
- (CAMReturnVoid *)startLocation;
- (CAMReturnVoid *)stopIPAccessoryDiscovery;
- (CAMReturnVoid *)stopLocation;
- (CAMReturnBool *)supportsLocationWithAccessoryID:(NSNumber *)arg1;
- (CAMReturnDictionary *)vehicleInfoDataWithAccessoryID:(NSNumber *)arg1;
- (CAMReturnDictionary *)vehicleInfoInitialDataWithAccessoryID:(NSNumber *)arg1;
- (CAMReturnDictionary *)vehicleInfoSupportedTypesWithAccessoryID:(NSNumber *)arg1;
- (CAMReturnBool *)writeData:(NSData *)arg1 withSessionID:(NSNumber *)arg2;
@end

