CPP    = g++
OB     = ./obj/

CFLAGS = -Wall -pedantic -pedantic-errors
FLAGI  = `wx-config-3.0 --cxxflags --unicode` -DwxUSE_GUI=0
BIB    = `wx-config-3.0 --libs --unicode`

.PHONY: clean

PROGRAM = cl

$(PROGRAM): $(OB)$(PROGRAM).o Makefile
	$(CPP) $(CFLAGS) $(FLAGI) $(BIB) $(OB)$(PROGRAM).o -o $@

$(OB)$(PROGRAM).o: $(PROGRAM).cpp
	@mkdir -p $(OB)
	$(CPP) $(CFLAGS) $(FLAGI) -c $< -o $@

clean:
	rm -f *.*[a-z]~ $(PROGRAM) $(OB)*.o

sz:
	git add -A; git commit -m "...."
	git push --force --all ; sync; sync
