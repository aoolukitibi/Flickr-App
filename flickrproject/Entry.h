//
//  Entry.h
//  FlickrProject
//
//  Created by Anthony Olukitibi on 2/2/13.
//  Copyright (c) 2013 Anthony Olukitibi All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Entry : NSObject {
    
    NSString *theTitle;
    NSURL *theImageURLThumb;
    NSURL *theImageURLLarge;
    
}

@property (nonatomic, copy) NSString *theTitle;
@property (nonatomic, copy) NSURL *theImageURLThumb;
@property (nonatomic, copy) NSURL *theImageURLLarge;

- (id)initWithData:(NSDictionary *)theEntryData;

@end
