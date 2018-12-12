//
//  OpenCVWrapper.h
//  ImageClearScanner
//
//  Created by Bharghav on 11/12/18.
//  Copyright © 2018 SSS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc_c.h"


NS_ASSUME_NONNULL_BEGIN

@interface OpenCVWrapper : NSObject
+ (UIImage *)UIImageFromCVMat:(cv::Mat)cvMat;

+ (cv::Mat)cvMatFromAdjustedUIImage:(UIImage *)image;
+ (cv::Mat)cvMatFromUIImage:(UIImage *)image;
+ (cv::Mat)cvMatGrayFromUIImage:(UIImage *)image;
+ (cv::Mat)cvMatGrayFromAdjustedUIImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
