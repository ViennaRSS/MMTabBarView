//
//  MMTabPasteboardItem.h
//  MMTabBarView
//
//  Created by Michael Monscheuer on 9/11/12.
//
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

@class MMAttachedTabBarButton;
@class MMTabBarView;

@interface MMTabPasteboardItem : NSPasteboardItem 

@property (assign) NSUInteger sourceIndex;

@end

NS_ASSUME_NONNULL_END
