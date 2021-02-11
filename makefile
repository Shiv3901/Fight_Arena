nothing:
	@echo Please specify all, install, or clean

all:
	(cd src ; /usr/bin/make -f Makefile all)

install:
	(cd src ; /usr/bin/make -f Makefile install)

play: install
	./installed

clean:
	(cd src ; /usr/bin/make -f Makefile clean)
	(cd tests ;/usr/bin/make -f Makefile clean)
	rm -f installed

runtests:
	(cd tests ; /usr/bin/make -f Makefile runtests)
