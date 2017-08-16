//
//  ViewController.h
//  GoReminders
//
//  Created by Lauren Nicole Roth on 8/15/17.
//  Copyright © 2017 Lauren Nicole Roth. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Google/SignIn.h>
#import <GTLRCalendar.h>

@interface ViewController : UIViewController <GIDSignInDelegate, GIDSignInUIDelegate>

@property (nonatomic, strong) IBOutlet GIDSignInButton *signInButton;
@property (nonatomic, strong) UITextView *output;
@property (nonatomic, strong) GTLRCalendarService *service;


@end
