/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFUbiquityBaselineRollOperation.h>

@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation

@property (assign) NSObject*<PFUbiquityBaselineRollResponseOperationDelegate> delegate; 
-(id)retainedDelegate;
-(BOOL)canAdoptBaseline:(id)arg1 byReplacingLocalStoreFile:(BOOL*)arg2 withStack:(id)arg3 withError:(id*)arg4 ;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRollResponseOperationDelegate>)arg1 ;
-(NSObject*<PFUbiquityBaselineRollResponseOperationDelegate>)delegate;
-(void)main;
@end

