SHELL = /bin/bash
CXX ?= clang++-10

VPATH = src,out

_objects = \
UI/YouTube/Box.o \
UI/YouTube/StreamControlsBox.o \
UI/YouTube/Chat/ChatBox.o \
UI/Common/LabelledBox.o \
UI/MainWindow.o \
UI/MainBox.o \
Operator.o
objects = $(addprefix out/,$(_objects))

out/Operator: $(objects)
	$(CXX) $(objects) -o out/Operator `pkg-config gtkmm-3.0 --libs`

$(objects): out/%.o: src/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $< -c -o $@ `pkg-config gtkmm-3.0 --cflags`

#Operator.o: Operator.cpp
#	$(CC) -c Operator.cpp -o Operator.o

run: out/Operator
	out/Operator

clean:
	rm -rf out/*
