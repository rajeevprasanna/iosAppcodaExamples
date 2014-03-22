//
//  SimpleTableViewController.h
//  SimpleTable
//
//  Created by Rajeev Kumar on 22/03/14.
//  Copyright (c) 2014 rajeev. All rights reserved.
//

#import <UIKit/UIKit.h>

//The “UITableViewDelegate” and “UITableViewDataSource” are known as protocol in Objective-C. Basically, in order to display data in Table View, we have to conform to the requirements defined in the protocols and implement all the mandatory methods.


//The UITableView, the actual class behind the Table View, is designed to be flexible to handle various types of data. You may display a list of countries or contact names. Or like this example, we’ll use the table view to present a list of recipes. So how do you tell UITableView the list of data to display? UITableViewDataSource is the answer. It’s the link between your data and the table view. The UITableViewDataSource protocol declares two required methods (tableView:cellForRowAtIndexPath and tableView:numberOfRowsInSection) that you have to implement. Through implementing these methods, you tell Table View how many rows to display and the data in each row.

//UITableViewDelegate, on the other hand, deals with the appearance of the UITableView. Optional methods of the protocols let you manage the height of a table row, configure section headings and footers, re-order table cells, etc. We do not change any of these methods in this example. Let’s leave them for the later tutorial.
@interface SimpleTableViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@end
