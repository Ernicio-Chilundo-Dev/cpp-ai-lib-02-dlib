# Step 11 – Live Face Comparison with Dlib and OpenCV

This project demonstrates real-time face recognition using Dlib's deep learning model and OpenCV.

## Features

- Capture and register reference faces live from webcam
- Compare faces against multiple registered individuals
- Live labeling: "Known" or "Unknown"
- Add a new reference face by pressing `a` and entering a name
- Quit the program with `q`

## Requirements

- OpenCV
- Dlib
- `shape_predictor_68_face_landmarks.dat`
- `dlib_face_recognition_resnet_model_v1.dat`

## Build Instructions

```bash
mkdir build
cd build
cmake ..
make

## Run
./step11