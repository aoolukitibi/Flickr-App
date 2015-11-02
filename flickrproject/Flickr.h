//
//  Flickr.h
//  FlickrProject
//
//  Created by Anthony Olukitibi on 2/2/13.
//  Copyright (c) 2013 Anthony Olukitibi All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Entry.h"

@interface Flickr : NSObject {
    NSDate *updated;
    NSMutableArray *theEntries;
    
}

@property (nonatomic, retain) NSDate *updated;
@property (nonatomic, retain) NSMutableArray *theEntries;

-(id)initWithData:(NSDictionary *)theData;

@end
