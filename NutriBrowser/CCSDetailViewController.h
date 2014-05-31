//
//  CCSDetailViewController.h
//  NutriBrowser
//
//  Created by Thomas Coleman on 5/31/14.
//  Copyright (c) 2014 Coleman Creative Services. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCSDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
