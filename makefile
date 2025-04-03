all: clean test

appTests: deps
	mkdir -p build
	cd build && cmake .. -GNinja && ninja

test: appTests
	./build/app_tests

deps:
	python3 -m pip install cmake --break-system-packages

clean:
	rm -f build/
