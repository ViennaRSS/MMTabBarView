//
//  main.m
//  MMTabBarView Demo
//
//  Created by Michael Monscheuer on 9/19/12.
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

int main(int argc, char const* __nonnull argv[__nonnull])
{
    return NSApplicationMain(argc, argv);
}
