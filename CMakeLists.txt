cmake_minimum_required(VERSION 3.26)
project(KanbanSystem)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(KanbanSystem
        src/dominios/Coluna.cpp
        include/dominios/Coluna.h
        src/dominios/Email.cpp
        include/dominios/Email.h
        src/main.cpp
        include/dominios/Codigo.h
        src/dominios/Codigo.cpp
        src/dominios/Senha.cpp
        include/dominios/Texto.h
        src/dominios/Texto.cpp
        include/dominios/Limite.h
        src/dominios/Limite.cpp
        src/dominios/Limite.cpp
        include/dominios/CodigoTeste.h
        src/dominios/CodigoTeste.cpp
        include/dominios/LimiteTeste.h
        src/dominios/LimiteTeste.cpp
        include/entidades/Cartao.h
        src/entidades/Cartao.cpp
        include/entidades/Quadro.h
        include/entidades/Conta.h
)
