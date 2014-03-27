//
//  WordsViewController.h
//  myCoreDataDemo
//
//  Created by Tony on 2014-03-14.
//  Copyright (c) 2014 Tony. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Vocabulary.h"
#import "Word.h"
#import "EditWordViewController.h"

@interface WordsViewController : UITableViewController

@property (strong,nonatomic) Vocabulary *vocabulary;

-(id) initWithVocabulary :( Vocabulary *) vocabulary;

@end
