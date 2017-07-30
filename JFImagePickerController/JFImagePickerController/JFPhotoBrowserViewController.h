//
//  JFPhotoBrowserViewController.h
//  JFImagePickerController
//
//  Created by Johnil on 15-7-3.
//  Copyright (c) 2015年 Johnil. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import "JFImagePickerViewCell.h"
#import "JFPhotoView.h"
@interface JFPhotoBrowserViewController : UIViewController

- (JFPhotoBrowserViewController *)initWithPreview;
- (JFPhotoBrowserViewController *)initWithNormal;

@property (nonatomic, weak) id delegate;

/**
 设置这个 RightItems 来接受自定义菜单消息
 */
@property(nonatomic,strong)NSArray<UIBarButtonItem *> *rightItems;


/**
 删除图片时清除视图
 */
- (void)deletePage:(NSInteger)page;

@end

@protocol JDPhotoBrowserDelegate <NSObject>

- (ALAsset *)assetWithIndex:(NSInteger)index fromPhotoBrowser:(JFPhotoBrowserViewController *)browser;
- (NSInteger)numOfPhotosFromPhotoBrowser:(JFPhotoBrowserViewController *)browser;
- (NSInteger)currentIndexFromPhotoBrowser:(JFPhotoBrowserViewController *)browser;
@optional
- (void)setImage:(JFPhotoView *)photoView WithIndex:(NSInteger)index fromPhotoBrowser:(JFPhotoBrowserViewController *)browser;
- (void)photoBrowser:(JFPhotoBrowserViewController *)browser didShowPage:(NSInteger)page;
- (JFImagePickerViewCell *)cellForRow:(NSInteger)row;

@end
