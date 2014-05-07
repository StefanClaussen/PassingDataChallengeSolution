//
//  STCDetailViewController.h
//  Passing Data Challenge Solution

#import <UIKit/UIKit.h>

@protocol STCDetailViewControllerDelegate <NSObject>

- (void)didUpdateText:(NSString *)text;

@end

@interface STCDetailViewController : UIViewController

@property (weak, nonatomic) id <STCDetailViewControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UILabel *label;
@property (strong, nonatomic) NSString *informationFromTextField;
@property (strong, nonatomic) IBOutlet UITextField *textField;

- (IBAction)updateButtonPressed:(id)sender;

@end
