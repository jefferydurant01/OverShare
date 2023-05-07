//
//  ViewController.swift
//  overshare
//
//  Created by Jeffery Durant on 5/6/23.
//

import UIKit
import Firebase
import FirebaseDatabase

class ViewController: UIViewController {
    
    @IBOutlet weak var lblOne: UILabel!
    @IBOutlet weak var lblTwo: UILabel!
    @IBOutlet weak var imageOne: UIImageView!
    
    @IBOutlet weak var startListen: UIButton!
    @IBOutlet weak var startSpeak: UIButton!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let ref = Database.database().reference()
        ref.observeSingleEvent(of: .value, with: { [weak self] (snapshot) in
            guard let self = self else { return }
            if let dict = snapshot.value as? [String: Any] {
                if let text = dict["text"] as? String {
                    self.lblOne.text = text
                }
            }
        })

        let image1 = UIImage(named: "SA3.jpg")
        let image2 = UIImage(named: "SA10.jpeg")
        let image3 = UIImage(named: "SA4.png")
        let image4 = UIImage(named: "SA6.jpeg")
        let image5 = UIImage(named: "SA1.jpg")
        let image6 = UIImage(named: "SA2.png")
        let image7 = UIImage(named: "SA3.jpg")
        let image8 = UIImage(named: "SA10.jpeg")
        let image9 = UIImage(named: "SA4.png")
        let image10 = UIImage(named: "SA6.jpeg")
        let image11 = UIImage(named: "SA1.jpg")
        let image12 = UIImage(named: "SA2.png")
        
        
        
        let images = [image1, image2, image3, image4, image5, image6, image7, image8, image9, image10, image11, image12].compactMap({ $0 })
                
                // Set the animation images and duration
        imageOne.animationImages = images
        imageOne.animationDuration = 1.0
                
                // Start the animation
        imageOne.startAnimating()
        

    }
}

import Foundation
import Firebase

class User {
    var email: String
    var username: String
    var password: String
    var reportCount: Int
    var refresh: Bool
    var timeListened: UInt
    var broadcastsPosted: UInt
    var broadcastsListened: UInt
    var points: UInt
    var languages: [String]
    var contentUploaded: [String]
    var contentSaved: [String]
    var myStack: [String]
    
    init(email: String, username: String, password: String, reportCount: Int, refresh: Bool, timeListened: UInt, broadcastsPosted: UInt, broadcastsListened: UInt, points: UInt, languages: [String], contentUploaded: [String], contentSaved: [String], myStack: [String]) {
        self.email = email
        self.username = username
        self.password = password
        self.reportCount = reportCount
        self.refresh = refresh
        self.timeListened = timeListened
        self.broadcastsPosted = broadcastsPosted
        self.broadcastsListened = broadcastsListened
        self.points = points
        self.languages = languages
        self.contentUploaded = contentUploaded
        self.contentSaved = contentSaved
        self.myStack = myStack
    }
    
    func getEmail() -> String {
        return self.email
    }
    
    func setEmail(email: String) {
        self.email = email
    }
    
    func getUsername() -> String {
        return self.username
    }
    
    func setUsername(username: String) {
        self.username = username
    }
    
    func getPassword() -> String {
        return self.password
    }
    
    func setPassword(password: String) {
        self.password = password
    }
    
    func getReportCount() -> Int {
        return self.reportCount
    }
    
    func setReportCount(reportCount: Int) {
        self.reportCount = reportCount
    }
    
    func getRefresh() -> Bool {
        return self.refresh
    }
    
    func setRefresh(refresh: Bool) {
        self.refresh = refresh
    }
    
    func getTimeListened() -> UInt {
        return self.timeListened
    }
    
    func setTimeListened(timeListened: UInt) {
        self.timeListened = timeListened
    }
    
    func getBroadcastsPosted() -> UInt {
        return self.broadcastsPosted
    }
    
    func setBroadcastsPosted(broadcastsPosted: UInt) {
        self.broadcastsPosted = broadcastsPosted
    }
    
    func getBroadcastsListened() -> UInt {
        return self.broadcastsListened
    }
    
    func setBroadcastsListened(broadcastsListened: UInt) {
        self.broadcastsListened = broadcastsListened
    }
    
    func getPoints() -> UInt {
        return self.points
    }
    
    func setPoints(points: UInt) {
        self.points = points
    }
    
    func getLanguages() -> [String] {
        return self.languages
    }
    
    func setLanguages(languages: [String]) {
        self.languages = languages
    }
    
    func getContentUploaded() -> [String] {
        return self.contentUploaded
    }
    
    func addContentUploaded(content: String) {
        self.contentUploaded.append(content)
    }
    
    func getContentSaved() -> [String] {
        return self.contentSaved
    }
    
    func addContentSaved(content: String) {
        self.contentSaved.append(content)
    }
    
    func getMyStack() -> [String] {
        return self.myStack
    }
}
