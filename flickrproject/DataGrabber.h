//
//  DataGrabber.h
//  FlickrProject
//
//  Created by Anthony Olukitibi on 2/2/13.
//  Copyright (c) 2013 Anthony Olukitibi All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFKissXMLRequestOperation.h"
#import "XMLReader.h"
#import "Flickr.h"
#import "Entry.h"
#import "Reachability.h"

@protocol DataGrabberDelegate <NSObject>
@optional
-(void) provide:(NSArray *)freshData;
-(void) sameImages;
@end

@interface DataGrabber : NSObject

@property (nonatomic, assign) id <DataGrabberDelegate> dataGrabberDelegate;

-(void) getFreshData;

@end
