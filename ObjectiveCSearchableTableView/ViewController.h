//
//  ViewController.h
//  ObjectiveCSearchableTableView
//
//  Created by Angelos Staboulis on 4/10/24.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,UITextFieldDelegate>
@property NSMutableArray *array;
@property NSMutableArray *filterArray;
- (IBAction)btnSearch:(id)sender;
- (IBAction)btnReset:(id)sender;

@property (weak, nonatomic) IBOutlet UIButton *btnSearch;
@property (weak, nonatomic) IBOutlet UITextField *txtSearch;
@property (weak, nonatomic) IBOutlet UITableView *tableViewSearch;
-(void) initTableView;
-(void) initTableData;
@end

