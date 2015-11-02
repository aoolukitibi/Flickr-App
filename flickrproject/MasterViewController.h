//
//  MasterViewController.h
//  FlickrProject
//
//  Created by Anthony Olukitibi on 1/31/13.
//  Copyright (c) 2013 Anthony Olukitibi All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailViewController.h"
#import "CustomCell.h"
#import "DataGrabber.h"
#import "Entry.h"

@interface MasterViewController : UITableViewController <DataGrabberDelegate> {
    
    NSMutableArray *thePhotoArray;
    DataGrabber *dataGrabber;
    BOOL checkScroll;
}

@property (nonatomic, retain) NSMutableArray *thePhotoArray;

@end
