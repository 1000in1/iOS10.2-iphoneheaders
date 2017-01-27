/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationServiceProtocol <NSObject>
@optional
-(void)handleDismissWithCompletion:(/*^block*/id)arg1;
-(void)handleHostApplicationDidCancel;
-(void)prepareWithPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
-(void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
-(void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
-(void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
-(void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;
-(void)handleHostApplicationWillResignActive:(BOOL)arg1;
-(void)handleHostApplicationDidBecomeActive;

@end
