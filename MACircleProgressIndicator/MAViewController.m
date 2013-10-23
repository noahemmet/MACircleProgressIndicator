//
//  MAViewController.m
//  CircleProgressIndicator
//
//  Created by Manuel Alabor on 01.02.13.
//  Copyright (c) 2013 Manuel Alabor. All rights reserved.
//

#import "MAViewController.h"

@interface MAViewController ()

@end

@implementation MAViewController

-(void)awakeFromNib {
    // You can use Appearance Proxy to style the MACircleProgressIndicator
    MACircleProgressIndicator *appearance = [MACircleProgressIndicator appearance];
    
    // The color property sets the actual color of the procress circle (how
    // suprising ;) )
    appearance.color = [UIColor clearColor];
    appearance.unfinishedColor = [UIColor greenColor];
    appearance.colorAlpha = 0.0;
    appearance.unfinishedAlpha = 1.0;
    appearance.strokeWidth = 10.0;
    appearance.innerBorderWidth = 2.0;
    appearance.outerBorderWidth = 2.0;
    appearance.outerBorderAlpha = 1.0;
    appearance.innerBorderAlpha = 1.0;
    
    // Use the strokeWidth property to set the width of the
    // circle stroke excplicitly.

    
    // If you set the strokeWidthRatio, the width of the
    // circle stroke gets calculated related to the actual
    // size of the MACircleProgressIndicator view.
    //appearance.strokeWidthRatio = 0.15; // default
}

- (IBAction)onIncrease:(id)sender {
    float newValue = self.smallProgressIndicator.value + 0.1;
    self.smallProgressIndicator.value = newValue;
    self.largeProgressIndicator.value = newValue;
}

- (IBAction)onDecrease:(id)sender {
    float newValue = self.smallProgressIndicator.value - 0.1;
    self.smallProgressIndicator.value = newValue;
    self.largeProgressIndicator.value = newValue;
}
@end
