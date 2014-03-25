//
//  MMStretchScrapGestureRecognizerDelegate.h
//  LooseLeaf
//
//  Created by Adam Wulf on 3/10/14.
//  Copyright (c) 2014 Milestone Made, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Constants.h"
#import "MMPanGestureDelegate.h"

@protocol MMStretchScrapGestureRecognizerDelegate <MMPanGestureDelegate>

-(BOOL) panScrapRequiresLongPress;

-(NSArray*) scraps;


-(CGPoint) beginStretchForScrap:(MMScrapView*)scrap;

-(void) endStretchForScrap:(MMScrapView*)scrap;


/**
 * when a stretch gesture pulls a scrap apart,
 * this delegate method will be called to hand off
 * the touches for the two resulting scraps
 * to be panned
 */
-(void) stretchShouldSplitScrap:(MMScrapView*)scrap toTouches:(NSOrderedSet*)touches1 andTouches:(NSOrderedSet*)touches2;


@end