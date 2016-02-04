#include <vector>
#include "iostream"

void get_combinations(const std::vector<std::string> & letters, const std::string & number, size_t index, std::string word_so_far) {

    if (index >= number.size()) {
        std::cout << word_so_far << std::endl;
    } else {
        int letter_index = number[index] - '0';

        std::string l = letters[letter_index];

        for (char & c : l){
            get_combinations(letters, number, index + 1, word_so_far + c);
        }
    }


}

int main (int argc, char ** argv) {

    const std::vector<std::string> letters = { "+", "", "abc", "def", "ghi",
                                         "jkl", "mno", "pqrs", "tuv", "wxyz"};

    std::string number = "43556";
    std::string word_so_far = "";

    get_combinations(letters, number, 0, word_so_far);

}