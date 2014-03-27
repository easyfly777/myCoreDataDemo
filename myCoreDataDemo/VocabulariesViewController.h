//
//  VocabulariesViewController.h
//  myCoreDataDemo
//
//  Created by Tony on 2014-03-13.
//  Copyright (c) 2014 Tony. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Vocabulary.h"
#import "WordsViewController.h"

@interface VocabulariesViewController : UITableViewController <UIAlertViewDelegate>

@property (strong,nonatomic) NSManagedObjectContext * managedObjectContext;
@property (strong,nonatomic) NSFetchedResultsController *fetchedResultsController;

-(id) initWithManagedObjectContext :(NSManagedObjectContext *)context;

@end
