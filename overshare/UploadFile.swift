//
//  uploadFile.swift
//  overshare
//
//  Created by Jeffery Durant on 5/7/23.
//

import UIKit
import FirebaseStorage
import MobileCoreServices
import AVFoundation

class ViewControllerB: UIViewController, UIDocumentPickerDelegate {

    @IBOutlet weak var uploadButton: UIButton!

    var storageRef: StorageReference!

    override func viewDidLoad() {
        super.viewDidLoad()

        // Get a reference to the storage service
        storageRef = Storage.storage().reference()
    }

    @IBAction func uploadButtonTapped(_ sender: Any) {

        let documentPicker = UIDocumentPickerViewController(documentTypes: [String(kUTTypeMP3)], in: .import)
        documentPicker.delegate = self
        present(documentPicker, animated: true, completion: nil)
    }

    func documentPicker(_ controller: UIDocumentPickerViewController, didPickDocumentsAt urls: [URL]) {
        guard let selectedFileUrl = urls.first else {
            return
        }

        let filename = selectedFileUrl.lastPathComponent

        let storageChildRef = storageRef.child("audio/\(filename)")

        storageChildRef.putFile(from: selectedFileUrl, metadata: nil) { (metadata, error) in
            if let error = error {
                print("Error uploading: \(error.localizedDescription)")
                return
            }

            // Get the download URL for the uploaded file
            storageChildRef.downloadURL { (url, error) in
                if let error = error {
                    print("Error getting download URL: \(error.localizedDescription)")
                    return
                }

                guard let downloadUrl = url else {
                    return
                }

                print("Download URL: \(downloadUrl)")
            }
        }
    }

}
