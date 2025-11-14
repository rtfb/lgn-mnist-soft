
inputs.c: mk-inputs.py
	python3 mk-inputs.py > $@

inference.c: do.py
	python3 do.py > $@

a.out: main.c inputs.c inference.c Makefile
	gcc -o $@ main.c inference.c

run: a.out
	./a.out

clean:
	rm -f a.out inputs.c inference.c
