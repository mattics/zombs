//
//  mattrAppDelegate.h
//  Zombie Survival Guide
//
//  Created by Matt Reedman on 17/11/2013.
//  Copyright (c) 2013 Matt Reedman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface mattrAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
