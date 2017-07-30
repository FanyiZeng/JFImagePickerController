//
//  JFPhotoView.h
//  JFImagePickerController
//
//  Created by Johnil on 15-7-3.
//  Copyright (c) 2015年 Johnil. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface JFPhotoView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>

@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, weak) id photoDelegate;

- (void)reloadRotate;
- (void)reset;
- (void)clearMemory;
- (void)loadImage:(ALAsset *)asset;
- (void)progressImage;
/**
 通过 设置 photoView 的 imageView.image 来自定义 image 来源 在设置了 image 参数后调用此方法刷新 imageView 大小
 */
- (void)setMaxMinZoomScalesForCurrentBounds:(BOOL)rotate;
@end

@protocol JFPhotoDelegate <NSObject>

- (void)tap;

@end
