# Face Detection with Dlib

Este projeto em C++ usa a biblioteca [Dlib](http://dlib.net/) para realizar **detecção frontal de faces** em uma imagem. Ele carrega uma imagem (`test.jpg`), detecta as faces com o detector pré-treinado da Dlib e exibe o resultado em uma janela com retângulos vermelhos ao redor das faces detectadas.

## 🔍 Funcionalidades

- Carrega uma imagem colorida (`test.jpg`)
- Detecta faces frontais usando `get_frontal_face_detector()`
- Desenha retângulos sobre as faces detectadas
- Exibe a imagem em uma janela GUI com os resultados

## 🖥️ Pré-requisitos

Certifique-se de ter os seguintes itens instalados no seu sistema:

- Compilador compatível com C++17 (ex: `g++`)
- Biblioteca [Dlib](http://dlib.net/)
- CMake
- X11 (para suporte a janelas)
- Uma imagem chamada `test.jpg` na mesma pasta do código

## 🔧 Instruções para Compilar

1. Clone o repositório e entre na pasta do projeto.

2. Crie o arquivo `CMakeLists.txt`:

```cmake
cmake_minimum_required(VERSION 3.0)
project(face_detection)

find_package(dlib REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main dlib::dlib)

    Compile o projeto:

mkdir build && cd build
cmake ..
cmake --build .

    Execute o programa:

./main

