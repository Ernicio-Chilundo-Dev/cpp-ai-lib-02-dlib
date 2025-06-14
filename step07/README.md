# Real-Time Face and Landmark Detection with Dlib and OpenCV

This project demonstrates how to use the **Dlib** library along with **OpenCV** to detect faces and their facial landmarks in real-time using a webcam.

---

## Features

- Accesses the computer's webcam.
- Detects faces in real-time from the video capture.
- Uses a 68-point facial landmark predictor to identify key points on the face.
- Draws rectangles around detected faces.
- Draws circles on detected facial landmarks.
- Displays the video with detections in a window.
- Closes the application when the `q` key is pressed.

---

## Dependencies

- [Dlib](http://dlib.net/)
- [OpenCV](https://opencv.org/)
- Pre-trained model `shape_predictor_68_face_landmarks.dat`  
  (Available at http://dlib.net/files/shape_predictor_68_face_landmarks.dat.bz2)

---

## How to Use

1. Clone the repository.
2. Download the file `shape_predictor_68_face_landmarks.dat` and place it in the same folder as the executable.
3. Compile the code (making sure Dlib and OpenCV are installed and configured).
4. Run the program.
5. A window will open showing the webcam capture with detected faces and their landmarks.
6. Press `q` to close the window and exit the program.

---

## Example Output

- Green rectangles around detected faces.
- Red dots marking the 68 facial landmarks.

---

## Note

Make sure your webcam is connected and working properly before running the program.

---

## Contact

For questions or suggestions, feel free to reach out.

