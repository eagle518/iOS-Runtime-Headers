/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDChart;

@interface EDChartSheet : EDSheet {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    boolmIsBoundsSet;
    } mBounds;
    CHDChart *mMainChart;
}

- (id).cxx_construct;
- (void)addDrawable:(id)arg1;
- (bool)areBoundsSet;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)mainChart;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMainChart:(id)arg1;
- (void)teardown;

@end
