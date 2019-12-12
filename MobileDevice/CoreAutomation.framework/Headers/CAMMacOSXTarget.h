//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreAutomation/CAMDarwinTarget.h>

#import <CoreAutomation/CAMCommunicating-Protocol.h>
#import <CoreAutomation/CAMDarwinInterface-Protocol.h>
#import <CoreAutomation/CAMDeviceProxies-Protocol.h>

@class CAMConnectionContainer, CAMXBSBuild, NSArray, NSDate, NSMutableDictionary, NSObject, NSString;
@protocol CAMAsyncDelegateProtocol, OS_dispatch_queue;

@interface CAMMacOSXTarget : CAMDarwinTarget <CAMCommunicating, CAMDeviceProxies, CAMDarwinInterface>
{
    NSMutableDictionary *urlMountPoints;
    CDUnknownBlockType stdoutHandler;
    CDUnknownBlockType stderrHandler;
    NSObject<OS_dispatch_queue> *runCommandQueue;
    int shutdownSignal;
}

+ (BOOL)isFolder:(id)arg1;
+ (id)localMachine;
- (void).cxx_destruct;
- (id)AWDL;
- (id)HID;
- (id)VPN;
- (id)WiFi;
- (id)accessibility;
- (id)addressBook;
- (id)archive;
- (id)assistant;
- (id)bluetooth;
- (id)bluetoothAddress;
@property(copy) NSString *bootArgs;
@property(readonly, retain) CAMXBSBuild *build;
@property(readonly, copy) NSString *buildVersion;
- (id)c26;
- (id)capabilities;
- (void)connect;
- (id)coreLocation;
- (id)coreMotion;
- (id)coreTelephony;
- (id)cpuArchitecture;
- (void)dealloc;
- (id)device;
- (id)deviceName;
- (void)disconnect;
- (id)externalAccessory;
- (id)faceTime;
- (BOOL)fileExistsAtPath:(id)arg1;
- (BOOL)fileExistsAtPath:(id)arg1 isDirectory:(char *)arg2;
- (id)gameController;
- (id)graphicsUtilities;
@property(readonly, copy) NSString *hardwareModel;
@property(readonly, copy) NSString *hardwareModelPrefix;
- (id)hardwareUUID;
- (BOOL)hasAWD;
- (BOOL)hasAWDL;
- (BOOL)hasAccelerometer;
- (BOOL)hasAirDrop;
- (BOOL)hasBaseband;
- (BOOL)hasBluetooth;
- (BOOL)hasBluetoothLowEnergy;
- (BOOL)hasCompass;
- (BOOL)hasFaceTime;
- (BOOL)hasGPS;
- (BOOL)hasGyro;
- (BOOL)hasLTE;
- (BOOL)hasOscarSideband;
- (BOOL)hasSIM;
- (BOOL)hasTDSCDMA;
- (BOOL)hasWiFi;
- (id)homekit;
@property(readonly, copy) NSString *hostname;
- (id)iCloud;
- (id)init;
- (void)initializeConnectionToLocalDevice;
- (BOOL)isBooted;
- (BOOL)isCDMA;
- (BOOL)isInDFU;
- (BOOL)isInIBoot;
- (id)isInternal;
- (BOOL)isPresent;
- (BOOL)isResponsive;
- (BOOL)isTimedout;
- (id)localeUtilities;
- (id)mc;
- (id)mediaLibrary;
- (id)mediaPlayer;
- (id)mediaRemote;
- (id)mesa;
- (void)mountPath:(id)arg1 error:(id)arg2;
- (void)mountURL:(id)arg1 error:(id)arg2;
- (id)networking;
- (id)nfc;
- (id)obliteration;
- (id)os;
- (id)passbook;
@property(readonly, copy) NSString *productType;
- (id)productVersion;
- (BOOL)productionSOC;
- (void)reboot:(BOOL)arg1;
- (id)regionInfo;
- (id)releaseType;
- (BOOL)removeItemAtPath:(id)arg1;
- (id)resolveSymlink:(id)arg1;
- (BOOL)retrieve:(id)arg1 toLocation:(id)arg2;
- (BOOL)retrieve:(id)arg1 toLocation:(id)arg2;
- (BOOL)retrieve:(id)arg1 toLocation:(id)arg2 resolvingSymlinks:(BOOL)arg3;
- (void)retrieveAsync:(id)arg1 toLocation:(id)arg2;
- (BOOL)retrieveSource:(id)arg1 toLocation:(id)arg2;
- (BOOL)retrieveSources:(id)arg1 toLocation:(id)arg2;
- (id)runCommand:(id)arg1;
- (id)runCommand:(id)arg1 andWaitForResult:(BOOL)arg2;
- (id)safari;
- (BOOL)send:(id)arg1 toLocation:(id)arg2;
- (BOOL)send:(id)arg1 toLocation:(id)arg2;
- (BOOL)send:(id)arg1 toLocation:(id)arg2 resolvingSymlinks:(BOOL)arg3;
- (void)sendAsync:(id)arg1 toLocation:(id)arg2;
- (id)serialNumber;
- (void)setStderrHandler:(CDUnknownBlockType)arg1;
- (void)setStdoutHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSDate *systemDate;
- (id)settings;
- (id)simply;
- (id)simplyAsRoot;
- (id)springboard;
- (id)store;
- (BOOL)supportsAppStore;
- (BOOL)supportsAssistant;
- (BOOL)supportsFaceTimeOverCellular;
- (BOOL)supportsTetheringOverCellular;
- (BOOL)supportsThumper;
- (id)supportsWiFi;
- (id)supportsWiFiSyncing;
- (id)syslogConnection;
- (id)system;
- (id)timeIntervalSince1970;
- (id)trainNameFromReleaseVersion:(id)arg1;
- (id)tu;
- (id)udid;
- (BOOL)uiBuild;
- (void)unmountPath:(id)arg1 error:(id)arg2;
- (void)unmountURL:(id)arg1 error:(id)arg2;
@property(readonly, copy) NSArray *versionInformation;
- (void)waitForRunCommandQueue;
- (id)wiFiAddress;
- (id)wp;

// Remaining properties
@property id <CAMAsyncDelegateProtocol> asyncDelegate;
@property BOOL connected;
@property(retain) CAMConnectionContainer *connections;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *password;
@property(readonly) Class superclass;
@property(copy) NSString *targetAddress;
@property(copy) NSString *username;

@end

