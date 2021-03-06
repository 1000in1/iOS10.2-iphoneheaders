/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@protocol InteractionProtocol;
@class CallHistoryDBClientHandle;

@interface ApplyLocalTransactions : CHLogger {

	id<InteractionProtocol> _interactionManager;
	CallHistoryDBClientHandle* _database;
	BOOL _sendReadUpdateNotification;

}
+(id)sortTransactionsByType:(id)arg1 ;
-(BOOL)handleInsert:(id)arg1 ;
-(BOOL)handleDelete:(id)arg1 ;
-(void)handleUpdate:(id)arg1 ;
-(BOOL)handleFingerprintDelete:(id)arg1 ;
-(void)handleFingerprintUpdate:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 andInteractionManager:(id)arg2 ;
-(void)apply:(id)arg1 ;
@end

