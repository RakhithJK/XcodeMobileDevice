//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface SSCrypto : NSObject
{
    NSData *symmetricKey;
    NSData *cipherText;
    NSData *clearText;
    NSData *publicKey;
    NSData *privateKey;
    BOOL isSymmetric;
}

+ (id)generateRSAPrivateKeyWithLength:(int)arg1;
+ (id)generateRSAPublicKeyFromPrivateKey:(id)arg1;
+ (id)getKeyDataWithLength:(int)arg1;
+ (id)getMD5ForData:(id)arg1;
+ (id)getSHA1ForData:(id)arg1;
- (void).cxx_destruct;
- (id)cipherTextAsData;
- (id)cipherTextAsString;
- (void)cleanupOpenSSL;
- (id)clearTextAsData;
- (id)clearTextAsString;
- (void)dealloc;
- (id)decrypt;
- (id)decrypt:(id)arg1;
- (id)description;
- (id)digest:(id)arg1;
- (id)encrypt;
- (id)encrypt:(id)arg1;
- (id)init;
- (id)initWithPrivateKey:(id)arg1;
- (id)initWithPublicKey:(id)arg1;
- (id)initWithPublicKey:(id)arg1 privateKey:(id)arg2;
- (id)initWithSymmetricKey:(id)arg1;
- (BOOL)isSymmetric;
- (id)privateKey;
- (id)publicKey;
- (void)setCipherText:(id)arg1;
- (void)setClearTextWithData:(id)arg1;
- (void)setClearTextWithString:(id)arg1;
- (void)setIsSymmetric:(BOOL)arg1;
- (void)setPrivateKey:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setSymmetricKey:(id)arg1;
- (void)setupOpenSSL;
- (id)sign;
- (id)symmetricKey;
- (id)verify;

@end

