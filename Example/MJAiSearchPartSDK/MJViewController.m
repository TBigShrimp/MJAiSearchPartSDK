//
//  MJViewController.m
//  MJAiSearchPartSDK
//
//  Created by TBigShrimp on 11/18/2019.
//  Copyright (c) 2019 TBigShrimp. All rights reserved.
//

#import "MJViewController.h"
#import <MJAISearchLib/MJAiSearchPart.h>
#import <MJAISearchLib/MJDrawCircleViewController.h>

@interface MJViewController ()<MJCanvasCircleSelectedPartProtocol>

@end

@implementation MJViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    [MJAiSearchPart test];
    
    MJDrawCircleViewController *dw = [[MJDrawCircleViewController alloc] init];
    [dw setLineColor:[UIColor yellowColor]];
    dw.delegate = self;
    [dw willMoveToParentViewController:self];
    dw.view.clipsToBounds = NO;
    dw.carTopOffset = 330;
    dw.carBottomOffset = -60;
    [self addChildViewController:dw];
    [self.view addSubview:dw.view];
    [dw didMoveToParentViewController:self];
    
}
/**
 圈选之后开始请求
 */
- (void)canvasCircleRequestStart:(NSArray *)partsPosition{
    
    
    
    
}

/**
 圈选区域警示代理   提示用户圈选区域太小或者未圈到车体区域
 
 */
- (void)canvasDrawOutSide{
    
}
- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
