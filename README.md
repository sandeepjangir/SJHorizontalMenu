# SJHorizontalMenu
A horizontal menu for iOS apps that easily adds the horizontal menu in the top of iOS app

A simple, horizontally-scrolling list of items that can be used as a more flexible replacement for UISegmentedControl

##Usage
###Setup and Initialization


#import "SJHorizontalMenu.h"

The horizontal selection list uses a data-source/delegate model (similar to UITableView or UIPickerView).  To setup a simple horizontal selection list, init the view and set it's delegate and data source:
```objc
@interface CarListViewController () <SJHorizontalMenuDataSource, SJHorizontalMenuDelegate>


- (void)viewDidLoad {
	[super viewDidLoad];

	horizontalMenu = [[SJHorizontalMenu alloc] initWithFrame:CGRectMake(0, 0, self.view.frame.size.width, 40)];
  horizontalMenu.delegate = self;
  horizontalMenu.dataSource = self;

	
}


#pragma -mark SJHorizontalMenu

- (NSInteger)numberOfItemsInSelectionMenu:(SJHorizontalMenu *)selectionList {
    return menuItemsName.count;
}

- (NSString *)selectionList:(SJHorizontalMenu *)selectionList titleForItemWithIndex:(NSInteger)index {
    return menuItemsName[index];
}

- (void)selectionList:(SJHorizontalMenu *)selectionMeu didSelectButtonWithIndex:(NSInteger)index {
    //anything
}

