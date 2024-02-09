#include <iostream>

int main(int argc, char *argv[]) {
    if(argc != 2) {
        std::cerr << "Program not used correctly!" << std::endl;
        std::cerr << "Correct format is: ./philo <file>"
        return EXIT_FAILURE;
    }

    std::string input = readFile(argv[2]);
    tokenize(input);

    return EXIT_SUCCESS
}