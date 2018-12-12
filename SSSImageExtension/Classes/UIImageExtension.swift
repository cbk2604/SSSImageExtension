//
//  UIImageExtension.swift
//  SSSImageExtension
//
//  Created by Bharghav on 12/12/18.
//

import Foundation
import UIKit

extension UIImageView {
    public func circleImageView(borderColor: UIColor, borderWidth: CGFloat){
        self.layer.borderColor = borderColor.cgColor
        self.layer.borderWidth = borderWidth
        self.layer.cornerRadius = self.layer.frame.size.width / 2
        self.clipsToBounds = true
    }
}
