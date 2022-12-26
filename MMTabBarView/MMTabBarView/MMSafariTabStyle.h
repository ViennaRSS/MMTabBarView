//
//  MMSafariTabStyle.h
//  MMTabBarView
//
//  Created by Michael Monscheuer on 9/20/12.
//  Copyright 2011 Marrintech. All rights reserved.
//

#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Cocoa;
#else
#import <Cocoa/Cocoa.h>
#endif
#import <MMTabBarView/MMTabStyle.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMSafariTabStyle : NSObject <MMTabStyle>

@end

NS_ASSUME_NONNULL_END
