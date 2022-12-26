//
//  MMSierraRolloverButton.h
//  MMTabBarView
//
//  Created by Isaiah Carew on 4/19/17.
//

#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Cocoa;
#else
#import <Cocoa/Cocoa.h>
#endif

#import <MMTabBarView/MMRolloverButton.h>
#import <MMTabBarView/MMSierraRolloverButtonCell.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMSierraRolloverButton : MMRolloverButton

@end

NS_ASSUME_NONNULL_END
