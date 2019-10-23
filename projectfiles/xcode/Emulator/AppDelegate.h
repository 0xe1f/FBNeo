//
//  AppDelegate.h
//  FinalBurnNeo
//
//  Created by Akop Karapetyan on 10/15/19.
//  Copyright © 2019 Akop Karapetyan. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "FBScreenView.h"
@class FBVideo;

@interface AppDelegate : NSObject <NSApplicationDelegate, FBScreenViewDelegate>
{
    IBOutlet FBScreenView *screen;
}

+ (AppDelegate *) sharedInstance;

@property (readonly) FBVideo *video;

@end
