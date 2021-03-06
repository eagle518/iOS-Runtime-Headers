/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, UILabel;

@interface SKUITrendingSearchView : UIView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInset;
    NSArray *_resultButtons;
    UILabel *_titleLabel;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property(copy) NSArray * resultButtons;
@property(retain) UILabel * titleLabel;

+ (id)defaultButtonFont;
+ (id)defaultTitleColor;
+ (id)defaultTitleFont;
+ (id)resultButtonWithTitle:(id)arg1;

- (void).cxx_destruct;
- (float)_contentHeightBySizingToFitWidth:(float)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)layoutSubviews;
- (id)resultButtons;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setResultButtons:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)titleLabel;

@end
