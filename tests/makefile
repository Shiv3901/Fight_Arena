all:
	(cd .. ; /usr/bin/make -f makefile all)

play:
	(cd .. ; /usr/bin/make -f makefile play)

runtests: attackstest securitytest checkertest fieldtest passagetest groundtest playertest

attackstest: attackstestfile.cpp ../attacks.o
	g++ attackstestfile.cpp ../attacks.o -o attackstest
	./attackstest < attacksinput.txt | diff - attacksoutput.txt
	echo -e '\n'
	echo Test passed: 10 cases tested on 5 different attacks

securitytest: securitytestfile.cpp ../security.o
	g++ securitytestfile.cpp ../security.o -o securitytest
	./securitytest < securityinput.txt | diff - securityoutput.txt
	echo -e '\n'
	echo Test passed: 20 cases tested

checkertest: checkertestfile.cpp ../checker.o
	g++ checkertestfile.cpp ../checker.o -o checkertest
	./checkertest < checkerinput.txt | diff - checkeroutput.txt
	echo -e '\n'
	echo Test passed: 50 cases tested

fieldtestfile.o: fieldtestfile.cpp 
	g++ -c fieldtestfile.cpp -o fieldtestfile.o
	
fieldtest: fieldinput.txt 
	./fieldtest < fieldinput.txt | diff - fieldoutput.txt 
	echo -e '\n'
	echo Test passed

passagetest: passagetestfile.cpp ../input.o ../passage.o ../attacks.o ../security.o passageinput.txt
	g++ passagetestfile.cpp ../input.o ../passage.o ../attacks.o ../security.o -o passagetest
	./passagetest < passageinput.txt | diff - passageoutput.txt
	echo -e '\n'
	echo Test passed: 10 cases tested 

groundtest: groundinput.txt 
	./groundtest < groundinput.txt | diff - groundoutput.txt
	echo -e '\n'
	echo Test passed

playertest: playertestfile.cpp ../input.o playerinput.txt ../player.o ../archer.o ../medic.o ../mechanic.o ../defender.o
	g++ playertestfile.cpp ../player.o ../archer.o ../medic.o ../mechanic.o ../defender.o -o playertest
	./playertest < playerinput.txt > playeroutput.txt
	echo -e '\n'
	echo Test passed 

removetests: 
	rm attackstest securitytest checkertest passagetest  playertest

clean: 
	(cd .. ; /usr/bin/make -f makefile clean)

random: random_gen.cpp
	g++ random_gen.cpp -o random

# fieldtest: fieldtestfile.o ../input.o ../field.o ../player.o ../mechanic.o ../defender.o ../passage.o ../clearscreen.o ../checker.o ../attacks.o ../security.o
# 	g++ fieldtestfile.o ../input.o ../field.o ../player.o ../mechanic.o ../defender.o ../passage.o ../clearscreen.o ../checker.o ../attacks.o ../security.o -o fieldtest
# 	./fieldtest < fieldinput.txt 
# 	echo -e '\n'
# 	echo Test passed

# groundtest: groundtestfile.cpp ../input.o groundinput.txt ../ground.o ../player.o ../archer.o ../medic.o ../mechanic.o ../defender.o ../attacks.o ../passage.o ../field.o ../clearscreen.o ../security.o ../checker.o
# 	g++ groundtestfile.cpp ../input.o ../ground.o ../player.o ../archer.o ../medic.o ../mechanic.o ../defender.o ../attacks.o ../passage.o ../field.o ../clearscreen.o ../security.o ../checker.o -o groundtest
# 	./groundtest < groundinput.txt
# 	echo -e '\n'
# 	echo Test passed