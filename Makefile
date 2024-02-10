all: bubbleSort arrays hypotenus stringFunctions structs enums pointers

bubbleSort: bubbleSort.c
		gcc bubbleSort.c -o bubbleSort -lm

arrays: arrays.c
		gcc arrays.c -o arrays -lm
hypotenus: hypotenus.c
		gcc hypotenus.c -o hypotenus -lm

stringFunctions: stringFunctions.c
		gcc stringFunctions.c -o stringFunctions -lm

structs: structs.c
		gcc structs.c -o structs -lm

enums: enums.c
		gcc enums.c -o enums -lm

pointers: pointers.c
		gcc pointers.c -o pointers -lm

clean:
	rm -f arrays bubbleSort hypotenus stringFunctions structs enums pointers

