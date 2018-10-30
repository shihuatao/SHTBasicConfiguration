//
//  SHTHeader.h
//  Pods
//
//  Created by mapbar on 2018/10/30.
//

#ifndef SHTHeader_h
#define SHTHeader_h

/** 设备信息 */
#define SizeWidth    ([[UIScreen mainScreen] bounds].size.width)
#define SizeHeight   ([[UIScreen mainScreen] bounds].size.height)

#define kIphone6Width(w) (((w) * SizeWidth) / 375.0f)
#define kIphone6Height(h) (((h) * SizeHeight) / 667.0f)
#define kNavigationHeight (44 + [[UIApplication sharedApplication] statusBarFrame].size.height)
#define kStatusBarHeight ([[UIApplication sharedApplication] statusBarFrame].size.height)

//#define kCurrentAppVersion ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"])
//#define kCurrentSystemVersion [[[UIDevice currentDevice] systemVersion] floatValue]
//#define kCurrentDeviceVersion [UIDevice currentDevice].systemVersion


#endif /* SHTHeader_h */
