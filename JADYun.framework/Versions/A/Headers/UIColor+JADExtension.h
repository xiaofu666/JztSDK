//
//  UIColor+JADExtension.h
//  JADYun
//
//  Created by wangshuai331 on 2021/4/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (JADExtension)

+ (UIColor *)jadGenerateDynamickColor:(UIColor *)lightColor darkColor:(UIColor *)darkColor;

@end

NS_ASSUME_NONNULL_END
