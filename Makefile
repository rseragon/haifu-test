?CC=gcc
CFLAGS=-std=c17
SRC=add.c
EXE=add

tests: EXE
	./${EXE}

SRC:
	${CC} ${CFLAGS} ${SRC} -o ${EXE}

EXE: SRC

.PHONY: clean
clean:
	rm -f ${EXE}

