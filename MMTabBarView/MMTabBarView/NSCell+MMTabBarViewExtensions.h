//
//  NSCell+MMTabBarViewExtensions.h
//  MMTabBarView
//
//  Created by Michael Monscheuer on 9/25/12.
//  Copyright (c) 2016 Michael Monscheuer. All rights reserved.
//

#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Cocoa;
#else
#import <Cocoa/Cocoa.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface NSCell (MMTabBarViewExtensions)

#pragma mark Image Scaling

- (NSSize)mm_scaleImageWithSize:(NSSize)imageSize toFitInSize:(NSSize)canvasSize scalingType:(NSImageScaling)scalingType;

@end

NS_ASSUME_NONNULL_END
