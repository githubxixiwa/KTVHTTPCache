//
//  KTVHCURLTools.h
//  KTVHTTPCache
//
//  Created by Single on 2017/8/10.
//  Copyright © 2017年 Single. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NSString *_Nullable (^KTVCacheFilter)(NSString *_Nullable url);

@interface KTVHCURLTools : NSObject

@property(nonatomic, copy) KTVCacheFilter cacheFilter;

+ (instancetype)sharedInstance;

- (NSString *)filterURL:(NSString *)URLString;

+ (NSString *)md5:(NSString *)URLString;

+ (NSString *)base64:(NSString *)URLString;

+ (NSString *)URLEncode:(NSString *)URLString;

+ (NSString *)URLDecode:(NSString *)URLString;

@end
