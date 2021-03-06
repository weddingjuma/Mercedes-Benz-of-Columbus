//
//  ShowroomViewController.h
//  Mercedes-Benz of Columbus
//
//  Created by Kelvin Graddick on 1/24/15.
//  Copyright (c) 2015 Wave Link, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ShowroomViewController : UITableViewController <UIGestureRecognizerDelegate>

@property(nonatomic, strong) NSString *type;
@property(nonatomic, strong) NSString *make;
@property(nonatomic, strong) NSString *model;
@property(nonatomic, strong) NSMutableArray *vehicleData;

@end
