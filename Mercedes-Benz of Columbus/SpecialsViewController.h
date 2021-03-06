//
//  SpecialsViewController.h
//  Mercedes-Benz of Columbus
//
//  Created by Kelvin Graddick on 1/24/15.
//  Copyright (c) 2015 Wave Link, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SpecialsViewController : UITableViewController <UIGestureRecognizerDelegate>
{
    int selectedRow;
    int headerHeight;
}

@property(nonatomic, strong) NSMutableArray *specialsData;
@property(nonatomic, strong) NSMutableDictionary *settingData;

@end
