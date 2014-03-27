//
//  Word.h
//  myCoreDataDemo
//
//  Created by Tony on 2014-03-13.
//  Copyright (c) 2014 Tony. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Word : NSManagedObject

@property (nonatomic, retain) NSString * word;
@property (nonatomic, retain) NSString * translation;
@property (nonatomic, retain) NSManagedObject *vocabulary;

@end
