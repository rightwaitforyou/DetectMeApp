//
//  ExecuteDetectorViewController.h
//  LabelMe
//
//  Created by Josep Marc Mingot Hidalgo on 22/03/13.
//  Copyright (c) 2013 CSAIL. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CameraVideoViewController.h"
#import "DetectView.h"
#import "DetectorWrapper.h"
#import "Detector.h"
#import "AYUIButton.h"
#import "Pyramid.h"
#import "TagView.h"
#import "TestHelper.h"


@protocol ExecuteDetectorViewControllerDelegate <NSObject>

@optional //just for updating detectionthreshold when a single detector is called
- (void) updateDetector:(DetectorWrapper *) detectorWrapper;

@end


@interface ExecuteDetectorViewController : CameraVideoViewController <UITableViewDataSource, UITableViewDelegate, TestHelperDelegate>


@property (nonatomic, strong) id<ExecuteDetectorViewControllerDelegate> delegate;

//model properties
@property (strong, nonatomic) NSArray *detectors;

//self views
@property (weak, nonatomic) IBOutlet TagView *tagView;
@property (nonatomic, weak) IBOutlet UIImageView *HOGimageView;
@property (nonatomic, weak) IBOutlet DetectView *detectView;
@property (weak, nonatomic) IBOutlet UISlider *detectionThresholdSliderButton;
@property (weak, nonatomic) IBOutlet AYUIButton *settingsButton;
@property (weak, nonatomic) IBOutlet AYUIButton *cancelButton;
@property (weak, nonatomic) IBOutlet AYUIButton *switchButton;
@property (weak, nonatomic) IBOutlet UITableView *settingsTableView;
@property (weak, nonatomic) IBOutlet UIButton *connectButton;


//info label
@property (weak, nonatomic) IBOutlet UILabel *infoLabel;


- (IBAction)showSettingsAction:(id)sender;
- (IBAction)cancelAction:(id)sender;
- (IBAction)switchCameras:(id)sender;
- (IBAction)switchValueDidChange:(UISwitch *)sw;
- (IBAction)sendBoxesToServer:(UIButton *)senderButton;

// test
@property BOOL isTest;
@property (weak, nonatomic) IBOutlet UIButton *startTestButton;
- (IBAction)startTestAction:(UIButton *) startTestButton;
@property (weak, nonatomic) IBOutlet UIProgressView *countDownProgressView;


@end