#	Environment variables:
#	1) Name of files:
SHELLFNS = "libshell"
SHELLFUNCTIONS_CPP = ./src/$(SHELLFNS).cpp
SHELLFUNCTIONS_HPP = ./include/$(SHELLFNS).hpp
SHELLFUNCTIONS_O = ./obj/$(SHELLFNS).o

#	2) Libraries:




main.o:
	echo Compiling main.o...

	g++ -o main.o main.cpp

$(SHELLFUNCTIONS_O): $(SHELLFUNCTIONS_HPP) $(SHELLFUNCTIONS_CPP)
	echo Compiling $(SHELLFUNCTIONS_CPP) -> $(SHELLFUNCTIONS_HPP) 
	g++ -c $(SHELLFUNCTIONS_CPP) -o $(SHELLFUNCTIONS_O)
clean:
	rm -rf ./obj/*.o