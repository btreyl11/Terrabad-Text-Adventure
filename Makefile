SOURCE= bin/main.cpp
DEP= bin/player.cpp bin/item.cpp

main: $(SOURCE) $(DEP)
	g++ $(SOURCE) $(DEP) -o game -Wfatal-errors
