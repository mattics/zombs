//
//  mattrDetailViewController.h
//  Zombie Survival Guide
//
//  Created by Matt Reedman on 17/11/2013.
//  Copyright (c) 2013 Matt Reedman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface mattrDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
