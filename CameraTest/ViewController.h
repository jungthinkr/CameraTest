//
//  ViewController.h
//  CameraTest
//
//  Created by Aaron Liu on 8/10/15.
//  Copyright (c) 2015 Aaron Liu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate>


- (IBAction)Stepperaction:(UIStepper *)sender;

@property (weak, nonatomic) IBOutlet UIStepper *stepperbutton;

@property(nonatomic, retain) IBOutlet UIView *vImagePreview;
@end

