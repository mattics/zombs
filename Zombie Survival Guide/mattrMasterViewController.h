//
//  mattrMasterViewController.h
//  Zombie Survival Guide
//
//  Created by Matt Reedman on 17/11/2013.
//  Copyright (c) 2013 Matt Reedman. All rights reserved.
//

#import <UIKit/UIKit.h>

@class mattrDetailViewController;

#import <CoreData/CoreData.h>

@interface mattrMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) mattrDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
