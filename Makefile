cc :=gcc #tcc

.PHONY: build
build:
	$(cc) trigo.c -o trigo
.PHONY: clear
clear:
	rm trigo