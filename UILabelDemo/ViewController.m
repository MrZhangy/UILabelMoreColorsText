//
//  ViewController.m
//  UILabelDemo
//
//  Created by 张亚丰 on 15/9/20.
//  Copyright © 2015年 zhangyafeng. All rights reserved.
//

#import "ViewController.h"
#import "UILabel+MoreColorsText.h"
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UILabel *label;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self.label setAttributeLabelWithtextColorPairs:@[@{@"2":@"FF7200"},@{@"7":[UIColor redColor]}]];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
