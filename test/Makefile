CPPFILES  = $(wildcard *.cpp)
OBJFILES  = $(patsubst %.cpp,%.o,$(CPPFILES))
TESTS_PRG = $(patsubst %.cpp,%,$(CPPFILES))

LDFLAGS := -L ./../src
CPPFLAGS := -I ./../src
CXXFLAGS :=

CFLAGS = -Wall -c -std=c++11 $(CPPFLAGS)
LDLIBS = -lm -lstdc++ -ldatastructures

all:	tests

.PHONY: tests

tests:	$(TESTS_PRG)
$(TESTS_PRG):	$(OBJFILES)
		$(LINK.cpp) $< -o $@ $(LDFLAGS) $(LDLIBS)

%.o:	%.cpp                                                                                                                                      
	$(CXX) $(CXXFLAGS) -c $< $(CFLAGS) -o $@

.PHONY: clean
clean:
	rm -f $(OBJFILES) $(TESTS_PRG)

