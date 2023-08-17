# Mongo C++ Driver Conan Package Example

## Setup

```sh
$ make bootstrap
```

Alternatively:
```sh
$ pip install conan
$ conan profile detect --force
```

## Build

```
$ make
```

Alternatively:
```sh
$ conan install conanfile.txt --output-folder=build --build=missing
$ cmake \
	-B build \
	-DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake \
	-DCMAKE_BUILD_TYPE=Release
$ cmake --build build
```

## Run

```sh
$ ./build/test_package
mongo-cxx-driver version: 3.8.0
```
