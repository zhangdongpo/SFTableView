//
//  SFRefreshTableViewController.h
//  SFTableView
//
//  Created by zhangdongpo on 2017/7/11.
//  Copyright © 2017年 张东坡. All rights reserved.
//

#import "SFTableViewController.h"
#import "SFBaseRefreshListModel.h"

@interface SFRefreshTableViewController : SFTableViewController<SFBaseRefreshListModelProtocol>
@property (nonatomic, strong) SFBaseRefreshListModel *refreshListModel;
-(void)requestDidSuccess;
@end
