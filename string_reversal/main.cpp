#include <iostream>

int main(int argc, char ** argv) {
    std::string some_string;

    std::cin >> some_string;

    size_t start = 0;
    size_t end = some_string.size() - 1;
    size_t midpoint = (end + 1) / 2;
    char tmp;


    while ( start < end ) {

        tmp = some_string[start];
        some_string[start] = some_string[end];
        some_string[end] = tmp;

        start++;
        end--;
    }

    std::cout << some_string;


    return 0;
}