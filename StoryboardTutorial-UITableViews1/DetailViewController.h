//
//  DetailViewController.h
//  StoryboardTutorial-UITableViews1
//
//  Created by xxd on 12-3-3.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController {
    NSString *state;
    NSString *capital;
    IBOutlet UILabel *stateLabel;
    IBOutlet UILabel *capitalLabel;
}
@property(nonatomic,retain)NSString *state, *captial;
@property(nonatomic,retain)IBOutlet UILabel *stateLabel, *capitalLabel;

@end
