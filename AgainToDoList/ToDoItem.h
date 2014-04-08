//
//  ToDoItem.h
//  AgainToDoList
//
//  Created by zuzhi on 14-4-7.
//  Copyright (c) 2014年 zuzhi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *createDate;

@end
