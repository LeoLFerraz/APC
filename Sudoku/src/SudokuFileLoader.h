#ifndef SUDOKU_SUDOKUFILELOADER_H
#define SUDOKU_SUDOKUFILELOADER_H

#include <list>
#include <string>

using namespace std;

class SudokuFileLoader {
    public:
        list<string> problems;
        list<string> solutions;

        string getProblem(int count);
        string getSolution(int count);
};


#endif //SUDOKU_SUDOKUFILELOADER_H
