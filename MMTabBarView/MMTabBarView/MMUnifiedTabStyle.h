//
//  MMUnifiedTabStyle.h
//  --------------------
//
//  Created by Keith Blount on 30/04/2006.
//  Copyright 2006 Keith Blount. All rights reserved.
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

@interface MMUnifiedTabStyle : NSObject <MMTabStyle>

@property (assign) CGFloat leftMarginForTabBarView;

@end

NS_ASSUME_NONNULL_END
