#include <iostream>
#include <fstream>
#include <string>

std::string readFile(std::string filename) {
    std::string ret;
    std::string buf;
    std::ifstream file(filename);

    while(std::getline(file, buf)) {
        ret += buf;
        ret.push_back('\n');
    }

    return ret;
}