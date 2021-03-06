/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/CCUIControlCenterViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBSystemGestureRecognizerDelegate.h>
#import <SpringBoard/SBDashBoardExternalBehaviorProviding.h>
#import <SpringBoard/SBDashBoardExternalPresentationProviding.h>
#import <SpringBoard/SBCoordinatedPresenting.h>

@class SBWindow, CCUIControlCenterRootView, CCUIControlCenterViewController, UIImageView, UIView, _UIBackdropView, SBUIChevronView, SBScreenEdgePanGestureRecognizer, SBControlCenterSystemAgent, FBUIApplicationSceneDeactivationAssertion, FBDisplayLayoutElement, NSMutableSet, NSHashTable, _UIDynamicValueAnimation, UIDynamicAnimator, _UIFeedbackEdgeBehavior, NSString, NSArray, NSSet;

@interface SBControlCenterController : UIViewController <CCUIControlCenterViewControllerDelegate, UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBDashBoardExternalBehaviorProviding, SBDashBoardExternalPresentationProviding, SBCoordinatedPresenting> {

	SBWindow* _window;
	CCUIControlCenterRootView* _rootView;
	CCUIControlCenterViewController* _viewController;
	UIImageView* _coveredContentSnapshot;
	UIView* _fullScreenGrabberContainer;
	_UIBackdropView* _fullScreenGrabberBackdrop;
	SBUIChevronView* _fullScreenChevron;
	SBScreenEdgePanGestureRecognizer* _controlCenterGestureRecognizer;
	double _controlCenterGestureStartTime;
	SBControlCenterSystemAgent* _systemAgent;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	FBDisplayLayoutElement* _displayLayoutElement;
	NSMutableSet* _preventDismissalOnLockReasons;
	BOOL _uiLocked;
	NSHashTable* _observers;
	long long _orientation;
	BOOL _animatingInitialSwipe;
	BOOL _inPresentationPan;
	BOOL _inDismissalPan;
	CGPoint _panInitialTouchLocation;
	BOOL _dismissalPanHasGoneBelowCCTopEdge;
	BOOL _gotFirstBackdropUpdate;
	_UIDynamicValueAnimation* _bounceAnimation;
	UIDynamicAnimator* _animator;
	unsigned long long _animatorStopCount;
	CGRect _animatorStopFrame;
	BOOL _presented;
	BOOL _inGrabberOnlyMode;
	BOOL _transitioning;
	BOOL _fullyRevealed;
	double _ambiguousActivationMargin;
	_UIFeedbackEdgeBehavior* _feedbackBehavior;

}

@property (assign,nonatomic) BOOL inGrabberOnlyMode;                                                          //@synthesize inGrabberOnlyMode=_inGrabberOnlyMode - In the implementation block
@property (assign,getter=isUILocked,nonatomic) BOOL UILocked;                                                 //@synthesize uiLocked=_uiLocked - In the implementation block
@property (assign,getter=isPresented,nonatomic) BOOL presented;                                               //@synthesize presented=_presented - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                                       //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,getter=isFullyRevealed,nonatomic) BOOL fullyRevealed;                                       //@synthesize fullyRevealed=_fullyRevealed - In the implementation block
@property (assign,getter=_ambiguousActivationMargin,nonatomic) double ambiguousActivationMargin;              //@synthesize ambiguousActivationMargin=_ambiguousActivationMargin - In the implementation block
@property (nonatomic,retain) _UIFeedbackEdgeBehavior * feedbackBehavior;                                      //@synthesize feedbackBehavior=_feedbackBehavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (nonatomic,readonly) long long coordinatedPresentingControllerIdentifier; 
@property (nonatomic,readonly) double hintDisplacement; 
@property (nonatomic,readonly) unsigned long long hintEdge; 
@property (assign,nonatomic) id<SBPresentingDelegate> presentingDelegate; 
@property (nonatomic,readonly) NSSet * gestures; 
@property (nonatomic,readonly) NSSet * conflictingGestures; 
@property (nonatomic,readonly) NSSet * tapExcludedViews; 
+(double)transitionAnimationDuration;
+(id)_sharedInstanceCreatingIfNeeded:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(void)notifyControlCenterControl:(id)arg1 didActivate:(BOOL)arg2 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(BOOL)isUILocked;
-(void)updateTransitionWithTouchLocation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)endTransitionWithVelocity:(CGPoint)arg1 wasCancelled:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginPresentationWithTouchLocation:(CGPoint)arg1 presentationBegunHandler:(/*^block*/id)arg2 ;
-(NSString *)dashBoardIdentifier;
-(BOOL)isGrabberVisible;
-(void)setAmbiguousActivationMargin:(double)arg1 forApp:(id)arg2 ;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(NSArray *)presentationRegions;
-(id)_controlCenterViewController;
-(void)_dismissOnLock;
-(BOOL)isPresentingControllerTransitioning;
-(long long)coordinatedPresentingControllerIdentifier;
-(double)hintDisplacement;
-(unsigned long long)hintEdge;
-(void)dismissAnimated:(BOOL)arg1 withAdditionalAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_lockStateChangedNotification:(id)arg1 ;
-(void)_uiRelockedNotification:(id)arg1 ;
-(void)setUILocked:(BOOL)arg1 ;
-(void)_handleShowControlCenterGesture:(id)arg1 ;
-(void)_enumerateObservers:(/*^block*/id)arg1 ;
-(void)_updateCoveredContentSnapshot;
-(void)_clearCoveredContentSnapshot;
-(BOOL)inGrabberOnlyMode;
-(double)_ambiguousActivationMargin;
-(double)_yValueForOpen;
-(double)_yValueForClosed;
-(void)_updateRevealPercentage:(double)arg1 ;
-(void)_updateGrabberVisibility;
-(void)hideGrabberAnimated:(BOOL)arg1 ;
-(void)_showControlCenterGestureBeganWithGestureRecognizer:(id)arg1 ;
-(void)_showControlCenterGestureChangedWithGestureRecognizer:(id)arg1 ;
-(void)_showControlCenterGestureEndedWithGestureRecognizer:(id)arg1 ;
-(void)_showControlCenterGestureCancelled;
-(void)_showControlCenterGestureFailed;
-(BOOL)_shouldShowGrabberOnFirstSwipe;
-(void)showGrabberAnimated:(BOOL)arg1 ;
-(BOOL)_shouldUseControlCenterRevealConfirmation;
-(void)_beginSystemGesturePresentationWithGestureRecognizer:(id)arg1 ;
-(void)_setupViewForPresentation;
-(void)_updateTransitionWithTouchLocation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)_hideGrabberForSystemGesture;
-(void)_endPresentation;
-(void)_beginTransitionWithTouchLocation:(CGPoint)arg1 ;
-(BOOL)_allowShowTransitionSystemGesture;
-(id)_controlCenterWindow;
-(void)_revealSlidingViewToHeight:(double)arg1 ;
-(void)_cleanupAnimator;
-(void)setInGrabberOnlyMode:(BOOL)arg1 ;
-(void)_beginPresentation;
-(void)_doSetupBeforeBeginTransition;
-(double)_controlCenterHeightForTouchLocation:(CGPoint)arg1 initialTouchLocation:(CGPoint)arg2 ;
-(void)_setLockHUDHidden:(BOOL)arg1 ;
-(void)_finishPresenting:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(double)_verticalPercentageMovedOnScreenForY:(double)arg1 stopY:(double)arg2 ;
-(id)_newDynamicAnimationForShow:(BOOL)arg1 currentValue:(double)arg2 velocity:(double)arg3 unitSize:(double)arg4 ;
-(void)_resetPanTransitionState;
-(BOOL)isFullyRevealed;
-(void)_dismissWithDuration:(double)arg1 additionalAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFullyRevealed:(BOOL)arg1 ;
-(void)hideGrabberAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateShouldShowGrabberOnFirstSwipe;
-(BOOL)allowShowTransitionSystemGesture;
-(void)_endTransitionWithVelocity:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(void)controlCenterViewControllerWantsDismissal:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)preventDismissalOnLock:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)allowHideTransition;
-(void)beginTransitionWithTouchLocation:(CGPoint)arg1 ;
-(void)endTransitionWithVelocity:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAmbiguousActivationMargin:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)removeObserver:(id)arg1 ;
-(BOOL)wantsFullScreenLayout;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isTransitioning;
-(_UIFeedbackEdgeBehavior *)feedbackBehavior;
-(void)setFeedbackBehavior:(_UIFeedbackEdgeBehavior *)arg1 ;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)isVisible;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)setTransitioning:(BOOL)arg1 ;
-(long long)idleTimerMode;
-(BOOL)handleMenuButtonTap;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(void)presentAnimated:(BOOL)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPresented;
-(void)_presentWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)allowShowTransition;
-(long long)participantState;
-(void)abortAnimatedTransition;
-(id)controlCenterSystemAgentForControlCenterViewController:(id)arg1 ;
-(void)setPresented:(BOOL)arg1 ;
-(unsigned long long)numberOfActivePages;
-(void)controlCenterViewController:(id)arg1 handleTap:(id)arg2 ;
-(void)scrollToPage:(unsigned long long)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)controlCenterViewController:(id)arg1 handlePan:(id)arg2 ;
-(void)controlCenterViewControllerWantsDismissal:(id)arg1 ;
-(void)controlCenterViewController:(id)arg1 backdropViewDidUpdate:(id)arg2 ;
-(BOOL)controlCenterViewController:(id)arg1 canHandleGestureRecognizer:(id)arg2 ;
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cancelTransition;
@end

