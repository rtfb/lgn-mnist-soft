
# set SIZE="small" to generate a small input set for quick testing
SIZE=""

consts.h: mk-consts.py
	python3 mk-consts.py ${SIZE} > $@

inputs.c: mk-inputs.py consts.h
	python3 mk-inputs.py ${SIZE} > $@

inference.c: do.py
	python3 do.py > $@

a.out: main.c inputs.c inference.c Makefile decoder.c pack.c consts.h
	gcc -o $@ main.c inference.c decoder.c pack.c inputs.c

run: a.out
	./a.out

clean:
	rm -f a.out inputs.c inference.c consts.h
