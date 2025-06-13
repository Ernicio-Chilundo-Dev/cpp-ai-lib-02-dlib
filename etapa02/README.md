# 🖼️ Image Annotation with Dlib

Este projeto em C++ usa a biblioteca [Dlib](http://dlib.net/) para carregar, modificar e exibir imagens, demonstrando operações básicas como conversão para escala de cinza, desenho de formas geométricas e salvamento de imagens.

## 📌 Funcionalidades

- Carrega uma imagem JPEG (`test.jpg`);
- Converte a imagem para escala de cinza (internamente);
- Desenha um **retângulo vermelho** no canto superior esquerdo;
- Desenha um **círculo verde** no centro da imagem;
- Salva a imagem modificada como `test_modified.jpg`;
- Exibe a imagem modificada em uma janela gráfica.

## 🛠️ Requisitos

- C++17 ou superior  
- [Dlib](http://dlib.net/)  
- CMake  
- Sistema com suporte a janelas (Linux, macOS ou Windows com ambiente gráfico)  
- Uma imagem chamada `test.jpg` na pasta do projeto  

## 📂 Estrutura esperada

/seu_projeto
├── main.cpp
└── test.jpg


## ⚙️ Como compilar

Crie um `CMakeLists.txt` com o seguinte conteúdo:

```cmake
cmake_minimum_required(VERSION 3.0)
project(dlib_image_drawing)

find_package(dlib REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main dlib::dlib)

Comandos no terminal

mkdir build
cd build
cmake ..
make
./main
