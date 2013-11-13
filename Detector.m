//
//  Detector.m
//  DetectMe
//
//  Created by Josep Marc Mingot Hidalgo on 23/10/13.
//  Copyright (c) 2013 Josep Marc Mingot Hidalgo. All rights reserved.
//

#import "Detector.h"
#import "AnnotatedImage.h"
#import "MultipleDetector.h"
#import "Rating.h"
#import "User.h"
#import "MultipleDetector.h"

@implementation Detector

@dynamic averageRating;
@dynamic createdAt;
@dynamic detectionThreshold;
@dynamic image;
@dynamic isPublic;
@dynamic isSent;
@dynamic name;
@dynamic parentID;
@dynamic precisionRecall;
@dynamic serverDatabaseID;
@dynamic sizes;
@dynamic supportVectors;
@dynamic targetClass;
@dynamic timeLearning;
@dynamic type;
@dynamic updatedAt;
@dynamic weights;
@dynamic annotatedImages;
@dynamic ratings;
@dynamic user;
@dynamic multipleDetectors;



- (void)prepareForDeletion
{
    // Delete multiple detectors with just this detector
    NSSet *multipleDetectors = self.multipleDetectors;
    for(MultipleDetector *md in multipleDetectors)
        if(md.detectors.count==1)
            [self.managedObjectContext deleteObject:md];
}

@end
