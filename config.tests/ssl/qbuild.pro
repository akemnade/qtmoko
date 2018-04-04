TEMPLATE=app
CONFIG+=embedded
TARGET=ssl
SINGLEEXEC=$$(SINGLEEXEC)
equals(SINGLEEXEC,1) {
    SOURCES+=main.cpp
    DEFINES+=MAIN_FILE=$$define_string(openssl.cpp)
    LIBS+=-lssl -lcrypto
} else {
    SOURCES+=openssl.cpp
}

