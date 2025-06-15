# Step 9 - Face Recognition with dlib and OpenCV

This project demonstrates a face recognition system using the **dlib** library's deep neural network (DNN) capabilities along with **OpenCV** for webcam capture and visualization.

## Features

- Real-time face detection from webcam feed.
- Facial landmark detection using dlib's shape predictor.
- Face descriptor extraction with dlib's ResNet-based face recognition model.
- Compares faces to a reference face and labels "Same Person" or "Different Person".
- Displays detection boxes, landmarks, and labels on webcam frames.
- Capture a reference face by pressing the 'r' key.
- Quit the program by pressing the 'q' key.

## Requirements

- C++11 compatible compiler
- [dlib](http://dlib.net/) library (manually installed or system package)
- [OpenCV](https://opencv.org/) library
- Pre-trained dlib models:
  - `shape_predictor_68_face_landmarks.dat`
  - `dlib_face_recognition_resnet_model_v1.dat`

## Setup

1. Clone or download this repository.

2. Download the required models from the official dlib model repository:
   - [Shape predictor](http://dlib.net/files/shape_predictor_68_face_landmarks.dat.bz2)
   - [Face recognition model](http://dlib.net/files/dlib_face_recognition_resnet_model_v1.dat.bz2)

3. Extract the `.bz2` files and place them in the project directory.

4. Build the project:

```bash
mkdir build
cd build
cmake ..
make

./step9