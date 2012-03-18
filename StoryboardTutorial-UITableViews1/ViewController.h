//
//  ViewController.h
//  StoryboardTutorial-UITableViews1
//
//  Created by xxd on 12-3-2.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailViewController.h"

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource> {

}
@property(nonatomic,retain) NSMutableDictionary *states;
@property(nonatomic,retain) NSArray *datasource;

-(void)setupArray;

@end
