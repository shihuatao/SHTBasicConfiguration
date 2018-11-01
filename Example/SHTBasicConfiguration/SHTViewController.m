//
//  SHTViewController.m
//  SHTBasicConfiguration
//
//  Created by shihuatao on 10/30/2018.
//  Copyright (c) 2018 shihuatao. All rights reserved.
//

#import "SHTViewController.h"
#import "SHTHeader.h"
@interface SHTViewController ()

@end

@implementation SHTViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    
    DLog(@"width %lf---  heigth %lf",self.view.frame.size.width,kSizeHeight);
    
    DLog(@"[[UIScreen mainScreen] currentMode].size %lf---%lf",[[UIScreen mainScreen] currentMode].size.width,[[UIScreen mainScreen] currentMode].size.height);


}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
