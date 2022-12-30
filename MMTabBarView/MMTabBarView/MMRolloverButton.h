//
//  MMRolloverButton.h
//  MMTabBarView
//
//  Created by Michael Monscheuer on 9/8/12.
//

#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Cocoa;
#else
#import <Cocoa/Cocoa.h>
#endif

#import <MMTabBarView/MMRolloverButtonCell.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMRolloverButton : NSButton 

#pragma mark Cell Interface

@property (nullable, strong) NSImage *rolloverImage;
@property (assign) MMRolloverButtonType rolloverButtonType;

@property (readonly) BOOL mouseHovered;

@property (assign) BOOL simulateClickOnMouseHovered;

@end

NS_ASSUME_NONNULL_END
