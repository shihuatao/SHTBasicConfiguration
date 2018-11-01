//
//  SHTHeader.h
//  Pods
//
//  Created by mapbar on 2018/10/30.
//

#ifndef SHTHeader_h
#define SHTHeader_h


/** 版本信息 */
#define kCurrentAppVersion ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"])

#define kCurrentSystemVersion [[[UIDevice currentDevice] systemVersion] floatValue]

#define kCurrentDeviceVersion [UIDevice currentDevice].systemVersion


/** 设备信息 */
#define kSizeWidth    ([[UIScreen mainScreen] bounds].size.width)

#define kSizeHeight   ([[UIScreen mainScreen] bounds].size.height)

#define kIphone6Width(w) (((w) * SizeWidth) / 375.0f)

#define kIphone6Height(h) (((h) * SizeHeight) / 667.0f)

#define kNavigationHeight (44 + [[UIApplication sharedApplication] statusBarFrame].size.height)

#define kStatusBarHeight ([[UIApplication sharedApplication] statusBarFrame].size.height)

#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750,1334), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone6P ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242,2208), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125,2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhoneXS ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125,2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhoneR ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828,1792), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhoneXS Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242,2688), [[UIScreen mainScreen] currentMode].size) : NO)


#define kTabbarHeight ([[UIApplication sharedApplication] statusBarFrame].size.height>20?83:49)

#define kAppDelegate ((AppDelegate*)[[UIApplication sharedApplication] delegate])


/** 设置RGB */
#define kHexRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

/** 设置RGB  透明度=? */
#define kHexRGBSetAlpha(rgbValue,alphaValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:alphaValue]


/** 颜色 */
#define kColoWhite [UIColor colorWithRed:1 green:1 blue:1 alpha:1]
#define kColoClear [UIColor colorWithRed:1 green:1 blue:1 alpha:0]



/*weakSelf*/
#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self


/** 对为nil的字符串进行处理 */
#define kAvoidNilString(currentStr) (currentStr ? currentStr : @"")

/** 打印log日志 */

#ifdef DEBUG
#ifndef DLog
#   define DLog(fmt, ...) {NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);}
#endif
#ifndef ELog
#   define ELog(err) {if(err) DLog(@"%@", err)}
#endif
#else
#ifndef DLog
#   define DLog(...)
#endif
#ifndef ELog
#   define ELog(err)
#endif
#endif



#endif /* SHTHeader_h */
