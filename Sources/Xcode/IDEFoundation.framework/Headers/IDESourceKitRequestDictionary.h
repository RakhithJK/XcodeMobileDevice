//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceKitRequestObjectWrapper.h>

@interface IDESourceKitRequestDictionary : IDESourceKitRequestObjectWrapper
{
}

+ (id)createFromYAML:(id)arg1 connection:(id)arg2 error:(id *)arg3;
- (id)init;
- (void)setArray:(id)arg1 forKey:(struct _sourcekit_uid_s *)arg2;
- (void)setBool:(BOOL)arg1 forKey:(struct _sourcekit_uid_s *)arg2;
- (void)setData:(id)arg1 forKey:(struct _sourcekit_uid_s *)arg2;
- (void)setDictionary:(id)arg1 forKey:(struct _sourcekit_uid_s *)arg2;
- (void)setDouble:(double)arg1 forKey:(struct _sourcekit_uid_s *)arg2;
- (void)setFilePath:(id)arg1 forKey:(struct _sourcekit_uid_s *)arg2;
- (void)setInt:(long long)arg1 forKey:(struct _sourcekit_uid_s *)arg2;
- (void)setNSDictionary:(id)arg1 forKey:(struct _sourcekit_uid_s *)arg2;
- (void)setString:(id)arg1 forKey:(struct _sourcekit_uid_s *)arg2;
- (void)setUID:(struct _sourcekit_uid_s *)arg1 forKey:(struct _sourcekit_uid_s *)arg2;

@end

