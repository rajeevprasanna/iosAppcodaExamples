//
//  DeviceDetailViewController.h
//  MyStore
//
//  Created by Rajeev Kumar on 23/03/14.
//  Copyright (c) 2014 rajeev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DeviceDetailViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *versionTextField;
@property (weak, nonatomic) IBOutlet UITextField *companyTextField;
- (IBAction)save:(id)sender;
- (IBAction)cancel:(id)sender;

@end
