all: test.o checker.o input.o field.o passage.o attacks.o ground.o  clearscreen.o security.o player.o archer.o defender.o mechanic.o medic.o
	clang++ test.o input.o checker.o field.o passage.o attacks.o ground.o clearscreen.o security.o player.o archer.o defender.o mechanic.o medic.o -o assess

install: all
	mv assess ../installed

test: test.cpp
	clang++ -c test.cpp -o test.o

checker: checker.cpp checker.h
	clang++ -c checker.cpp -o checker.o

field: field.cpp field.h 
	clang++ -c field.cpp -o field.o

passage: passage.cpp passage.h
	clang++ -c passage.cpp -o passage.o

attacks: attacks.cpp attacks.h
	clang++ -c attacks.cpp -o attacks.o

ground: ground.cpp ground.h  
	clang++ -c ground.cpp -o ground.o

clearscreen: clearscreen.cpp clearscreen.h
	clang++ -c clearscreen.cpp -o clearscreen.o

security: security.cpp security.h
	clang++ -c security.cpp -o security.o

player: player.cpp player.h 
	clang++ -c player.cpp -o player.o

archer: archer.cpp archer.h
	clang++ -c archer.cpp -o archer.o

defender: defender.cpp defender.h
	clang++ -c defender.cpp -o defender.o

mechanic: mechanic.cpp mechanic.h
	clang++ -c mechanic.cpp -o mechanic.o

medic: medic.cpp medic.h
	clang++ -c medic.cpp -o medic.o

input.o: input.cpp input.h
	clang++ -c input.cpp -o input.o

clean:
	rm -f *.o  assess

input1.o: input1.cpp input1.h
	clang++ -c input1.cpp -o input1.o

play2: player.h player.cpp archer.h archer.cpp defender.h defender.cpp mechanic.h mechanic.cpp medic.cpp medic.h play.cpp
	clang++ -Wall archer.cpp defender.cpp medic.cpp mechanic.cpp player.cpp play.cpp -o play
	./play
	rm play

play1: player.h player.cpp archer.h archer.cpp defender.h defender.cpp mechanic.h mechanic.cpp medic.cpp medic.h play1.cpp
	clang++ -Wall archer.cpp defender.cpp medic.cpp mechanic.cpp player.cpp play1.cpp -o play1
	./play1
	rm play1


test1: clearscreen.h clearscreen.cpp archer.cpp archer.h attacks.cpp ground.cpp test.cpp ground.h attacks.h checker.cpp checker.h defender.cpp defender.h field.cpp field.h mechanic.cpp mechanic.h medic.cpp medic.h passage.cpp passage.h player.cpp player.h security.cpp security.h ansi.h
	clang++ archer.cpp ground.cpp clearscreen.cpp attacks.cpp test.cpp checker.cpp defender.cpp field.cpp  mechanic.cpp medic.cpp passage.cpp player.cpp security.cpp ansi.h -o test
	./test






colour: colour.cpp ansi.h
	clang++ colour.cpp ansi.h -o colour
	./colour

attackstest: attackstestfile.cpp attacks.o
	clang++ attackstestfile.cpp attacks.o -o attackstest
	./attackstest < attacksinput.txt | diff - attacksoutput.txt
	echo Test passed: 10 cases tested on 5 different attacks

securitytest: securitytestfile.cpp security.o
	clang++ securitytestfile.cpp security.o -o securitytest
	./securitytest < securityinput.txt | diff - securityoutput.txt
	echo Test passed: 20 cases tested
