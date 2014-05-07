//
//  STCViewController.m
//  Passing Data Challenge Solution

#import "STCViewController.h"
#import "STCDetailViewController.h"

@interface STCViewController ()

@end

@implementation STCViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([sender isKindOfClass:[UIButton class]]) {
        if ([segue.destinationViewController isKindOfClass:[STCDetailViewController class]]) {
            STCDetailViewController *detailVC = segue.destinationViewController;
            detailVC.informationFromTextField = self.textField.text;
            detailVC.delegate = self;
        }
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

# pragma mark - STCDetailViewControllerDelegate
- (void)didUpdateText:(NSString *)text
{
    self.textField.text = text;
}

@end
