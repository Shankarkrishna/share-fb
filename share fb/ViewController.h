//
//  ViewController.h
//  share fb
//
//  Created by BSA Univ7 on 28/01/14.
//  Copyright (c) 2014 BSA Univ7. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Social/Social.h>

@interface ViewController : UIViewController
{
    SLComposeViewController *slcomposeviewcontroller;
    UIImage *image;
    
}
-(IBAction)share;

@end
