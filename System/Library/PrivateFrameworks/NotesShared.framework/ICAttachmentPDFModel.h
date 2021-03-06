/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentPDFModel : ICAttachmentModel
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
+(int)populateSearchStrings:(id)arg1 url:(id)arg2 maxStringLength:(unsigned long long)arg3 isCancelledBlock:(/*^block*/id)arg4 ;
-(BOOL)hasPreviews;
-(/*^block*/id)genericListThumbnailCreator;
-(/*^block*/id)genericBrickThumbnailCreator;
-(void)generatePreviewsInOperation:(id)arg1 ;
-(int)populateSearchStrings:(id)arg1 ;
-(BOOL)canMarkup;
-(id)generateSearchIndexStringsOperation;
@end

