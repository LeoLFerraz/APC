
#include "SudokuFileReader.h"

SudokuFileReader::SudokuFileReader(string filename, SudokuFileLoader& loader)
{
    ifstream file;
    file.open(filename.c_str());

    if (!file) {
        cout << "Arquivo nao pode ser aberto.";
    } else {
        string line;

        while (file >> line) {
            int delimiterPosition = line.find(",");
            string problem = line.substr(0, delimiterPosition);
            string solution = line.substr(delimiterPosition + 1, line.npos);

            loader.problems.push_back(problem);
            loader.solutions.push_back(solution);
        }
        file.close();
    }
}
