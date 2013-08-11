ROOT_PATH       = .
INCLUDE_DIR     = $(ROOT_PATH)/include
SRC_DIR         = $(ROOT_PATH)/src
BUILD_DIR       = $(ROOT_PATH)/build
DEPLOY_DIR      = $(ROOT_PATH)/deploy

CXX = clang++
LD  = ld
CXXFLAGS = --std=c++11 --stdlib=libc++
LDFLAGS = #-shared
#TARGET = $(DEPLOY_DIR)/libcatanAI.so
TARGET = $(DEPLOY_DIR)/catanAI

_INCLUDES = Player.h Tile.h Vertex.h GameBoard.h
INCLUDES = $(patsubst %,$(INCLUDE_DIR)/%,$(_INCLUDES))

_OBJ = Player.o Tile.o Vertex.o GameBoard.o main.o
OBJ = $(patsubst %,$(BUILD_DIR)/%,$(_OBJ))

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp $(INCLUDES)
	echo $(INCLUDES)
	$(CXX) $(CXXFLAGS) -c -o $@ $< -I$(INCLUDE_DIR)


all: $(TARGET)
clean:
	rm $(OBJ)

$(TARGET) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJ) -o $(TARGET) 
