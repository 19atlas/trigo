cc :=gcc #tcc
BUILD_DIR := out

.PHONY: build
build:
	mkdir -pv $(BUILD_DIR)
	$(cc) trigo.c -o $(BUILD_DIR)/trigo
.PHONY: run
run:
	./out/trigo
.PHONY: clear
clear:
	rm trigo