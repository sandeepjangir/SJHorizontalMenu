//
//  SJHorizontalMenu.h
//  WesCafe
//
//  Created by Sandeep Jangir on 14/02/16.
//  Copyright © 2016 Sandeep Jangir. All rights reserved.
//

#import <UIKit/UIKit.h>
@import UIKit;

@protocol SJHorizontalMenuDataSource;
@protocol SJHorizontalMenuDelegate;

typedef NS_ENUM(NSInteger, SJHorizontalMenuSelectionIndicatorStyle) {
    SJHorizontalSelectionIndicatorStyleBottomBar,           // Default
    SJHorizontalSelectionIndicatorStyleButtonBorder
};

@interface SJHorizontalMenu : UIView

@property (nonatomic) NSInteger selectedButtonIndex;

@property (nonatomic, weak) id<SJHorizontalMenuDataSource> dataSource;
@property (nonatomic, weak) id<SJHorizontalMenuDelegate> delegate;

@property (nonatomic, strong) UIColor *selectionIndicatorColor;
@property (nonatomic, strong) UIColor *bottomTrimColor;

@property (nonatomic) UIEdgeInsets buttonInsets;

@property (nonatomic) SJHorizontalMenuSelectionIndicatorStyle selectionIndicatorStyle;

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) NSMutableArray *buttons;

@property (nonatomic, strong) UIView *contentView;

@property (nonatomic, strong) UIView *selectionIndicatorBar;

@property (nonatomic, strong) NSLayoutConstraint *leftSelectionIndicatorConstraint, *rightSelectionIndicatorConstraint;

@property (nonatomic, strong) UIView *bottomTrim;

@property (nonatomic, strong) NSMutableDictionary *buttonColorsByState;

- (void)setTitleColor:(UIColor *)color forState:(UIControlState)state;

- (void)reloadData;

@end

@protocol SJHorizontalMenuDataSource <NSObject>

- (NSInteger)numberOfItemsInSelectionMenu:(SJHorizontalMenu *)selectionList;
- (NSString *)selectionList:(SJHorizontalMenu *)selectionList titleForItemWithIndex:(NSInteger)index;

@end

@protocol SJHorizontalMenuDelegate <NSObject>

- (void)selectionList:(SJHorizontalMenu *)selectionMeu didSelectButtonWithIndex:(NSInteger)index;

@end


