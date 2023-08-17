#include <cstdlib>
#include <iostream>

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>

// Compilation check
#include <bsoncxx/json.hpp>

int main() {
    mongocxx::instance inst{};
    std::cout << "mongo-cxx-driver version: " << MONGOCXX_VERSION_STRING << std::endl;
}
