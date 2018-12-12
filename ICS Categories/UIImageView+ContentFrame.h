//
//  UIImageView+ContentFrame.h
//  ImageClearScanner
//
//  Created by Bharghav on 11/12/18.
//  Copyright © 2018 SSS. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (ContentFrame)
-(CGRect)contentFrame;
- (CGFloat) contentScale;
- (CGSize) contentSize;
@end

NS_ASSUME_NONNULL_END
