//
//  UIColor+HexRepresentation.h
//  ImageClearScanner
//
//  Created by Bharghav on 11/12/18.
//  Copyright © 2018 SSS. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (HexRepresentation)
+(UIColor*)colorWithHexString:(NSString*)hex;
@end

NS_ASSUME_NONNULL_END
