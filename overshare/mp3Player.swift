//
//  mp3Player.swift
//  overshare
//
//  Created by Jeffery Durant on 5/7/23.
//

import UIKit
import AVFoundation
import Firebase
import FirebaseStorage

class ViewControllerC: UIViewController {
    
    @IBOutlet weak var broadcastButton: UIButton!
    
    var audioPlayer: AVAudioPlayer?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }
    
    @IBAction func playButtonPressed(_ sender: Any) {
        // Create a reference to the audio file in Firebase Storage
        let storageRef = Storage.storage().reference().child("audio.mp3")
        
        // Download the audio file from Firebase Storage to a local URL
        let localURL = URL(fileURLWithPath: NSTemporaryDirectory()).appendingPathComponent("audio.mp3")
        let downloadTask = storageRef.write(toFile: localURL)
        
        // Play the audio file once it's downloaded
        downloadTask.observe(.success) { snapshot in
            do {
                self.audioPlayer = try AVAudioPlayer(contentsOf: localURL)
                self.audioPlayer?.prepareToPlay()
                self.audioPlayer?.play()
                // Provide user feedback that the audio is now playing
                let alertController = UIAlertController(title: "Audio Playing", message: nil, preferredStyle: .alert)
                let okayAction = UIAlertAction(title: "OK", style: .default, handler: nil)
                alertController.addAction(okayAction)
                self.present(alertController, animated: true, completion: nil)
                // Update the button title to show that the audio is playing
                self.broadcastButton.setTitle("Broadcast is Playing", for: .normal)
            } catch let error {
                print("Error playing audio: \(error.localizedDescription)")
            }
        }
    }
}


