/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class KNMagicMoveWrapper, KNMotionBlurWrapper, NSMutableArray, NSString;

@interface KNContentAwareSwing : KNAnimationEffect <KNMagicMoveTransitionAnimator, KNMagicMoveFrameAnimator> {
    NSMutableArray *_effectTextures;
    KNMagicMoveWrapper *_magicMoveWrapper;
    KNMotionBlurWrapper *_motionBlurWrapper;
    id _motionBlurWrapperSetupShaderBlock;
    id _motionBlurWrapperTextureDrawOptionsBlock;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned int)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (BOOL)isCharacterAwareEffect;
+ (id)localizedMenuString:(int)arg1;
+ (BOOL)requiresBullets;
+ (BOOL)requiresPerspectiveTransform;
+ (BOOL)shouldDisableMagicMoveOnText;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animationsWithContext:(id)arg1;
- (void)dealloc;
- (void)p_setupMagicMoveWrapperWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)teardown;

@end
