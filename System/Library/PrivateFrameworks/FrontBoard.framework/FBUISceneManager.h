/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBUISceneManager <NSObject>
@required
-(id)workspace:(id)arg1 identityForSceneWithName:(id)arg2 specification:(id)arg3;
-(void)registerSceneWorkspace:(id)arg1;
-(void)invalidateSceneWorkspace:(id)arg1;
-(void)workspace:(id)arg1 createSceneWithName:(id)arg2 specification:(id)arg3;
-(void)workspace:(id)arg1 destroySceneWithIdentity:(id)arg2;

@end

