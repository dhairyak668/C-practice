arrays: arrays.c
		gcc arrays.c -o arrays -lm
bubbleSort: bubbleSort.c
		gcc bubbleSort.c -o bubbleSort -lm
hypotenus: hypotenus.c
		gcc hypotenus.c -o hypotenus -lm

stringFunctions: stringFunctions.c
		gcc stringFunctions.c -o stringFunctions -lm

structs: structs.c
		gcc structs.c -o structs -lm

clean:
	rm -f arrays bubbleSort hypotenus stringFunctions structs

