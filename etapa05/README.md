# Detecção de Faces e Pontos Faciais com Dlib

Este programa em C++ utiliza a biblioteca **Dlib** para detectar faces em uma imagem e identificar 68 pontos faciais (landmarks) usando um preditor de forma (shape predictor).

---

## Funcionalidades

- Carrega uma imagem (`test.jpg`) na pasta do projeto.
- Detecta faces frontais na imagem.
- Para cada face detectada, identifica 68 pontos faciais importantes (como olhos, nariz, boca).
- Exibe a imagem com os pontos faciais destacados em verde em uma janela interativa.
- Exibe no console o número de pontos detectados para cada face.

---

## Requisitos

- Biblioteca Dlib instalada e configurada no seu ambiente.
- Arquivo do modelo `shape_predictor_68_face_landmarks.dat` disponível na pasta do projeto (pode ser baixado [aqui](http://dlib.net/files/shape_predictor_68_face_landmarks.dat.bz2) e descompactado).
- Imagem `test.jpg` na mesma pasta do executável.

---

## Como usar

1. Coloque a imagem `test.jpg` na pasta do projeto.
2. Certifique-se que o arquivo `shape_predictor_68_face_landmarks.dat` está na mesma pasta do executável.
3. Compile o programa (exemplo usando g++):
   ```bash
   g++ -std=c++17 your_program.cpp -o face_landmarks -ldlib -lpthread
