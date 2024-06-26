//
//  MMOverflowPopUpButtonCell.h
//  MMTabBarView
//
//  Created by Michael Monscheuer on 9/24/12.
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

#import <MMTabBarView/MMOverflowPopUpButton.h>

NS_ASSUME_NONNULL_BEGIN

@class MMImageTransitionAnimation;

@interface MMOverflowPopUpButtonCell : NSPopUpButtonCell <NSAnimationDelegate>

@property (nullable, copy) MMCellBezelDrawingBlock bezelDrawingBlock;
@property (strong) NSImage *image;
@property (nullable, strong) NSImage *secondImage;
@property (assign) CGFloat secondImageAlpha;
@property (assign) BOOL centerImage;

- (void)drawImage:(NSImage *)image withFrame:(NSRect)frame inView:(NSView *)controlView alpha:(CGFloat)alpha;

@end

NS_ASSUME_NONNULL_END
