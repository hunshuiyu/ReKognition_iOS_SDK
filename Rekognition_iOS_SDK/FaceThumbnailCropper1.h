//
//  FaceThumbnailCropper.h
//  ReKo SDK
//
//  Created by Kuang Han on 10/20/13.
//  Copyright (c) 2013 Orbeus Inc. All rights reserved.
//
//  A tool that helps crop face thumbnails from large images. The thumbnail is optimized for Rekognition API that garuantees high accuracy by cropping only the area sensitive to the backend measurement algorithm. The tool also downgrades the thumbnail resolution to an acceptable extent to minimum the transmission bandwith.


#import <Foundation/Foundation.h>

@interface RKFace : NSObject
@property (nonatomic, retain) UIImage* image;
@property (nonatomic) CGRect bb;  // Normalized space (between 0.0f and 1.0f)
@end

@interface FaceThumbnailCropper1 : NSObject
+ (NSArray *)cropFaceThumbnails:(NSData *)image;
+ (NSArray*)cropFaceThumbnails:(NSData *)image returnBB:(BOOL)returnBB; // returns an Array of Face
@end