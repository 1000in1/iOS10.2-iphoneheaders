/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelayedTouchesBeganGestureRecognizerClient.h>
#import <UIKit/_UIScrollToTopView.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UIScrollViewLayoutObserver;
@class UIImageView, _UIStaticScrollBar, UIView, UIScrollViewPinchGestureRecognizer, UIScrollViewDirectionalPressGestureRecognizer, UISwipeGestureRecognizer, UIRefreshControl, _UIFeedbackEdgeBehavior, _UIFeedbackZoomEdgeBehavior, NSISVariable, NSArray, UIScrollTestToBottomParameters, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIGestureRecognizer, NSString;

@interface UIScrollView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelayedTouchesBeganGestureRecognizerClient, _UIScrollToTopView, NSCoding> {

	id _delegate;
	CGSize _contentSize;
	UIEdgeInsets _contentInset;
	UIEdgeInsets _contentScrollInset;
	UIImageView* _verticalScrollIndicator;
	UIImageView* _horizontalScrollIndicator;
	_UIStaticScrollBar* _staticScrollBar;
	UIEdgeInsets _scrollIndicatorInset;
	double _startOffsetX;
	double _startOffsetY;
	double _lastUpdateOffsetX;
	double _lastUpdateOffsetY;
	double _lastUpdateTime;
	double _minimumZoomScale;
	double _maximumZoomScale;
	UIView* _zoomView;
	double _horizontalVelocity;
	double _verticalVelocity;
	double _previousHorizontalVelocity;
	double _previousVerticalVelocity;
	id _scrollHeartbeat;
	CGPoint _pageDecelerationTarget;
	CGSize _decelerationFactor;
	CGPoint _adjustedDecelerationTarget;
	CGSize _adjustedDecelerationFactor;
	double _decelerationLnFactorH;
	double _decelerationLnFactorV;
	id* _shadows;
	id _scrollNotificationViews;
	double _contentOffsetAnimationDuration;
	id _animation;
	id _zoomAnimation;
	UIScrollViewPinchGestureRecognizer* _pinch;
	id _pan;
	id _swipe;
	id _touchDelayGestureRecognizer;
	UIScrollViewDirectionalPressGestureRecognizer* _directionalPressGestureRecognizer;
	UISwipeGestureRecognizer* _lowFidelitySwipeGestureRecognizers[4];
	UIScrollView* _draggingChildScrollView;
	CGPoint _parentAdjustment;
	double _pagingSpringPull;
	double _pagingFriction;
	long long _fastScrollCount;
	double _fastScrollMultiplier;
	double _fastScrollStartMultiplier;
	double _fastScrollEndTime;
	CGPoint _rotationCenterPoint;
	double _accuracy;
	unsigned long long _zoomAnimationCount;
	CGSize _accumulatedOffset;
	long long _touchLevel;
	double _savedKeyboardAdjustmentDelta;
	CGSize _interpageSpacing;
	CGPoint _pagingOrigin;
	UIOffset _firstPageOffset;
	UIRefreshControl* _refreshControl;
	UIView* _relativePanView;
	id<_UIScrollViewLayoutObserver> _layoutObserver;
	_UIFeedbackEdgeBehavior* _horizontalFeedbackBehavior;
	_UIFeedbackEdgeBehavior* _verticalFeedbackBehavior;
	_UIFeedbackZoomEdgeBehavior* _zoomFeedbackBehavior;
	UIEdgeInsets _gradientMaskLengths;
	UIEdgeInsets _gradientMaskEdgeInsets;
	struct {
		unsigned tracking : 1;
		unsigned dragging : 1;
		unsigned verticalBounceEnabled : 1;
		unsigned horizontalBounceEnabled : 1;
		unsigned verticalBouncing : 1;
		unsigned horizontalBouncing : 1;
		unsigned bouncesZoom : 1;
		unsigned zoomBouncing : 1;
		unsigned alwaysBounceHorizontal : 1;
		unsigned alwaysBounceVertical : 1;
		unsigned preventScrollingContainer : 1;
		unsigned canCancelContentTouches : 1;
		unsigned delaysContentTouches : 1;
		unsigned programmaticScrollDisabled : 1;
		unsigned scrollDisabled : 1;
		unsigned zoomDisabled : 1;
		unsigned scrollTriggered : 1;
		unsigned showsHorizontalScrollIndicator : 1;
		unsigned showsVerticalScrollIndicator : 1;
		unsigned indicatorStyle : 2;
		unsigned inZoom : 1;
		unsigned hideIndicatorsInZoom : 1;
		unsigned pushedTrackingMode : 1;
		unsigned flashingScrollIndicators : 1;
		unsigned verticalIndicatorShrunk : 1;
		unsigned horizontalIndicatorShrunk : 1;
		unsigned contentFitDisableScrolling : 1;
		unsigned pagingEnabled : 1;
		unsigned pagingLeft : 1;
		unsigned pagingRight : 1;
		unsigned pagingUp : 1;
		unsigned pagingDown : 1;
		unsigned lastHorizontalDirection : 1;
		unsigned lastVerticalDirection : 1;
		unsigned dontScrollToTop : 1;
		unsigned scrollingToTop : 1;
		unsigned scrollingDirectionalPress : 1;
		unsigned singleFingerPan : 1;
		unsigned autoscrolling : 1;
		unsigned automaticContentOffsetAdjustmentDisabled : 1;
		unsigned skipStartOffsetAdjustment : 1;
		unsigned delegateScrollViewDidScroll : 1;
		unsigned delegateScrollViewDidZoom : 1;
		unsigned delegateContentSizeForZoomScale : 1;
		unsigned delegateScrollViewDidChangeContentSize : 1;
		unsigned delegateWasNonNil : 1;
		unsigned preserveCenterDuringRotation : 1;
		unsigned delaysTrackingWhileDecelerating : 1;
		unsigned pinnedZoomMin : 1;
		unsigned pinnedXMin : 1;
		unsigned pinnedYMin : 1;
		unsigned pinnedXMax : 1;
		unsigned pinnedYMax : 1;
		unsigned staysCenteredDuringPinch : 1;
		unsigned wasDelayingPinchForSystemGestures : 1;
		unsigned systemGesturesRecognitionPossible : 1;
		unsigned disableContentOffsetRounding : 1;
		unsigned alwaysDisableContentOffsetRounding : 1;
		unsigned adjustedDecelerationTargetX : 1;
		unsigned adjustedDecelerationTargetY : 1;
		unsigned hasScrolled : 1;
		unsigned wantsConstrainedContentSize : 1;
		unsigned constrainedContentSizeNeedsUpdate : 1;
		unsigned updateInsetBottom : 1;
		unsigned beingDraggedByChildScrollView : 1;
		unsigned adjustsTargetsOnContentOffsetChanges : 1;
		unsigned forwardsTouchesUpResponderChain : 1;
		unsigned firstResponderKeyboardAvoidanceDisabled : 1;
		unsigned hasGradientMaskView : 1;
		unsigned interruptingDeceleration : 1;
		unsigned delegateScrollViewAdjustedOffset : 1;
		unsigned disableUpdateOffsetOnCancelTracking : 1;
		unsigned inSetContentOffset : 1;
		unsigned canSkipTraitsAndOverlayUpdatesForViewControllerToNotifyOnLayout : 1;
		unsigned needToIncrementScrollBounceStatistic : 1;
		unsigned didSetContentSizeAtLeastOnce : 1;
		unsigned forcingPanGestureToEndImmediately : 1;
	}  _scrollViewFlags;
	BOOL _useContentDimensionVariablesForConstraintLowering;
	id _scrollTestParameters;
	long long _keyboardDismissMode;
	NSISVariable* _contentWidthVariable;
	NSISVariable* _contentHeightVariable;
	NSArray* _automaticContentConstraints;
	NSArray* __allowedTouchTypesForScrolling;
	CGPoint _zoomAnchorPoint;

}

@property (nonatomic,retain) UIScrollTestToBottomParameters * scrollTestParameters; 
@property (nonatomic,readonly) BOOL pu_isBouncing; 
@property (nonatomic,readonly) BOOL pu_isPerformingScrollTest; 
@property (nonatomic,readonly) BOOL px_isPerformingScrollTest; 
@property (assign,setter=_setAdjustsTargetsOnContentOffsetChanges:,getter=_adjustsTargetsOnContentOffsetChanges,nonatomic) BOOL adjustsTargetsOnContentOffsetChanges; 
@property (assign,setter=_setFirstResponderKeyboardAvoidanceEnabled:,getter=_isFirstResponderKeyboardAvoidanceEnabled,nonatomic) BOOL firstResponderKeyboardAvoidanceEnabled; 
@property (assign,getter=isProgrammaticScrollEnabled,nonatomic) BOOL programmaticScrollEnabled; 
@property (getter=_isScrollingToTop,nonatomic,readonly) BOOL scrollingToTop; 
@property (assign,setter=_setDisableUpdateOffsetOnCancelTracking:,nonatomic) BOOL _disableUpdateOffsetOnCancelTracking; 
@property (setter=_setRefreshControl:,nonatomic,retain) UIRefreshControl * _refreshControl; 
@property (getter=_contentInsetIncludingDecorations,nonatomic,readonly) UIEdgeInsets _contentInsetIncludingDecorations; 
@property (getter=_isAnimatingScroll,nonatomic,readonly) BOOL isAnimatingScroll; 
@property (nonatomic,readonly) _UIStaticScrollBar * _staticScrollBar; 
@property (getter=_isVerticalBouncing,nonatomic,readonly) BOOL isVerticalBouncing; 
@property (getter=_isHorizontalBouncing,nonatomic,readonly) BOOL isHorizontalBouncing; 
@property (getter=_isAnimatingZoom,nonatomic,readonly) BOOL isAnimatingZoom; 
@property (assign,setter=_setZoomAnchorPoint:,getter=_zoomAnchorPoint,nonatomic) CGPoint zoomAnchorPoint;                                                                                  //@synthesize zoomAnchorPoint=_zoomAnchorPoint - In the implementation block
@property (nonatomic,retain) id scrollTestParameters;                                                                                                                                      //@synthesize scrollTestParameters=_scrollTestParameters - In the implementation block
@property (nonatomic,retain,readonly) NSISVariable * _contentWidthVariable;                                                                                                                //@synthesize contentWidthVariable=_contentWidthVariable - In the implementation block
@property (nonatomic,retain,readonly) NSISVariable * _contentHeightVariable;                                                                                                               //@synthesize contentHeightVariable=_contentHeightVariable - In the implementation block
@property (assign,setter=_setUseContentDimensionVariablesForConstraintLowering:,nonatomic) BOOL _useContentDimensionVariablesForConstraintLowering;                                        //@synthesize useContentDimensionVariablesForConstraintLowering=_useContentDimensionVariablesForConstraintLowering - In the implementation block
@property (assign,setter=_setForwardsTouchesUpResponderChain:,getter=_forwardsTouchesUpResponderChain,nonatomic) BOOL forwardsTouchesUpResponderChain; 
@property (assign,setter=_setWantsConstrainedContentSize:,nonatomic) BOOL _wantsConstrainedContentSize; 
@property (setter=_setAutomaticContentConstraints:,nonatomic,copy) NSArray * _automaticContentConstraints;                                                                                 //@synthesize automaticContentConstraints=_automaticContentConstraints - In the implementation block
@property (setter=_setAllowedTouchTypesForScrolling:,nonatomic,copy) NSArray * _allowedTouchTypesForScrolling;                                                                             //@synthesize _allowedTouchTypesForScrolling=__allowedTouchTypesForScrolling - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) CGSize contentSize;                                                                                                                                           //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                                                                                                    //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> delegate;                                                                                                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDirectionalLockEnabled,nonatomic) BOOL directionalLockEnabled; 
@property (assign,nonatomic) BOOL bounces; 
@property (assign,nonatomic) BOOL alwaysBounceVertical; 
@property (assign,nonatomic) BOOL alwaysBounceHorizontal; 
@property (assign,getter=isPagingEnabled,nonatomic) BOOL pagingEnabled; 
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (assign,nonatomic) BOOL showsHorizontalScrollIndicator; 
@property (assign,nonatomic) BOOL showsVerticalScrollIndicator; 
@property (assign,nonatomic) UIEdgeInsets scrollIndicatorInsets; 
@property (assign,nonatomic) long long indicatorStyle; 
@property (assign,nonatomic) double decelerationRate; 
@property (getter=isTracking,nonatomic,readonly) BOOL tracking; 
@property (getter=isDragging,nonatomic,readonly) BOOL dragging; 
@property (getter=isDecelerating,nonatomic,readonly) BOOL decelerating; 
@property (assign,nonatomic) BOOL delaysContentTouches; 
@property (assign,nonatomic) BOOL canCancelContentTouches; 
@property (assign,nonatomic) double minimumZoomScale; 
@property (assign,nonatomic) double maximumZoomScale;                                                                                                                                      //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (assign,nonatomic) BOOL bouncesZoom; 
@property (getter=isZooming,nonatomic,readonly) BOOL zooming; 
@property (getter=isZoomBouncing,nonatomic,readonly) BOOL zoomBouncing; 
@property (assign,nonatomic) BOOL scrollsToTop; 
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                                                                                              //@synthesize pan=_pan - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;                                                                                                          //@synthesize pinch=_pinch - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * directionalPressGestureRecognizer;                                                                                                    //@synthesize directionalPressGestureRecognizer=_directionalPressGestureRecognizer - In the implementation block
@property (assign,nonatomic) long long keyboardDismissMode;                                                                                                                                //@synthesize keyboardDismissMode=_keyboardDismissMode - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_touchDelayForScrollDetection,nonatomic,readonly) double touchDelayForScrollDetection; 
@property (getter=_scrollHysteresis,nonatomic,readonly) double scrollHysteresis; 
@property (getter=_canScrollX,nonatomic,readonly) BOOL canScrollX; 
@property (getter=_canScrollY,nonatomic,readonly) BOOL canScrollY; 
+(id)_implicitAnimationCulprits;
+(SEL)_pinchGestureAction;
+(SEL)_panGestureAction;
+(void)_scrollWithNSTimer:(BOOL)arg1 ;
+(id)_implicitAnimationCulprits;
-(void)pkui_adjustNavigationBarShadow:(id)arg1 ;
-(CGRect)pkui_naturalRestingBounds;
-(void)ACSportsScrollToEndHorizontally;
-(void)_testingScrollStep;
-(void)scrollBy:(float)arg1 forIterations:(int)arg2 ;
-(void)runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3 ;
-(id)topExtensionViewColor;
-(void)setTopExtensionViewColor:(id)arg1 ;
-(void)setScrollTestParameters:(UIScrollTestToBottomParameters *)arg1 ;
-(UIScrollTestToBottomParameters *)scrollTestParameters;
-(void)_suppressImplicitAnimationsForScrollTest;
-(void)_incrementForScrollTest;
-(void)_reenableImplicitAnimationsAfterScrollTest;
-(void)_performScrollTestToBottom:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 scrollAxis:(int)arg5 ;
-(void)_performScrollTestToBottom:(id)arg1 iterations:(int)arg2 delta:(int)arg3 ;
-(void)_performScrollTestToBottom:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 ;
-(void)_performScrollTestToBottom:(id)arg1 iterations:(int)arg2 delta:(int)arg3 scrollAxis:(int)arg4 ;
-(id)_scrollTestExtraResults:(id)arg1 ;
-(void)__ck_scrollToBottom:(BOOL)arg1 ;
-(BOOL)__ck_isScrolledToTop;
-(void)__ck_scrollToTop:(BOOL)arg1 ;
-(BOOL)__ck_isScrolledToBottom;
-(CGPoint)__ck_scrollToTopContentOffset;
-(CGPoint)__ck_scrollToBottomContentOffset;
-(CGSize)__ck_contentSize;
-(BOOL)__ck_isVerticallyRubberBanding;
-(BOOL)_sf_isScrolledToOrPastBottom;
-(void)_sf_setContentInsetAdjustments:(UIEdgeInsets)arg1 ;
-(void)pu_scrollToEdge:(unsigned)arg1 animated:(BOOL)arg2 ;
-(void)pu_scrollToContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)pu_cancelScrollGesture;
-(BOOL)pu_isPerformingScrollTest;
-(BOOL)pu_isScrolledAtEdge:(unsigned)arg1 tolerance:(double)arg2 ;
-(void)pu_cancelScrollAnimation;
-(CGRect)pu_displayFrameForRect:(CGRect)arg1 ;
-(BOOL)pu_isScrolledAtEdge:(unsigned)arg1 ;
-(CGSize)pu_currentContentSize;
-(BOOL)_pu_isScrolledAtEdge:(unsigned)arg1 tolerance:(double)arg2 ;
-(int)_pu_scrollableAxis;
-(BOOL)pu_isScrolledBeyondEdge:(unsigned)arg1 ;
-(id)_pu_pageSwipeTestContext;
-(void)_pu_incrementForPageSwipeTest;
-(void)_pu_beginPageSwipeTestWithContext:(id)arg1 ;
-(void)_pu_setPageSwipeTestContext:(id)arg1 ;
-(void)_pu_endPageSwipeTest;
-(BOOL)pu_isBouncing;
-(void)pu_performPageSwipeTest:(id)arg1 iterations:(long long)arg2 numberOfPages:(long long)arg3 scrollAxis:(int)arg4 ;
-(id)keyForContentMode:(int)arg1 ;
-(void)saveScrollPositionForKey:(id)arg1 ;
-(BOOL)restoreScrollPositionForKey:(id)arg1 ;
-(void)px_scrollToContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(CGPoint)px_constrainedContentOffset:(CGPoint)arg1 ;
-(BOOL)px_isScrolledAtEdge:(unsigned)arg1 tolerance:(double)arg2 ;
-(BOOL)_px_isScrolledAtEdge:(unsigned)arg1 tolerance:(double)arg2 ;
-(BOOL)px_isScrolledAtEdge:(unsigned)arg1 ;
-(void)px_scrollToEdge:(unsigned)arg1 animated:(BOOL)arg2 ;
-(BOOL)px_isPerformingScrollTest;
-(CGRect)mf_visibleFrame;
-(CGRect)mf_visibleBounds;
-(double)mf_visibleHeight;
-(BOOL)mf_needsToAdjustContentOffset;
-(void)ab_scrollToSelectionOfTextView:(id)arg1 ;
-(void)ab_scrollToSelectionOfTextView:(id)arg1 animated:(BOOL)arg2 ;
-(double)ab_verticalOverlapUsingKeyboardInfo:(id)arg1 ;
-(void)ab_adjustForAutomaticKeyboardInfo:(id)arg1 lastAdjustment:(double*)arg2 ;
-(CGRect)PDFKitDocumentVisibleRectIncludingContentInsets;
-(void)_swizzled_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(double)akMagnification;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(CGSize)contentSize;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)setContentSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(void)removeFromSuperview;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isDragging;
-(BOOL)isDecelerating;
-(NSString *)description;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<UIScrollViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setShowsHorizontalScrollIndicator:(BOOL)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(BOOL)isProgrammaticScrollEnabled;
-(void)setProgrammaticScrollEnabled:(BOOL)arg1 ;
-(void)_ensureViewsAreLoadedInRect:(CGRect)arg1 ;
-(BOOL)isScrollEnabled;
-(BOOL)_canScrollX;
-(BOOL)_canScrollY;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDraggingForDelegateWithDeceleration:(BOOL)arg1 ;
-(BOOL)isPagingEnabled;
-(void)_scrollViewDidEndDeceleratingForDelegate;
-(void)_focusedView:(id)arg1 isMinX:(BOOL*)arg2 isMaxX:(BOOL*)arg3 isMinY:(BOOL*)arg4 isMaxY:(BOOL*)arg5 ;
-(CGPoint)_adjustFocusContentOffset:(CGPoint)arg1 forView:(id)arg2 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(id)_panGestureRecognizer;
-(UIEdgeInsets)contentInset;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(BOOL)isTracking;
-(BOOL)cancelTouchTracking;
-(BOOL)cancelMouseTracking;
-(id)_uili_existingLayoutVariables;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(void)_setMaskView:(id)arg1 ;
-(NSISVariable *)_contentWidthVariable;
-(NSISVariable *)_contentHeightVariable;
-(id)nsli_contentWidthVariable;
-(id)nsli_contentHeightVariable;
-(void)_resizeWithOldSuperviewSize:(CGSize)arg1 ;
-(BOOL)_supportsContentDimensionVariables;
-(void)_willMoveToWindow:(id)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_switchToLayoutEngine:(id)arg1 ;
-(BOOL)_forwardsToParentScroller;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)_setSubviewWantsAutolayoutTripWantsAutolayout:(BOOL)arg1 ;
-(void)_addScrollNotificationView:(id)arg1 ;
-(void)_removeScrollNotificationView:(id)arg1 ;
-(void)_webCustomViewWillBeRemovedFromSuperview;
-(BOOL)_canSkipTraitsAndOverlayUpdatesForViewControllerToNotifyOnLayoutResetState:(BOOL)arg1 ;
-(BOOL)_isScrollingEnabled;
-(void)_skipNextStartOffsetAdjustment;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)_clearContentOffsetAnimation:(id)arg1 ;
-(void)_createGestureRecognizersForCurrentTouchLevel;
-(void)_setRefreshControl:(id)arg1 ;
-(void)_adjustScrollerIndicators:(BOOL)arg1 alwaysShowingThem:(BOOL)arg2 ;
-(void)setDirectionalLockEnabled:(BOOL)arg1 ;
-(void)_updateContentFitDisableScrolling;
-(void)_centerContentIfNecessaryAdjustingContentOffset:(BOOL)arg1 ;
-(id)_getDelegateZoomView;
-(UIEdgeInsets)_contentInsetIncludingDecorations;
-(BOOL)isZooming;
-(CGSize)_nsis_contentSize;
-(void)_applyConstrainedContentSizeIfNecessary;
-(void)_centerContentIfNecessary;
-(void)_updateGradientMaskView;
-(BOOL)isDirectionalLockEnabled;
-(void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)arg1 ;
-(void)setScrollTestParameters:(UIScrollTestToBottomParameters *)arg1 ;
-(_UIStaticScrollBar *)_staticScrollBar;
-(void)_layoutStaticScrollBar;
-(void)_staticScrollBar:(id)arg1 didScrollInDirection:(CGPoint)arg2 ;
-(void)_hideScrollIndicators;
-(void)_updateUsesStaticScrollBar;
-(void)_enableOnlyGestureRecognizersForCurrentTouchLevel;
-(void)_setUsesStaticScrollBar:(BOOL)arg1 ;
-(void)handlePan:(id)arg1 ;
-(void)handlePinch:(id)arg1 ;
-(void)_updatePanGestureConfiguration;
-(void)_handleSwipe:(id)arg1 ;
-(void)_updateScrollGestureRecognizersEnabled;
-(BOOL)_startBeingDraggedByChild:(id)arg1 ;
-(BOOL)_stopBeingDraggedByChild:(id)arg1 ;
-(BOOL)_transfersScrollToContainer;
-(double)_adjustedHorizontalOffsetPinnedToScrollableBounds:(double)arg1 ;
-(double)_adjustedVerticalOffsetPinnedToScrollableBounds:(double)arg1 ;
-(void)_startDraggingParent:(id)arg1 ;
-(void)_stopDraggingParent:(id)arg1 ;
-(double)zoomScale;
-(void)_adjustContentOffsetIfNecessary;
-(void)_attemptToDragParent:(id)arg1 forNewBounds:(CGRect)arg2 oldBounds:(CGRect)arg3 ;
-(void)_old_updateAutomaticContentSizeConstraintsIfNecessaryWithContentSize:(CGSize)arg1 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(CGPoint)_roundedProposedContentOffset:(CGPoint)arg1 ;
-(void)_notifyDidScroll;
-(void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)arg1 ;
-(void)_updateForChangedScrollRelatedInsets;
-(void)_adjustCrossingConstraintsIfNecessaryForOldContentInset:(UIEdgeInsets)arg1 ;
-(void)_stopScrollingNotify:(BOOL)arg1 pin:(BOOL)arg2 ;
-(void)_registerAsScrollToTopViewIfPossible;
-(void)_setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 animationCurve:(int)arg3 ;
-(BOOL)_usesLowFidelityPanning;
-(id)_scrollViewTouchDelayGesture;
-(void)_updateZoomGestureRecognizersEnabled;
-(void)_updatePagingGesture;
-(unsigned long long)_abuttedEdgesForContentOffset:(CGPoint)arg1 ;
-(unsigned long long)_currentlyAbuttedContentEdges;
-(void)_adjustScrollerIndicatorsIfNeeded;
-(void)delayed:(id)arg1 ;
-(void)_updatePinchGesture;
-(void)_systemGestureStateChanged:(id)arg1 ;
-(void)_handleLowFidelitySwipe:(id)arg1 ;
-(double)minimumZoomScale;
-(void)willRotateToInterfaceOrientation:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(id)arg1 ;
-(void)_registerForRotation:(BOOL)arg1 ofWindow:(id)arg2 ;
-(void)_flashScrollIndicatorsPersistingPreviousFlashes:(BOOL)arg1 ;
-(void)_setShowsBackgroundShadow:(BOOL)arg1 ;
-(BOOL)alwaysBounceHorizontal;
-(BOOL)alwaysBounceVertical;
-(double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(BOOL*)arg5 ;
-(void)_adjustStartOffsetForGrabbedBouncingScrollView;
-(CGPoint)_rubberBandContentOffsetForOffset:(CGPoint)arg1 outsideX:(BOOL*)arg2 outsideY:(BOOL*)arg3 ;
-(long long)keyboardDismissMode;
-(CGSize)_interpageSpacing;
-(CGPoint)_pagingOrigin;
-(BOOL)_isBouncing;
-(BOOL)_scrollViewWillEndDraggingWithDeceleration:(BOOL)arg1 ;
-(void)_startTimer:(BOOL)arg1 ;
-(void)_popTrackingRunLoopMode;
-(BOOL)_staysCenteredDuringPinch;
-(double)_zoomScaleFromPresentationLayer:(BOOL)arg1 ;
-(void)_scrollViewDidEndZooming;
-(void)_setZoomAnchorPoint:(CGPoint)arg1 ;
-(void)_scrollViewWillBeginZooming;
-(void)_activateZoomFeedback;
-(void)setZoomScale:(double)arg1 withAnchorPoint:(CGPoint)arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7 ;
-(void)_updatePinchGestureForState:(long long)arg1 ;
-(void)setZoomScale:(double)arg1 withAnchorPoint:(CGPoint)arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7 force:(BOOL)arg8 ;
-(BOOL)_beginTrackingWithEvent:(id)arg1 ;
-(void)_prepareToPageWithHorizontalVelocity:(double)arg1 verticalVelocity:(double)arg2 ;
-(void)_endPanNormal:(BOOL)arg1 ;
-(void)_resetScrollingWithUIEvent:(id)arg1 ;
-(void)_activateScrollFeedback;
-(void)_updatePanGesture;
-(CGPoint)_offsetToScrollToForArrowPressType:(long long)arg1 ;
-(void)_handleDirectionalScrollToOffset:(CGPoint)arg1 clampingToBounds:(BOOL)arg2 ;
-(CGPoint)_velocityForAnimatedScrollFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 ;
-(void)_setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 animationCurve:(int)arg3 animationAdjustsForContentOffsetDelta:(BOOL)arg4 ;
-(BOOL)_scrollToTopIfPossible:(BOOL)arg1 ;
-(id)_layoutVariablesWithAmbiguousValue;
-(void)_setWantsConstrainedContentSize:(BOOL)arg1 ;
-(BOOL)_evaluateWantsConstrainedContentSize;
-(void)setMinimumZoomScale:(double)arg1 ;
-(void)setMaximumZoomScale:(double)arg1 ;
-(double)_zoomRubberBandScaleForScale:(double)arg1 ;
-(void)_zoomToCenter:(CGPoint)arg1 scale:(double)arg2 duration:(double)arg3 force:(BOOL)arg4 ;
-(void)setZoomScale:(double)arg1 animated:(BOOL)arg2 ;
-(float)_zoomAnimationDurationForScale:(double)arg1 ;
-(void)_zoomAnimationDidStop;
-(void)_adjustContentSizeForView:(id)arg1 atScale:(double)arg2 ;
-(CGPoint)_zoomAnchorPoint;
-(void)_markScrollViewAnimationForKey:(id)arg1 ofView:(id)arg2 ;
-(double)_zoomScaleForRubberBandScale:(double)arg1 ;
-(double)_contentOffsetAnimationDuration;
-(void)_setContentOffsetAnimationDuration:(double)arg1 ;
-(BOOL)_getPagingDecelerationOffset:(CGPoint*)arg1 forTimeInterval:(double)arg2 ;
-(BOOL)_getBouncingDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 lastUpdateOffset:(double)arg3 min:(double)arg4 max:(double)arg5 decelerationFactor:(double)arg6 decelerationLnFactor:(double)arg7 velocity:(double*)arg8 ;
-(void)_getStandardDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 min:(double)arg3 max:(double)arg4 decelerationFactor:(double)arg5 decelerationLnFactor:(double)arg6 velocity:(double*)arg7 ;
-(void)_updateRubberbandingStatisticTrackingState;
-(void)_smoothScrollWithUpdateTime:(double)arg1 ;
-(void)_springBoardBlankedScreenNotification:(id)arg1 ;
-(void)_smoothScrollTimer:(id)arg1 ;
-(void)_smoothScrollDisplayLink:(id)arg1 ;
-(void)_registerForSpringBoardBlankedScreenNotification;
-(void)_runLoopModePopped:(id)arg1 ;
-(long long)_effectiveIndicatorStyle;
-(BOOL)_isAnimatingScroll;
-(CGPoint)_animatedTargetOffset;
-(CGPoint)_contentOffsetForLowFidelityScrollInDirection:(CGPoint)arg1 duration:(double*)arg2 ;
-(void)_lowFidelityScrollInDirection:(CGPoint)arg1 ;
-(void)setAlwaysBounceVertical:(BOOL)arg1 ;
-(UIRefreshControl *)_refreshControl;
-(void)_addContentSubview:(id)arg1 atBack:(BOOL)arg2 ;
-(BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3 ;
-(BOOL)delaysContentTouches;
-(double)_touchDelayForScrollDetection;
-(double)_scrollHysteresis;
-(id)_layoutObserver;
-(void)_setLayoutObserver:(id)arg1 ;
-(id)_swipeGestureRecognizer;
-(id)_touchesDelayedGestureRecognizer;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)_isRectFullyVisible:(CGRect)arg1 ;
-(BOOL)_adjustsTargetsOnContentOffsetChanges;
-(void)_setAdjustsTargetsOnContentOffsetChanges:(BOOL)arg1 ;
-(void)setScrollingEnabled:(BOOL)arg1 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(BOOL)isZoomEnabled;
-(void)_setFirstResponderKeyboardAvoidanceEnabled:(BOOL)arg1 ;
-(BOOL)_isFirstResponderKeyboardAvoidanceEnabled;
-(BOOL)_isScrollingToTop;
-(void)setPagingEnabled:(BOOL)arg1 ;
-(void)_setInterpageSpacing:(CGSize)arg1 ;
-(void)_setPagingOrigin:(CGPoint)arg1 ;
-(UIOffset)_firstPageOffset;
-(void)_setFirstPageOffset:(UIOffset)arg1 ;
-(unsigned long long)_abuttedPagingEdges;
-(void)setBounces:(BOOL)arg1 ;
-(BOOL)bounces;
-(void)setBouncesHorizontally:(BOOL)arg1 ;
-(BOOL)bouncesHorizontally;
-(void)setBouncesVertically:(BOOL)arg1 ;
-(BOOL)bouncesVertically;
-(void)setUpdateInsetBottomDuringKeyboardDismiss:(BOOL)arg1 ;
-(BOOL)updateInsetBottomDuringKeyboardDismiss;
-(double)keyboardBottomInsetAdjustmentDelta;
-(void)setAlwaysBounceHorizontal:(BOOL)arg1 ;
-(void)_setTransfersScrollToContainer:(BOOL)arg1 ;
-(BOOL)_isVerticalBouncing;
-(BOOL)_isHorizontalBouncing;
-(BOOL)showsHorizontalScrollIndicator;
-(BOOL)showsVerticalScrollIndicator;
-(void)setScrollIndicatorInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)scrollIndicatorInsets;
-(void)setIndicatorStyle:(long long)arg1 ;
-(double)decelerationRate;
-(void)setDecelerationRate:(double)arg1 ;
-(long long)indicatorStyle;
-(double)horizontalScrollDecelerationFactor;
-(void)setHorizontalScrollDecelerationFactor:(double)arg1 ;
-(double)verticalScrollDecelerationFactor;
-(void)setVerticalScrollDecelerationFactor:(double)arg1 ;
-(void)setAllowsMultipleFingers:(BOOL)arg1 ;
-(BOOL)allowsMultipleFingers;
-(void)setTracksImmediatelyWhileDecelerating:(BOOL)arg1 ;
-(BOOL)tracksImmediatelyWhileDecelerating;
-(BOOL)_contentOffsetRoundingEnabled;
-(void)_setContentOffsetRoundingEnabled:(BOOL)arg1 ;
-(unsigned long long)_allowedFocusBounceEdges;
-(void)_setAllowedFocusBounceEdges:(unsigned long long)arg1 ;
-(BOOL)preservesCenterDuringRotation;
-(void)setPreservesCenterDuringRotation:(BOOL)arg1 ;
-(void)flashScrollIndicators;
-(BOOL)_showsBackgroundShadow;
-(void)setShowBackgroundShadow:(BOOL)arg1 ;
-(CGPoint)_touchPositionForTouches:(id)arg1 ;
-(void)_setStaysCenteredDuringPinch:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_handleDirectionalPress:(id)arg1 ;
-(void)_setAllowedTouchTypesForScrolling:(id)arg1 ;
-(BOOL)_forwardsTouchesUpResponderChain;
-(void)_setForwardsTouchesUpResponderChain:(BOOL)arg1 ;
-(BOOL)_disableUpdateOffsetOnCancelTracking;
-(void)_setDisableUpdateOffsetOnCancelTracking:(BOOL)arg1 ;
-(void)_forcePanGestureToEndImmediately;
-(BOOL)_isInterruptingDeceleration;
-(BOOL)bouncesZoom;
-(void)setBouncesZoom:(BOOL)arg1 ;
-(BOOL)canCancelContentTouches;
-(void)setCanCancelContentTouches:(BOOL)arg1 ;
-(void)setDelaysContentTouches:(BOOL)arg1 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg1 ;
-(BOOL)scrollsToTop;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(double)_pagingFriction;
-(void)_setPagingFriction:(double)arg1 ;
-(double)_defaultPagingFriction;
-(void)_setRelativePanView:(id)arg1 ;
-(id)_relativePanView;
-(BOOL)_wantsConstrainedContentSize;
-(void)_setAutomaticContentConstraints:(id)arg1 ;
-(UIOffset)_offsetForCenterOfPossibleZoomView:(id)arg1 withIncomingBoundsSize:(CGSize)arg2 ;
-(void)_setVerticalFeedbackBehavior:(id)arg1 ;
-(id)_verticalFeedbackBehavior;
-(void)_setHorizontalFeedbackBehavior:(id)arg1 ;
-(id)_horizontalFeedbackBehavior;
-(void)_setZoomFeedbackBehavior:(id)arg1 ;
-(id)_zoomFeedbackBehavior;
-(double)maximumZoomScale;
-(void)_zoomToCenter:(CGPoint)arg1 scale:(double)arg2 duration:(double)arg3 ;
-(BOOL)_ownsAnimationForKey:(id)arg1 ofView:(id)arg2 ;
-(void)setZoomScale:(double)arg1 ;
-(void)zoomToRect:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)isZoomBouncing;
-(BOOL)_isAnimatingZoom;
-(CGPoint)_pageDecelerationTarget;
-(void)_unregisterForSpringBoardBlankedScreenNotification;
-(BOOL)_bounceForCarPlayIfNecessary;
-(void)_clearScrollBounceStatisticsTrackingState;
-(void)_commitScrollBounceStatisticsTrackingState;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(void)_beginRefreshing;
-(void)_endRefreshingAnimated:(BOOL)arg1 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(UIScrollTestToBottomParameters *)scrollTestParameters;
-(void)setKeyboardDismissMode:(long long)arg1 ;
-(UIGestureRecognizer *)directionalPressGestureRecognizer;
-(BOOL)_useContentDimensionVariablesForConstraintLowering;
-(void)_setUseContentDimensionVariablesForConstraintLowering:(BOOL)arg1 ;
-(NSArray *)_automaticContentConstraints;
-(NSArray *)_allowedTouchTypesForScrolling;
-(UIEdgeInsets)_contentScrollInset;
-(double)_horizontalVelocity;
-(double)_verticalVelocity;
-(UIEdgeInsets)_gradientMaskLengths;
-(UIEdgeInsets)_gradientMaskEdgeInsets;
-(void)_setGradientMaskLengths:(UIEdgeInsets)arg1 ;
-(void)_getGradientMaskBounds:(out CGRect*)arg1 startInsets:(out UIEdgeInsets*)arg2 endInsets:(out UIEdgeInsets*)arg3 intensities:(out UIEdgeInsets*)arg4 ;
-(double)_rubberBandOffsetWithoutDecorationForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(BOOL*)arg5 ;
-(double)_offsetWithoutDecorationForRubberBandOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 ;
-(double)_offsetForRubberBandOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 ;
-(double)_shadowHeightOffset;
-(void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)arg1 withOffset:(double)arg2 ;
-(void)_stopScrollDecelerationNotify:(BOOL)arg1 ;
-(void)_stopScrollingNotify:(BOOL)arg1 pin:(BOOL)arg2 tramplingDragFlags:(BOOL)arg3 ;
-(void)_clearContentOffsetAnimation;
-(void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)arg1 tramplingDragFlags:(BOOL)arg2 ;
-(CGPoint)_originalOffsetForAnimatedSetContentOffset;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(void)_delegateScrollViewAnimationEnded;
-(double)_contentFitCanScrollThreshold;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1 ;
-(void)_scrollViewDidEndDecelerating;
-(CGPoint)_adjustedContentOffsetForContentOffset:(CGPoint)arg1 ;
-(void)_adjustShadowsIfNecessary;
-(UIEdgeInsets)_gradientMaskInsets;
-(void)_setGradientMaskInsets:(UIEdgeInsets)arg1 ;
-(void)_setGradientMaskEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_shouldTrackImmediatelyWhileDecelerating;
-(void)_clearParentAdjustment;
-(void)_stopScrollingAndZoomingAnimations;
-(BOOL)_resetScrollingForGestureEvent:(id)arg1 ;
-(BOOL)_canCancelContentTouches:(id)arg1 ;
-(void)_moveContentSubview:(id)arg1 toBack:(BOOL)arg2 ;
-(void)_setContentOffset:(CGPoint)arg1 duration:(double)arg2 animationCurve:(int)arg3 ;
-(void)_setAbsoluteContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_updateScrollAnimationForChangedTargetOffset:(CGPoint)arg1 ;
-(void)_setAutomaticContentOffsetAdjustmentEnabled:(BOOL)arg1 ;
-(BOOL)_isAutomaticContentOffsetAdjustmentEnabled;
-(void)_forceDelegateScrollViewDidZoom:(BOOL)arg1 ;
-(void)animator:(id)arg1 stopAnimation:(id)arg2 fraction:(float)arg3 ;
-(BOOL)_scrollsToMakeFirstResponderVisible;
-(void)_setContentOffsetPinned:(CGPoint)arg1 ;
-(void)_setContentOffsetPinned:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_setContentScrollInset:(UIEdgeInsets)arg1 ;
-(id)_parentScrollView;
-(CGPoint)_animatedOriginalOffset;
-(CGPoint)_focusTargetOffset;
-(void)_setAlwaysBounceVertical:(BOOL)arg1 ;
-(void)_setShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(void)_setShowsHorizontalScrollIndicator:(BOOL)arg1 ;
-(void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(BOOL)arg2 lastAdjustment:(double*)arg3 ;
-(BOOL)_pagingLeft;
-(BOOL)_pagingRight;
-(BOOL)_pagingUp;
-(BOOL)_pagingDown;
-(void)_setAutoscrolling:(BOOL)arg1 ;
-(BOOL)_isAutoscrolling;
-(CGPoint)autoscrollContentOffset;
-(void)setAutoscrollContentOffset:(CGPoint)arg1 ;
-(CGRect)contentFrameForView:(id)arg1 ;
-(void)_adjustShadowsIfNecessaryForOffset:(double)arg1 ;
-(id)_backgroundShadowForSlideAnimation;
-(void)_pinContentOffsetToClosestPageBoundary;
-(CGRect)_rectForPageContainingView:(id)arg1 ;
-(BOOL)_viewIsInsideNavigationController;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 scrollAxis:(int)arg5 ;
-(void)_suppressImplicitAnimationsForScrollTest;
-(void)_incrementForScrollTest;
-(id)_scrollTestExtraResults;
-(void)_reenableImplicitAnimationsAfterScrollTest;
-(BOOL)_isAnimatingScrollTest;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 ;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 ;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 scrollAxis:(int)arg4 ;
-(BOOL)_temp_getFlag_systemGesturesRecognitionPossible;
-(void)_temp_setFlag_systemGesturesRecognitionPossible:(BOOL)arg1 ;
-(void)_temp_setFlag_tracking:(BOOL)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(int)scrollableDirections;
-(double)maxVelocityInDirection:(int)arg1 ;
-(void)_accumulateViewConstraintsIntoArray:(id)arg1 ;
-(void)_didAddDependentConstraint:(id)arg1 ;
-(void)_didRemoveDependentConstraint:(id)arg1 ;
-(BOOL)_constraintAffectsContentSize:(id)arg1 ;
-(id)_constraintsFromContentSize;
@end
