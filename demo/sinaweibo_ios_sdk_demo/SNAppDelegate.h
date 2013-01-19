//
//  SNAppDelegate.h
//  sinaweibo_ios_sdk_demo
//
//  Created by Wade Cheng on 4/23/12.
//  Copyright (c) 2012 SINA. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kAppKey             @"1490389487"
#define kAppSecret          @"be8b7f9b295120ceb2985d6844df2580"
#define kAppRedirectURI     @"http://api.weibo.com/oauth2/default.html"

#ifndef kAppKey
#error
#endif

#ifndef kAppSecret
#error
#endif

#ifndef kAppRedirectURI
#error
#endif

@class SinaWeibo;
@class SNViewController;

@interface SNAppDelegate : UIResponder <UIApplicationDelegate>
{
    SinaWeibo *sinaweibo;
}

@property (readonly, nonatomic) SinaWeibo *sinaweibo;
@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) SNViewController *viewController;

@end
