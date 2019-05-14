INC = include

BIN = bin

EXEC = example.out

OBJ = obj

SRC = src

VPATH = $(SRC):$(INC)

all: $(BIN)/$(EXEC)

$(BIN)/$(EXEC): $(OBJ)/example.o $(OBJ)/linkedList.o
	gcc -o $@ $^

$(OBJ)/example.o: example.c linkedList.h
	gcc -c $<  -I $(INC) -o $@

$(OBJ)/linkedList.o: linkedList.c linkedList.h
	gcc -c $< -I $(INC) -o $@

.PHONY: clean
clean:
	@if [ -d ./obj ]; then \
		echo "Removing /obj"; \
		rm -r $(OBJ); \
	fi
	@if [ -d ./bin ]; then \
		echo "Removing /bin"; \
		rm -r $(BIN); \
	fi

makeDir:
	@if [ ! -d ./obj ] && [ ! -d ./bin ]; then \
		echo "Creating /obj"; mkdir obj; \
		echo "Creating /bin"; mkdir bin; \
	fi