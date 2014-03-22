//
//  SimpleTableViewCell.m
//  CustomiseUITableViewCell
//
//  Created by Rajeev Kumar on 22/03/14.
//  Copyright (c) 2014 rajeev. All rights reserved.
//

#import "SimpleTableViewCell.h"

@implementation SimpleTableViewCell

@synthesize  prepTimeLabel = _prepTimeLabel;
@synthesize  thumbnailImageView = _thumbnailImageView;
@synthesize  nameLabel = _nameLabel;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)awakeFromNib
{
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
