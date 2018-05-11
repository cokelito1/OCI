CC = g++
CXXFLAGS = \
-I../../include \
-I./include \
-Wall

dir_source := src
dir_headers := include
dir_out := out

.PHONY: all
all: problema1 problema2 problema1_test problema2_test

.PHONY: problema1
problema1: dirs $(dir_source)/problema1.cpp $(dir_source)/problema1main.cpp problema1_test
	@$(CC) $(dir_source)/problema1.cpp $(dir_source)/problema1main.cpp -o $(dir_out)/problema1 $(CXXFLAGS)

.PHONY: problema2
problema2: dirs $(dir_source)/problema2.cpp $(dir_source)/problema2main.cpp problema2_test
	@$(CC) problema2.cpp problema2main.cpp -o $(dir_out)/problema2 $(CXXFLAGS)

.PHONY: problema1_test
problema1_test: dirs $(dir_source)/problema1test.cpp $(dir_source)/problema1.cpp
	@$(CC) $(dir_source)/problema1test.cpp $(dir_source)/problema1.cpp -o $(dir_out)/problema1test $(CXXFLAGS)
	$(dir_out)/problema1test

.PHONY: problema2_test
problema2_test: dirs $(dir_source)/problema2test.cpp
	@$(CC) problema2test.cpp -o $(dir_out)/problema2test $(CXXFLAGS)
	$(dir_out)/problema2test

.PHONY: dirs
dirs:
	@mkdir -p $(dir_out)

.PHONY: clean
clean:
	@rm -fr $(dir_out)
