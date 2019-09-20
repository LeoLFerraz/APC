
#ifndef SUDOKU_SUDOKUFILEREADER_H
#define SUDOKU_SUDOKUFILEREADER_H

#include <string>
#include <fstream>
#include <iostream>
#include "SudokuFileLoader.h"

using namespace std;

class SudokuFileReader {
    public:
        SudokuFileReader(string filename, SudokuFileLoader& loader);
};


#endif //SUDOKU_SUDOKUFILEREADER_H
