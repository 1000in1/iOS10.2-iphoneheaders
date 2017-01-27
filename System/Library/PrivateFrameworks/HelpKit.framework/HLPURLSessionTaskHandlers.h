/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSURLSession, NSURLSessionTask;

@interface HLPURLSessionTaskHandlers : NSObject {

	NSMutableArray* _completionHandlers;
	NSURLSession* _session;
	NSURLSessionTask* _sessionTask;

}

@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                           //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * sessionTask;                   //@synthesize sessionTask=_sessionTask - In the implementation block
+(id)URLSessionTaskHandlersWithSession:(id)arg1 sessionTask:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLSession *)session;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(NSURLSessionTask *)sessionTask;
-(id)initWithSession:(id)arg1 sessionTask:(id)arg2 completionHandler:(id)arg3 ;
-(void)setSessionTask:(NSURLSessionTask *)arg1 ;
@end
