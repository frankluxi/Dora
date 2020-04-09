cmake_minimum_required(VERSION 3.15)
project(Dora)

set(CMAKE_CXX_STANDARD 14)
#llvm-config --cxxflags
add_compile_options(-I/usr/include -std=c++11 -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS)

#llvm-config --system-libs
#LINK_LIBRARIES()

#llvm-config --libs
LINK_LIBRARIES(-lLLVM-8)

add_executable(Dora main.cpp
        Message/MessageType.h
        Message/Message.h
        Message/MessageRegister.h
        Message/MessageListener.h
        Message/MessageHandler.h
        Test/TestMessage/TestMessageListener.cpp
        Test/TestMessage/TestMessageListener.h
        Test/TestMessage/CompilerTester.cpp
        Test/TestMessage/CompilerTester.h Frontend/Token.cpp Frontend/Token.h Frontend/TokenType.cpp Frontend/TokenType.h Frontend/BaseSource.cpp Frontend/BaseSource.h Frontend/Scaner.cpp Frontend/Scaner.h Frontend/Parser.cpp Frontend/Parser.h Test/TestIO.cpp Test/TestIO.h Frontend/FileSource.cpp Frontend/FileSource.h)