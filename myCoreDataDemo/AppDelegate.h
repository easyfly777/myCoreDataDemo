//
//  AppDelegate.h
//  myCoreDataDemo
//
//  Created by Tony on 2014-03-13.
//  Copyright (c) 2014 Tony. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VocabulariesViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;


@property (strong,nonatomic)UINavigationController *navigationController;
@property (strong,nonatomic)VocabulariesViewController *vocabulariesViewController;


- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
