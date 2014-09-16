//
//  CenterViewController.h
//  WaterFlowViewDemo
//
//  Created by Smallsmall on 12-6-11.
//  Copyright (c) 2012年 activation group. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WaterFlowView.h"
#import "ImageViewCell.h"

@interface CenterViewController : UIViewController<WaterFlowViewDelegate,WaterFlowViewDataSource>
{
    
    NSMutableArray *arrayData;
    WaterFlowView *waterFlow;
}

- (void)dataSourceDidLoad;
- (void)dataSourceDidError;

@end
