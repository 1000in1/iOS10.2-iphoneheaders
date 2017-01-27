/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface FCAssetStore : NSObject {

	NSString* _directoryPath;
	NSString* _preferredExtension;
	NSMutableDictionary* _fileURLsByKey;

}

@property (nonatomic,copy) NSString * directoryPath;                         //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,copy) NSString * preferredExtension;                    //@synthesize preferredExtension=_preferredExtension - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * fileURLsByKey;              //@synthesize fileURLsByKey=_fileURLsByKey - In the implementation block
-(id)allKeys;
-(id)_keyForFileName:(id)arg1 ;
-(id)_filePathForKey:(id)arg1 ;
-(NSMutableDictionary *)fileURLsByKey;
-(BOOL)removeFileWithKey:(id)arg1 ;
-(NSString *)directoryPath;
-(NSString *)preferredExtension;
-(id)initWithDirectoryAtPath:(id)arg1 preferredAssetPathExtension:(id)arg2 ;
-(id)copyFileAtPath:(id)arg1 withKey:(id)arg2 ;
-(id)moveFileAtPath:(id)arg1 withKey:(id)arg2 ;
-(id)copyData:(id)arg1 withKey:(id)arg2 ;
-(BOOL)removeAllFiles;
-(id)filePathForKey:(id)arg1 ;
-(id)fileURLForKey:(id)arg1 ;
-(unsigned long long)storeSize;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(void)setPreferredExtension:(NSString *)arg1 ;
-(void)setFileURLsByKey:(NSMutableDictionary *)arg1 ;
@end
