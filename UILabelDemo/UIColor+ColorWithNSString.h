//
//  UIColor+ColorWithNSString.h
//  ToumiClient
//
//  Created by Zhentai on 15-2-2.
//  Copyright (c) 2015年 com.yixin.itoumi. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIColor (ColorWithNSString)
/**
 *  通过输入NSString,生成UIColor对象
 *
 *  @param color 输入NSString 颜色值
 *
 *  @return 生成 UIColor 对象
 */
+ (UIColor *) colorWithHexString : (NSString *) color;
@end
