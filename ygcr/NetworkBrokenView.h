//
//  NetworkBrokenView.h
//  ygcr
//
//  Created by 黄治华(Tony Wong) on 15/06/26.
//  Copyright © 2015年 黄治华. All rights reserved.
//
//  @email 908601756@qq.com
//
//  @license The MIT License (MIT)
//

#import <UIKit/UIKit.h>

@protocol NetworkBrokenViewDelegate <NSObject>

- (void)doClickNetworkBrokenView;

@end


@interface NetworkBrokenView : UIView

@property (nonatomic, weak) id<NetworkBrokenViewDelegate> delegate;

@end
