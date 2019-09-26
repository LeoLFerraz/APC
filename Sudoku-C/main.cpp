#include <iostream>

#include "src/SudokuFileLoader.h"
#include "src/SudokuFileReader.h"

using namespace std;

int main() {

    SudokuFileLoader loader;
    SudokuFileReader("..\\files\\sudoku.csv", loader);

    // Exemplo: problema e solucao da linha 3 arquivo .csv:
    //cout << loader.getProblem(3);
    //cout << loader.getSolution(3);

    return 0;

}