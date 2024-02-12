all: bubbleSort arrays hypotenus stringFunctions structs enums pointers calc_with_pointers

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

calc_with_pointers: calc_with_pointers.c
		gcc calc_with_pointers.c -o calc_with_pointers -lm
		.\calc_with_pointers.exe


clean:
	rm -f arrays bubbleSort hypotenus stringFunctions structs enums pointers calc_with_pointers

