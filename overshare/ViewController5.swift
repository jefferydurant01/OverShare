//
//  ViewController5.swift
//  overshare
//
//  Created by Jeffery Durant on 5/7/23.
//

import UIKit
import Firebase
import FirebaseAuth

class ViewController5: UIViewController
{
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        
    }
    
    @IBAction func buttonPressed(_ sender: UIButton) {
        let alert = UIAlertController(title: "Group Joined", message: "Welcome!", preferredStyle: .alert)
        let okAction = UIAlertAction(title: "OK", style: .default, handler: nil)
        alert.addAction(okAction)
        present(alert, animated: true, completion: nil)
        
        
        guard let currentUser = Auth.auth().currentUser else {
            print("No current user")
            return
        }
        
        // Update user's language attribute
        let db = Firestore.firestore()
        let userRef = db.collection("users").document(currentUser.uid)
        userRef.updateData(["language": "English"]) { error in
            if let error = error {
                print("Error updating user language: \(error.localizedDescription)")
            } else {
                print("User language updated successfully")
            }
        }
    }
}
