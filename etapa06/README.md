# Detecção de Faces em Tempo Real com Dlib e OpenCV

Este projeto demonstra como usar a biblioteca **Dlib** em conjunto com **OpenCV** para realizar detecção de faces em tempo real através da webcam.

---

## Funcionalidades

- Captura vídeo ao vivo da webcam padrão do sistema.
- Converte os frames capturados do formato OpenCV para o formato compatível com Dlib.
- Detecta rostos nas imagens usando o detector frontal de faces do Dlib.
- Desenha retângulos verdes ao redor das faces detectadas no vídeo.
- Exibe a janela com o vídeo processado em tempo real.
- Encerra o programa quando a tecla `q` é pressionada.
- Tratamento de erros para falha na abertura da webcam e exceções gerais.

---

## Requisitos

- OpenCV (versão 4.x recomendada)
- Dlib (com suporte a detecção facial)
- Compilador C++ compatível com C++11 ou superior

---

## Como Compilar

1. Certifique-se de ter instalado o OpenCV e o Dlib no seu sistema.
2. Compile o código com os comandos apropriados, por exemplo:

```bash
g++ main.cpp -o face_detection `pkg-config --cflags --libs opencv4` -ldlib

./face_detection
