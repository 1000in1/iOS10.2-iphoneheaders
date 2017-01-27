/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPDecoder.h>
#import <iWorkImport/TSPPasteboardWriting.h>

@class TSPPasteboard, NSMutableDictionary, NSString;

@interface TSPPasteboardNativeDataProvider : NSObject <TSPDecoder, TSPPasteboardWriting> {

	TSPPasteboard* _pasteboard;
	NSMutableDictionary* _nativeData;
	NSMutableDictionary* _tspData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataForIdentifier:(long long)arg1 ;
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;
-(id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2 ;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(id)initWithPasteboard:(id)arg1 nativeData:(id)arg2 tspData:(id)arg3 ;
-(void)loadNativeData;
-(id)init;
-(NSString *)debugDescription;
@end
