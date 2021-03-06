//
//  SignInViewController.h
//  Mercedes-Benz of Columbus
//
//  Created by Danielle Williams on 2/4/15.
//  Copyright (c) 2015 Wave Link, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

#import <FacebookSDK/FacebookSDK.h>
#import <TwitterKit/TwitterKit.h>

@interface SignInViewController : UIViewController<UITextFieldDelegate, FBLoginViewDelegate>
{
    id<FBGraphUser> cachedUser;
}

@property(nonatomic, strong) UIView *backgroundView;
@property (nonatomic, strong) FBLoginView *fbLoginView;
@property (nonatomic, strong) TWTRLogInButton *twitterLoginButton;
@property (nonatomic, strong) DGTAuthenticateButton *digitsButton;
@property (strong, nonatomic) IBOutlet UIView *tentView;
@property (weak, nonatomic) IBOutlet UIView *credentialsView;
@property (weak, nonatomic) IBOutlet UIView *forgotView;
@property (strong, nonatomic) IBOutlet UILabel *signInLabel;

@end
