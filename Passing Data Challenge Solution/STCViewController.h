//
//  STCViewController.h
//  Passing Data Challenge Solution
//
//  Created by Stefan Claussen on 08/04/2014.
//  Copyright (c) 2014 One foot after the other. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "STCDetailViewController.h"

@interface STCViewController : UIViewController <STCDetailViewControllerDelegate>

@property (strong, nonatomic) IBOutlet UITextField *textField;


@end
