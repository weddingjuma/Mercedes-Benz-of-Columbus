//
//  HomeViewController.h
//  Mercedes-Benz of Columbus
//
//  Created by Kelvin Graddick on 12/1/14.
//  Copyright (c) 2014 Wave Link, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeViewController : UITableViewController <UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    int selectedRow;
}

@property(nonatomic, strong) NSMutableArray *menuData;
@property(nonatomic, strong) NSMutableDictionary *settingData;

@end
