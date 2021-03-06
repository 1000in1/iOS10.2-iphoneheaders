/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class INVocabularyUpdater, _INVocabularyValidator;

@interface _INVocabulary : NSObject {

	INVocabularyUpdater* _vocabularyUpdater;
	_INVocabularyValidator* _validator;

}
+(id)supportedVocabularyStringTypes;
+(id)sharedVocabulary;
-(id)init;
-(id)_validator;
-(void)removeAllVocabularyStrings;
-(void)setVocabularyStrings:(id)arg1 ofType:(long long)arg2 ;
-(void)_THROW_EXCEPTION_FOR_INVALID_VOCABULARY_TYPE_;
-(void)_THROW_EXCEPTION_FOR_ATTEMPT_TO_PROVIDE_VOCABULARY_OF_TYPE_THAT_APP_DOES_NOT_HANDLE_:(id)arg1 ;
-(void)_THROW_EXCEPTION_FOR_WATCH_OS_AND_TV_OS_UNAVAILABLE_;
@end

