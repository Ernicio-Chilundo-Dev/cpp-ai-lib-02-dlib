# Face Alignment and Landmark Detection with Dlib and OpenCV

This C++ project captures real-time video from a webcam, detects faces using Dlib, aligns them, saves the aligned face images, and displays facial landmarks using OpenCV.

## ✅ Features

- Real-time face detection from webcam
- Facial landmark detection (68 points)
- Face alignment using Dlib’s `extract_image_chip`
- Saves each aligned face as a JPEG image
- Displays bounding boxes and landmarks on the video frame

## 📦 Dependencies

Make sure the following are installed:

- [OpenCV 4.x](https://opencv.org/)
- [Dlib](http://dlib.net/)
- CMake
- `shape_predictor_68_face_landmarks.dat` (download from: http://dlib.net/files/shape_predictor_68_face_landmarks.dat.bz2)

## 🔧 Setup

### 1. Clone the project and place the model file

```bash
wget http://dlib.net/files/shape_predictor_68_face_landmarks.dat.bz2
bzip2 -d shape_predictor_68_face_landmarks.dat.bz2

mkdir build
cd build
cmake ..
make

./step08
