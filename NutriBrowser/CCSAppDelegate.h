//
//  CCSAppDelegate.h
//  NutriBrowser
//
//  Created by Thomas Coleman on 5/31/14.
//  Copyright (c) 2014 Coleman Creative Services. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
