main:	main.o Item.o Obstaculo.o Player.o Bomba.o NBomba.o VBomba.o EBomba.o Escenario.o
		g++ main.o Item.o Obstaculo.o Player.o Bomba.o NBomba.o VBomba.o EBomba.o Escenario.o -o main
		rm *.o

main.o: main.cpp Item.h Obstaculo.h Player.h Bomba.h NBomba.h VBomba.h EBomba.h Escenario.h
		g++ -c main.cpp

Item.o:	Item.h
		g++ -c Item.cpp

Obstaculo.o: Item.h Obstaculo.h
			g++ -c Obstaculo.cpp

Player.o:	Item.h Player.h
			g++ -c Player.cpp

Bomba.o:	Item.h
			g++ -c Bomba.cpp

NBomba.o:	Bomba.h	NBomba.h
			g++ -c NBomba.cpp

EBomba.o:	Bomba.h EBomba.h
			g++ -c EBomba.cpp

VBomba.o:	VBomba.h Bomba.h
			g++ -c VBomba.cpp

Escenario.o:	Escenario.h	Item.h Obstaculo.h Player.h Bomba.h NBomba.h VBomba.h
				g++ -c Escenario.cpp