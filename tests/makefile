runtests: attackstest securitytest checkertest fieldtest passagetest groundtest playertest

attackstest: attackstestfile.cpp ../src/attacks.o
	g++ attackstestfile.cpp ../src/attacks.o -o attackstest
	./attackstest < attacksinput.txt | diff - attacksoutput.txt
	echo -e '\n\n'
	echo Test passed: 10 cases tested on 5 different attacks

securitytest: securitytestfile.cpp ../src/security.o
	g++ securitytestfile.cpp ../src/security.o -o securitytest
	./securitytest < securityinput.txt | diff - securityoutput.txt
	echo -e '\n'
	echo Test passed: 20 cases tested

checkertest: checkertestfile.cpp ../src/checker.o
	g++ checkertestfile.cpp ../src/checker.o -o checkertest
	./checkertest < checkerinput.txt | diff - checkeroutput.txt
	echo -e '\n'
	echo Test passed: 50 cases tested

fieldtestfile.o: fieldtestfile.cpp 
	g++ -c fieldtestfile.cpp -o fieldtestfile.o
	
fieldtest: fieldinput.txt 
	./fieldtest < fieldinput.txt | diff - fieldoutput.txt 
	echo -e '\n'
	echo Test passed

passagetest: passagetestfile.cpp ../src/input.o ../src/passage.o ../src/attacks.o ../src/security.o passageinput.txt
	g++ passagetestfile.cpp ../src/input.o ../src/passage.o ../src/attacks.o ../src/security.o -o passagetest
	./passagetest < passageinput.txt | diff - passageoutput.txt
	echo -e '\n'
	echo Test passed: 10 cases tested 

groundtest: groundinput.txt 
	./groundtest < groundinput.txt | diff - groundoutput.txt
	echo -e '\n'
	echo Test passed

playertest: playertestfile.cpp ../src/input.o playerinput.txt ../src/player.o ../src/archer.o ../src/medic.o ../src/mechanic.o ../src/defender.o
	g++ playertestfile.cpp ../src/player.o ../src/archer.o ../src/medic.o ../src/mechanic.o ../src/defender.o -o playertest
	./playertest < playerinput.txt > playeroutput.txt
	echo -e '\n'
	echo Test passed 

clean: 
	rm attackstest securitytest checkertest passagetest  playertest

random: random_gen.cpp
	g++ random_gen.cpp -o random

