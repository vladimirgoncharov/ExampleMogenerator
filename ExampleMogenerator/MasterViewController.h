//
//  MasterViewController.h
//  ExampleMogenerator
//
//  Created by Владимир on 02.10.14.
//  Copyright (c) 2014 FlatStack. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

