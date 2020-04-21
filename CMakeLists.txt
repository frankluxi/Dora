cmake_minimum_required(VERSION 3.15)
project(Dora)

set(CMAKE_CXX_STANDARD 14)
#set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -march=native -O3 -frtti -fpermissive -fexceptions -pthread")
#add_compile_options(-march=native -O3 -fexceptions -pthread -fPIC)



#llvm-config --cxxflags   echo `llvm-config --cxxflags`
#add_compile_options(-I/usr/include -std=c++11 -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS)
add_compile_options(-I/usr/include -std=c++11  -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS)

#llvm-config --system-libs echo `llvm-config --system-libs`
#LINK_LIBRARIES()

#llvm-config --libs   echo `llvm-config --libs`
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
        Test/TestMessage/CompilerTester.h
        Frontend/Token.cpp
        Frontend/Token.h
        Frontend/Source.cpp Frontend/Source.h Frontend/Lexer.cpp Frontend/Lexer.h Frontend/Parser.cpp Frontend/Parser.h Test/TestIO.cpp Test/TestIO.h Frontend/FileSource.cpp Frontend/FileSource.h Test/TestMessage/ClassA.cpp Test/TestMessage/ClassA.h Test/TestMessage/ClassB.cpp Test/TestMessage/ClassB.h DoraCompile.cpp DoraCompile.h Frontend/pascal/token/PascalStringToken.cpp Frontend/pascal/token/PascalStringToken.h Intermediate/SyntaxTree.cpp Intermediate/SyntaxTree.h Intermediate/SymTab.cpp Intermediate/SymTab.h Frontend/pascal/PascalTokeType.cpp Frontend/pascal/PascalTokeType.h Frontend/pascal/PascalToken.cpp Frontend/pascal/PascalToken.h Frontend/pascal/token/PascalErrorToken.cpp Frontend/pascal/token/PascalErrorToken.h Frontend/pascal/PascalErrorCode.h Frontend/pascal/token/PascalSpecialSymbolToken.cpp Frontend/pascal/token/PascalSpecialSymbolToken.h)