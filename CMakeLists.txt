cmake_minimum_required(VERSION 3.26)
project(KanbanSystem)

set(CMAKE_CXX_STANDARD 14)

find_package(SQLite3 REQUIRED)

include_directories(.)
configure_file(${CMAKE_SOURCE_DIR}/kanban.db ${CMAKE_BINARY_DIR}/kanban.db COPYONLY)

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
        test/dominios/CodigoTeste.h
        test/dominios/CodigoTeste.cpp
        test/dominios/LimiteTeste.h
        test/dominios/LimiteTeste.cpp
        include/entidades/Cartao.h
        src/entidades/Cartao.cpp
        include/entidades/Quadro.h
        include/entidades/Conta.h
        src/entidades/Quadro.cpp
        src/entidades/Conta.cpp
        test/dominios/SenhaTeste.h
        test/dominios/SenhaTeste.cpp
        test/dominios/ColunaTeste.h
        test/dominios/ColunaTeste.cpp
        test/dominios/EmailTeste.h
        test/dominios/EmailTeste.cpp
        test/dominios/TextoTeste.h
        test/dominios/TextoTeste.cpp
        test/entidades/CartaoTeste.h
        test/entidades/CartaoTeste.cpp
        test/entidades/ContaTeste.h
        test/entidades/ContaTeste.cpp
        test/entidades/QuadroTeste.h
        test/entidades/QuadroTeste.cpp
        include/Interfaces.h
        include/controladoras/CntrIAAutenticacao.h
        src/controladoras/CntrIAAutenticacao.cpp
        include/containers/ContainerConta.h
        src/containers/ContainerConta.cpp
        include/controladoras/CntrISAutenticacao.h
        src/controladoras/CntrISAutenticacao.cpp
        include/controladoras/CntrAInterface.h
        src/controladoras/CntrAInterface.cpp
        include/controladoras/CntrIAConta.h
        include/controladoras/CntrIAConta.h
        include/controladoras/CntrIAConta.h
        src/controladoras/CntrIAConta.cpp
        include/controladoras/CntrISConta.h
        src/controladoras/CntrISConta.cpp
        include/sqlite3.h
)

target_link_libraries(KanbanSystem sqlite3)