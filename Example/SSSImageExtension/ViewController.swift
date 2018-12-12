//
//  ViewController.swift
//  SSSImageExtension
//
//  Created by Bharghav on 12/12/2018.
//  Copyright (c) 2018 Bharghav. All rights reserved.
//

import UIKit
import SSSImageExtension

class ViewController: UIViewController {

    @IBOutlet weak var dummyImageView: UIImageView!
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        dummyImageView.circleImageView(borderColor: UIColor.red, borderWidth: 3.0)
        dummyImageView.downloadedFrom(link: "https://cdn.pixabay.com/photo/2015/12/01/20/28/road-1072823_1280.jpg")
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}

