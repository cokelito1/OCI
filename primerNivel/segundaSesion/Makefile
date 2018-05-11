CC = g++
CXXFLAGS = \
-I../../include \
-I./include \
-Wall

dir_source := src
dir_headers := include
dir_out := out

.PHONY: all
all: problema1 problema2 problema3 problema4 problema5 problema1_test problema2_test problema3_test problema4_test problema5_test

.PHONY: problema1
problema1: dirs $(dir_source)/problema1.cpp $(dir_source)/problema1main.cpp problema1_test
	@$(CC) $(dir_source)/problema1.cpp $(dir_source)/problema1main.cpp -o $(dir_out)/problema1 $(CXXFLAGS)

.PHONY: problema2
problema2: dirs $(dir_source)/problema2.cpp $(dir_source)/problema2main.cpp problema2_test
	@$(CC) $(dir_source)/problema2.cpp $(dir_source)/problema2main.cpp -o $(dir_out)/problema2 $(CXXFLAGS)

.PHONY: problema3
problema3: dirs $(dir_source)/problema3.cpp $(dir_source)/problema3main.cpp problema3_test
	@$(CC) $(dir_source)/problema3.cpp $(dir_source)/problema3main.cpp -o $(dir_out)/problema3 $(CXXFLAGS)

.PHONY: problema4
problema4: dirs $(dir_source)/problema4.cpp $(dir_source)/problema4main.cpp problema4_test
	@$(CC) $(dir_source)/problema4.cpp $(dir_source)/problema4main.cpp -o $(dir_out)/problema4 $(CXXFLAGS)

.PHONY: problema5
problema5: dirs $(dir_source)/problema5.cpp $(dir_source)/problema5main.cpp problema5_test
	@$(CC) $(dir_source)/problema5.cpp $(dir_source)/problema5main.cpp -o $(dir_out)/problema5 $(CXXFLAGS)

.PHONY: problema1_test
problema1_test: dirs $(dir_source)/problema1test.cpp $(dir_source)/problema1.cpp
	@$(CC) $(dir_source)/problema1test.cpp $(dir_source)/problema1.cpp -o $(dir_out)/problema1test $(CXXFLAGS)
	$(dir_out)/problema1test

.PHONY: problema2_test
problema2_test: dirs $(dir_source)/problema2test.cpp
	@$(CC) $(dir_source)/problema2test.cpp $(dir_source)/problema2.cpp -o $(dir_out)/problema2test $(CXXFLAGS)
	$(dir_out)/problema2test

.PHONY: problema3_test
problema3_test: dirs $(dir_source)/problema3test.cpp $(dir_source)/problema3.cpp
	@$(CC) $(dir_source)/problema3test.cpp $(dir_source)/problema3.cpp -o $(dir_out)/problema3test $(CXXFLAGS)
	$(dir_out)/problema3test

.PHONY: problema4_test
problema4_test: dirs $(dir_source)/problema4test.cpp $(dir_source)/problema4.cpp
	@$(CC) $(dir_source)/problema4test.cpp $(dir_source)/problema4.cpp -o $(dir_out)/problema4test $(CXXFLAGS)
	$(dir_out)/problema4test

.PHONY: problema5_test
problema5_test: dirs $(dir_source)/problema5test.cpp $(dir_source)/problema5.cpp
	@$(CC) $(dir_source)/problema5test.cpp $(dir_source)/problema5.cpp -o $(dir_out)/problema5test $(CXXFLAGS)
	$(dir_out)/problema5test

.PHONY: dirs
dirs:
	@mkdir -p $(dir_out)

.PHONY: clean
clean:
	@rm -fr $(dir_out)
