TARGET=myRT

CONFIG+=c++14

OBJECTS_DIR=obj

SOURCES+=$$PWD/src/main.cpp \
         $$PWD/src/Triangle.cpp \
         $$PWD/src/TriangleMesh.cpp \
         $$PWD/src/Ray.cpp \
         $$PWD/src/BBox.cpp \
         $$PWD/src/Parser.cpp

HEADERS+=$$PWD/include/Triangle.hpp \
         $$PWD/include/TriangleMesh.hpp \
         $$PWD/include/Ray.hpp \
         $$PWD/include/BBox.hpp \
         $$PWD/include/Parser.hpp

include($(HOME)/NGL/UseNGL.pri)

INCLUDEPATH+=./include
