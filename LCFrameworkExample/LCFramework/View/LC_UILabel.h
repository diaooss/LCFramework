//
//  LC_UILabel.h
//  LCFramework

//  Created by 郭历成 ( titm@tom.com ) on 13-9-21.
//  Copyright (c) 2014年 Licheng Guo iOS developer ( http://nsobject.me ).All rights reserved.
//  Also see the copyright page ( http://nsobject.me/copyright.rtf ).
//
//

#import <UIKit/UIKit.h>

@interface LC_UILabel : UILabel

@property(nonatomic,assign)  BOOL copyingEnabled;
@property(nonatomic,assign)  UIMenuControllerArrowDirection copyMenuArrowDirection;

-(id) initWithCopyingEnabled:(BOOL)copyingEnabled;
-(id) initWithFrame:(CGRect)frame copyingEnabled:(BOOL)copyingEnabled;



@end
