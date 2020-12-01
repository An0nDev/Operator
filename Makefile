SHELL = /bin/bash
CC = clang++-10

VPATH = src,out

_objects = UI/YouTube/YouTubeBox.o UI/MainWindow.o Operator.o
objects = $(addprefix out/,$(_objects))

out/Operator: $(objects)
	$(CC) $(objects) -o out/Operator `pkg-config gtkmm-3.0 --libs`

$(objects): out/%.o: src/%.cpp
	mkdir -p $(dir $@)
	$(CC) $< -c -o $@ `pkg-config gtkmm-3.0 --cflags`

#Operator.o: Operator.cpp
#	$(CC) -c Operator.cpp -o Operator.o

run: out/Operator
	out/Operator

clean:
	rm -rf out/*
