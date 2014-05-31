//
//  CCSMasterViewController.h
//  NutriBrowser
//
//  Created by Thomas Coleman on 5/31/14.
//  Copyright (c) 2014 Coleman Creative Services. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CCSDetailViewController;

#import <CoreData/CoreData.h>

@interface CCSMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) CCSDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
