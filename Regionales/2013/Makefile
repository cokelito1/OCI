CC=mingw32-g++
CXXFLAGS=-lm

all: git comida maiz robot test

git: git.cpp
	$(CC) git.cpp -o gits.exe $(CXXFLAGS)

comida: comida.cpp
	$(CC) comida.cpp -o comida.exe $(CXXFLAGS)

maiz: maiz.cpp
	$(CC) maiz.cpp -o maiz.exe $(CXXFLAGS)

robot: robot.cpp
	$(CC) robot.cpp -o robot.exe $(CXXFLAGS)

test: git_test comida_test maiz_test robot_test

git_test: git_test.cpp
	$(CC) git_test.cpp -o git_test.exe $(CXXFLAGS)

comida_test: comida_test.cpp
	$(CC) comida_test.cpp -o comida_test.exe $(CXXFLAGS)

maiz_test: maiz_test.cpp
	$(CC) maiz_test.cpp -o maiz_test.exe $(CXXFLAGS)

robot_test: robot_test.cpp
	$(CC) robot_test.cpp -o robot_test.exe $(CXXFLAGS)
