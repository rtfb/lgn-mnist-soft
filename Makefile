
inputs.c: mk-inputs.py
	python3 mk-inputs.py > $@

main.c: do.py inputs.c Makefile
	python3 do.py > $@

a.out: main.c
	gcc -o $@ main.c

run: a.out
	./a.out

clean:
	rm -f a.out main.c inputs.c
