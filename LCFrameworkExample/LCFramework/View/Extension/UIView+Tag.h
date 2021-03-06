//
//  UIView+Tag.h
//  LCFramework

//  Created by 郭历成 ( ADVICE & BUG : titm@tom.com ) on 13-10-11.
//  Copyright (c) 2014年 Licheng Guo iOS developer ( http://nsobject.me ).All rights reserved.
//  Also see the copyright page ( http://nsobject.me/copyright.rtf ).
//
//

#import <UIKit/UIKit.h>

@interface UIView (Tag)

@property (nonatomic, retain) NSString * tagString;

- (UIView *)viewWithTagString:(NSString *)value;

@end
