//
//  NSArray+Map.h
//  WGCategory
//
//  Created by RayMi on 2018/1/20.
//  Copyright © 2018年 WG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Map)
- (instancetype)wg_map:(id(^)(id obj,NSUInteger idx))block;
@end
