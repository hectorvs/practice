#include <iostream>
#include <vector>


void eraseRegion(std::vector<std::string> &grid, int row, int column) {

    grid.at(row)[column] = '0';

    // don't go less than left border && check left
    if ((column - 1) >= 0 && grid.at(row)[column - 1] == '1') {
        eraseRegion(grid, row, column - 1);
    }

    // don't go more than the bottom border && check down
    if ((row + 1) < grid.size() && grid.at(row + 1)[column] == '1') {
        eraseRegion(grid, row + 1, column);
    }

    // don't go more than the right border && check right
    if ((column + 1) < grid.at(row).size() && grid.at(row)[column + 1] == '1') {
        eraseRegion(grid, row, column + 1);
    }

    // don't go more than the upper border && check up
    if ((row - 1) >= 0 && grid.at(row - 1)[column] == '1') {
        eraseRegion(grid, row - 1, column);
    }

}

void countRegions(std::vector<std::string> grid){
    size_t regions = 0;

    for (size_t row = 0; row < grid.size(); ++row) {
        for (size_t column = 0; column < grid[row].size(); ++column) {

            if (grid.at(row)[column] == '1') {
                regions++;
                eraseRegion(grid, row, column);
            }
        }
    }

    std::cout << regions << std::endl;
}

int main(int argc, char ** argv) {

    int num_tests;
    std::cin >> num_tests;
    std::vector<std::string> grid;
    std::string grid_row;
    int num_operations;
    char operation;

    size_t x,y;
    char val;

    for (int test_num = 1; test_num <= num_tests; ++test_num){
        std::cout << "Case #" << test_num << ":" << std::endl;
        size_t rows, columns;

        std::cin >> rows;
        std::cin >> columns;

        grid.clear();
        grid.reserve(rows);

        for (int line = 0; line < rows; ++line){
            grid_row.clear();
            std::cin >> grid_row;
            grid.emplace_back(grid_row.c_str());
        }

        std::cin >> num_operations;

        for (int operation_num = 0; operation_num < num_operations; ++operation_num){

            std::cin >> operation;

            if (operation == 'Q') {
                countRegions(grid);
            } else if (operation == 'M') {
                std::cin >> x >> y >> val;

                grid.at(x)[y] = val;
            }

        }
    }

    return 0;
}

