# 🧠 Processamento de Imagens com Dlib – Normalização, Suavização e Detecção de Bordas

Este projeto demonstra como utilizar a biblioteca [Dlib](http://dlib.net/) em C++ para realizar operações básicas de **processamento de imagens**: normalização de contraste, suavização com desfoque gaussiano e detecção de bordas com o filtro de Sobel.

---

## 📌 Funcionalidades

- 📥 Carrega uma imagem JPG (`test.jpg`);
- ⚙️ Normaliza o contraste da imagem;
- 🌫️ Aplica **Gaussian Blur** (suavização);
- 🪪 Detecta bordas usando o filtro de Sobel;
- 🪟 Exibe os resultados em **três janelas gráficas**:
  - Contraste normalizado
  - Imagem suavizada
  - Bordas detectadas (direção X)

---

## 🛠️ Requisitos

- C++17 ou superior  
- [Dlib](http://dlib.net/)  
- CMake  
- Ambiente gráfico (necessário para `image_window`)  
- Arquivo de entrada: `test.jpg`

---

## 📂 Estrutura do Projeto

/meu_projeto
├── main.cpp
├── test.jpg
└── CMakeLists.txt


---

## ⚙️ Compilação

### CMakeLists.txt

```cmake
cmake_minimum_required(VERSION 3.0)
project(dlib_image_processing)

find_package(dlib REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main dlib::dlib)

Passos

mkdir build
cd build
cmake ..
make
./main

