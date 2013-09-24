//
//  GalleryViewController.h
//  DetecTube
//
//  Created by Josep Marc Mingot Hidalgo on 16/09/13.
//  Copyright (c) 2013 Josep Marc Mingot Hidalgo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreDataCollectionViewController.h"

@interface GalleryViewController : CoreDataCollectionViewController<UICollectionViewDelegateFlowLayout, UISearchBarDelegate>

@property (strong, nonatomic) UIManagedDocument *detectorDatabase;
@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
- (IBAction)privateAction:(UISegmentedControl *)segmentedControl;

@end
