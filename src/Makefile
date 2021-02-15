CPPFILES = $(wildcard *.cpp)
OBJFILES = $(CPPFILES:.cpp=.o)
OUT      = libdatastructures.a

CFLAGS = -Wall -c -std=c++11
LDLIBS = -lstdc++ -lm

$(OUT):	$(OBJFILES)
	ar ru $@ $^
	ranlib $@

%.o:	%.cpp
	$(COMPILE.cpp) $(CFLAGS) $<

.PHONY: clean
clean:
	rm -f $(OBJFILES) $(OUT)

