//
//  AppDelegate.h
//  reactive
//
//  Created by bluumi_02 on 16/4/18.
//  Copyright © 2018 Adrian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

