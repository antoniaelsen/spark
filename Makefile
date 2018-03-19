# Copyright 2017 Modbot Inc.
.PHONY: build clean run

build:
	mkdir -p build
	cd build && cmake .. && make

clean: 
	rm -r build

run:
	./build/spark
