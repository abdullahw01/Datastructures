CXX           := g++
LD            := g++

EXEC          := libdatastructures.a
CFLAGS        := -Wall -std=c++11
CXXFLAGS      := $(CFLAGS)
LDFLAGS       := -L lib 
LDLIBS        := -lm -lstdc++ -ldatastructures
INC           := -I inc
SRC           := $(wildcard src/*.cpp)
OBJ           := $(SRC:src/%.cpp=tmp/%.o)

EXEC_TEST     := test
CFLAGS_TEST   := $(CFLAGS)
CXXFLAGS_TEST := $(CFLAGS)
LDFLAGS_TEST  := $(LDFLAGS)
LDLIBS_TEST   := $(LDLIBS)
INC_TEST      := $(INC)
SRC_TEST      := $(wildcard test/*.cpp)
OBJ_TEST      := $(SRC_TEST:test/%.cpp=tmp/%.o)
EXEC_TEST     := $(SRC_TEST:.cpp=)

.SUFFIXES:

# --------------------------------------------------------------

.PHONY:	all
all: lib/$(EXEC)

lib/$(EXEC): $(OBJ)
	mkdir -p lib
	ar ru $@ $^
	ranlib $@
	mkdir -p inc
	cp src/*.h inc/.

# --------------------------------------------------------------

.PHONY:	test
test: $(EXEC_TEST)

$(EXEC_TEST):	$(OBJ_TEST)
	$(LD) $< -o $@ $(LDFLAGS_TEST) $(LDLIBS_TEST) && echo "[OK]  $@"

# --------------------------------------------------------------

tmp/%.o: src/%.cpp
	mkdir -p tmp
	$(CXX) $(CFLAGS) -c $< $(INC) -o $@ && echo "[OK]  $@"

tmp/%.o: test/%.cpp
	mkdir -p tmp
	$(CXX) $(CFLAGS_TEST) -c $< $(INC_TEST) -o $@ && echo "[OK]  $@"

# --------------------------------------------------------------

.PHONY: clean, clear
clean clear:
	rm -rf lib && echo "[CL]  lib/"
	rm -rf inc && echo "[CL]  inc/"
	rm -rf tmp && echo "[CL]  tmp/"
	ls $(SRC_TEST)
	ls $(EXEC_TEST)
	rm -f $(EXEC_TEST)

# --------------------------------------------------------------

.PHONY:	docker
docker:
	docker build . -f ./Dockerfile -t builder
	