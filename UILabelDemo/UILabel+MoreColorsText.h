//
//  UILabel+MoreColorsText.h
//  ToumiClient
//
//  Created by 张亚丰 on 15/7/19.
//  Copyright (c) 2015年 com.yixin.itoumi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel(MoreColorsText)
/**
 * 通过textColorPairs修改UILabel text的不同颜色值
 * @param textColorPairs:@[{@"100":@"0ffff"}]
 */
-(void)setAttributeLabelWithtextColorPairs:(NSArray*)textColorPairs;
@end
