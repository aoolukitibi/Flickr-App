//
//  DataGrabber.m
//  FlickrProject
//
//  Created by Anthony Olukitibi on 2/2/13.
//  Copyright (c) 2013 Anthony Olukitibi All rights reserved.
//

#import "DataGrabber.h"

@implementation DataGrabber

@synthesize dataGrabberDelegate;

-(void) getFreshData{
    Reachability *reachability = [Reachability reachabilityForInternetConnection];
    NetworkStatus internetStatus = [reachability currentReachabilityStatus];
    if (internetStatus != NotReachable) {
        NSURL *theURL = [NSURL URLWithString:@"http://api.flickr.com/services/feeds/photos_public.gne"];
        NSURLRequest *theRequest = [NSURLRequest requestWithURL:theURL];
        
        AFKissXMLRequestOperation *operation = [AFKissXMLRequestOperation XMLDocumentRequestOperationWithRequest:theRequest success:^(NSURLRequest *request, NSHTTPURLResponse *response, DDXMLDocument *XMLDocument) {
            
            NSDictionary *theDataDictionary = [XMLReader dictionaryForXMLString:[XMLDocument XMLString] error:nil];
            
            Flickr *flickrObject = [[Flickr alloc] initWithData:theDataDictionary];
            
            if(flickrObject){
                [dataGrabberDelegate provide:flickrObject.theEntries];
            } else {
                [dataGrabberDelegate sameImages];
            }
            
        } failure:^(NSURLRequest *request, NSHTTPURLResponse *response, NSError *error, DDXMLDocument *XMLDocument) {
            NSLog(@"Failure! %@",[error localizedDescription]);
        }];
        
        [operation start];
    } else {
        UIAlertView *theAlert = [[UIAlertView alloc] initWithTitle:@"No Internet" message:@"Please check your internet connection" delegate:nil cancelButtonTitle:@"OK" otherButtonTitles: nil];
        [theAlert show];
        
    }
    
    
    
    
}

@end
