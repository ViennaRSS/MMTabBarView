//
//  NSTabViewItem+MMTabBarViewExtensions.h
//  MMTabBarView
//
//  Created by Michael Monscheuer on 9/29/12.
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

#import <MMTabBarView/MMTabBarItem.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSTabViewItem (MMTabBarViewExtensions) <MMTabBarItem>

@property (nullable, retain) NSImage *largeImage;
@property (nullable, retain) NSImage *icon;
@property (assign) BOOL isProcessing;
@property (assign) NSInteger objectCount;
@property (nullable, retain) NSColor *objectCountColor;
@property (assign) BOOL showObjectCount;
@property (assign) BOOL isEdited;
@property (assign) BOOL hasCloseButton;

@end

NS_ASSUME_NONNULL_END
