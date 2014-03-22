//
//  SimpleTableViewCell.h
//  CustomiseUITableViewCell
//
//  Created by Rajeev Kumar on 22/03/14.
//  Copyright (c) 2014 rajeev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *prepTimeLabel;
@property (weak, nonatomic) IBOutlet UIImageView *thumbnailImageView;

@end
