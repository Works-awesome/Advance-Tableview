//
//  ViewController.h
//  AdvanceTableView
//
//  Created by Arjun Hanswal on 9/15/16.
//  Copyright © 2016 Com.TableViewDemo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *tableview;


@end

