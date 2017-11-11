


Black_Jack: obj/main.o obj/Player.o obj/My_Player.o obj/Carefull_Player.o obj/Croupier_Player.o obj/Game.o
	g++ -std=c++0x -o Black_Jack obj/main.o obj/Player.o obj/My_Player.o obj/Carefull_Player.o obj/Croupier_Player.o obj/Game.o

obj/main.o: src/main.cpp inc/Game.h
	g++ -std=c++0x -c -g  -pedantic -Wall -Iinc -o obj/main.o src/main.cpp

obj/Player.o: src/Player.cpp inc/Player.h
	g++ -std=c++0x -c -g  -pedantic -Wall -Iinc -o obj/Player.o src/Player.cpp

obj/My_Player.o: src/My_Player.cpp inc/My_Player.h 
	g++ -std=c++0x -c -g  -pedantic -Wall -Iinc -o obj/My_Player.o src/My_Player.cpp

obj/Croupier_Player.o: src/Croupier_Player.cpp inc/Croupier_Player.h 
	g++  -std=c++0x -c -g  -pedantic -Wall -Iinc -o obj/Croupier_Player.o src/Croupier_Player.cpp

obj/Carefull_Player.o: src/Carefull_Player.cpp inc/Carefull_Player.h 
	g++ -std=c++0x -c -g  -pedantic -Wall -Iinc -o obj/Carefull_Player.o src/Carefull_Player.cpp

obj/Game.o: src/Game.cpp inc/Game.h 
	g++ -std=c++0x -c -g  -pedantic -Wall -Iinc -o obj/Game.o src/Game.cpp
clean:
	rm -f obj/*.o Black_Jack
