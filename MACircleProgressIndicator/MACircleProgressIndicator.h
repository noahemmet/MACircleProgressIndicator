#import <UIKit/UIKit.h>

@interface MACircleProgressIndicator : UIView

/**
 * Represents the displayed progress value. Set it to update the progress indicator.
 * Pass a float number between 0.0 and 1.0.
 */
@property (assign, nonatomic) float value;

/**
 * The color which is used to draw the progress indicator. Use UIAppearance to
 * style according your needs.
 */
@property (strong, nonatomic) UIColor *color UI_APPEARANCE_SELECTOR;

/**
 * Alpha of progressed part of progress indicator. Use UIAppearance to
 * style according your needs.
 */
@property (assign, nonatomic) CGFloat colorAlpha UI_APPEARANCE_SELECTOR;
/**
 * Line cap of arc. Use UIAppearance to style according your needs.
 */
@property (assign, nonatomic) CGLineCap arcLineCap UI_APPEARANCE_SELECTOR;

/**
 * The color that is used to draw "unprogressed" part of progress indicator. Use UIAppearance to
 * style according your needs.
 */
@property (strong, nonatomic) UIColor* unfinishedColor UI_APPEARANCE_SELECTOR;

/**
 * Alpha of unprogressed part of the progress indicator. Use UIAppearance to
 * style according your needs.
 */
@property (assign, nonatomic) CGFloat unfinishedAlpha UI_APPEARANCE_SELECTOR;

/**
 * The color that is used to draw inner border. Use UIAppearance to
 * style according your needs.
 */
@property (strong, nonatomic) UIColor* innerBorderColor UI_APPEARANCE_SELECTOR;

/**
 * Width of inner border. Use UIAppearance to style according your needs.
 */
@property (assign, nonatomic) CGFloat innerBorderWidth UI_APPEARANCE_SELECTOR;

/**
 * Line cap of inner border. Use UIAppearance to style according your needs.
 */
@property (assign, nonatomic) CGLineCap innerBorderLineCap UI_APPEARANCE_SELECTOR;

/**
 * Alpha of inner border. Use UIAppearance to style according your needs.
 */
@property (assign, nonatomic) CGFloat innerBorderAlpha UI_APPEARANCE_SELECTOR;

/**
 * Alpha of outer border. Use UIAppearance to style according your needs.
 */
@property (assign, nonatomic) CGFloat outerBorderAlpha UI_APPEARANCE_SELECTOR;

/**
 * The color that is used to draw outer border. Use UIAppearance to
 * style according your needs.
 */
@property (strong, nonatomic) UIColor* outerBorderColor UI_APPEARANCE_SELECTOR;

/**
 * Width of outer border. Use UIAppearance to style according your needs.
 */
@property (assign, nonatomic) CGFloat outerBorderWidth UI_APPEARANCE_SELECTOR;
/**
 * Line cap of outer border. Use UIAppearance to style according your needs.
 */
@property (assign, nonatomic) CGLineCap outerBorderLineCap UI_APPEARANCE_SELECTOR;

/**
 * The stroke width ratio is used to calculate the circle thickness regarding the
 * actual size of the progress indicator view. When setting this, strokeWidth is
 * ignored.
 * Use UIAppearance to style according your needs.
 */
@property (assign, nonatomic) CGFloat strokeWidthRatio UI_APPEARANCE_SELECTOR;

/**
 * If you'd like to specify the stroke thickness of the progress indicator circle
 * explicitly, use the strokeWidth property. When setting this, strokeWidthRatio
 * is ignored.
 * Use UIAppearance to style according your needs.
 */
@property (assign, nonatomic) CGFloat strokeWidth UI_APPEARANCE_SELECTOR;

@end
