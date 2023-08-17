.PHONY: build
build: create_build
	cd build
	cmake \
		-B build \
		-DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake \
		-DCMAKE_BUILD_TYPE=Release
	cmake --build build

.PHONY: run
run: build
	./build/test_package

.PHONY: create_build
create_build: clean
	conan install conanfile.txt --output-folder=build --build=missing

.PHONY: bootstrap
bootstrap:
	pip install conan
	conan profile detect --force

.PHONY:
clean:
	rm -rf build
