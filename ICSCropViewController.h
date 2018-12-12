//
//  ICSCropViewController.h
//  ImageClearScanner
//
//  Created by Bharghav on 12/12/18.
//  Copyright © 2018 SSS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImage+fixOrientation.h"
#import "UIImageView+ContentFrame.h"

NS_ASSUME_NONNULL_BEGIN

@class ICSCropViewController;
@protocol ICSCropDelegate <NSObject>

-(void)didFinishCropping:(UIImage *)finalCropImage from:(ICSCropViewController *)cropObj;

@end

@interface ICSCropViewController : UIViewController {
    CGFloat _rotateSlider;
    CGRect _initialRect,final_Rect;
}

@property (weak,nonatomic) id<ICSCropDelegate> cropdelegate;
@property (strong, nonatomic) UIImageView *sourceImageView;
@property (strong, nonatomic) UIImage *adjustedImage,*cropgrayImage,*cropImage;
@property (strong, nonatomic) UIBarButtonItem *cancelBarBtn;
@property (strong, nonatomic) UIBarButtonItem *rotateBarBtn;
@property (strong, nonatomic) UIBarButtonItem *refreshBarBtn;
@property (strong, nonatomic) UIBarButtonItem *cropBarBtn;
@property (strong, nonatomic) UIBarButtonItem *doneBarBtn;

- (IBAction)cropAction:(UIBarButtonItem *)sender;
- (IBAction)cancelAction:(UIBarButtonItem *)sender;
- (IBAction)rotateAction:(UIBarButtonItem *)sender;
- (IBAction)refreshAction:(UIBarButtonItem *)sender;
- (IBAction)doneAction:(UIBarButtonItem *)sender;

//Detect Edges
- (void)detectEdges;
- (void) closeWithCompletion:(void (^)(void))completion ;

@end

NS_ASSUME_NONNULL_END
