Face Detection with Dlib

Este projeto C++ utiliza a biblioteca Dlib para detectar rostos em uma imagem.
📸 Funcionalidade

O programa:

    Carrega uma imagem chamada test.jpg;

    Usa o detector frontal de rostos da Dlib;

    Imprime no terminal quantas faces foram detectadas.

📂 Estrutura esperada

Coloque uma imagem chamada test.jpg na mesma pasta que o código-fonte (main.cpp, por exemplo).

/sua_pasta
├── main.cpp
└── test.jpg

🛠️ Requisitos

    C++17 ou superior

    CMake

    Dlib

    OpenCV (opcional, se quiser expandir o projeto)

    Uma imagem JPG com rostos humanos

📦 Compilação

Crie um arquivo CMakeLists.txt:

cmake_minimum_required(VERSION 3.0)
project(face_detection)

find_package(dlib REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main dlib::dlib)

Depois compile com:

mkdir build
cd build
cmake ..
make
./main

🖼️ Exemplo de saída

Detectadas 2 faces