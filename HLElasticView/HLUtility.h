//
//  HLUtility.h
//  Playground
//
//  Created by Htin Linn on 2/11/14.
//  Copyright (c) 2014 Htin Linn. All rights reserved.
//

#import <UIKit/UIKit.h>

#define SCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height
#define SCREEN_WIDTH [[UIScreen mainScreen] bounds].size.width
#define CENTER(origin, length) origin + length / 2

CGFloat rubberBandedValueForDistance(CGFloat distance);
CGFloat dampedValue(CGFloat origin, CGFloat length, CGFloat delta, CGFloat upperThreshold);
CGPoint dampedDistance(CGRect frame, CGPoint delta);
