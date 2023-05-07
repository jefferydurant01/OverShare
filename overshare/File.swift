
import UIKit
import Firebase
import FirebaseStorage
import MobileCoreServices

class AudioUploadViewController: UIViewController, UIDocumentPickerDelegate {

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }

    @IBAction func uploadButtonTapped(_ sender: UIButton) {
        let documentPicker = UIDocumentPickerViewController(documentTypes: [String(kUTTypeMP3)], in: .import)
        documentPicker.delegate = self
        documentPicker.allowsMultipleSelection = false
        self.present(documentPicker, animated: true, completion: nil)
    }

    func documentPicker(_ controller: UIDocumentPickerViewController, didPickDocumentsAt urls: [URL]) {
        guard let selectedFileURL = urls.first else {
            return
        }

        let storageRef = Storage.storage().reference().child("audio/\(selectedFileURL.lastPathComponent)")

        let uploadTask = storageRef.putFile(from: selectedFileURL, metadata: nil) { metadata, error in
            if let error = error {
                print("Error uploading file: \(error)")
            } else {
                print("File uploaded successfully.")
            }
        }
    }

}


