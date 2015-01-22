//
//  ToDoItem.h
//  ToDoList
//
//  Created by Khoi Nguyen on 22/01/15.
//  Copyright (c) 2015 Khoi Nguyen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
