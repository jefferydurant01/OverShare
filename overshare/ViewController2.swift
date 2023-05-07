//
//  ViewController2.swift
//  overshare
//
//  Created by Jeffery Durant on 5/6/23.
//

import UIKit

class ViewController2: UIViewController
{
    @IBOutlet weak var community1: UIButton!
    @IBOutlet weak var community2: UIButton!
    @IBOutlet weak var community3: UIButton!
    
    @IBOutlet weak var communityBanner: UIImageView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let image1 = UIImage(named: "Bench-1.jpg")
        let image2 = UIImage(named: "Bench-2.jpg")
        let image3 = UIImage(named: "Bench-3.jpg")
        let image4 = UIImage(named: "Bench-4.jpg")
        let image5 = UIImage(named: "Bench-5.jpg")
        let image6 = UIImage(named: "Bench-6.jpg")
        
        
        
        let images = [image1, image2, image3, image4, image5, image6].compactMap({ $0 })
                
                // Set the animation images and duration
        communityBanner.animationImages = images
        communityBanner.animationDuration = 1.0
                
                // Start the animation
        communityBanner.startAnimating()
    }
}
