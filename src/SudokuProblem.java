public class SudokuProblem {
    private Row[] rows;
    private Column[] columns;
    private Quadrant[] quadrants;

    public SudokuProblem(SudokuFileLoader sudokuSet, int problemNumber, int nSize) {
        int nSize2 = (int)Math.pow(nSize, 2);
        int nSize3 = (int)Math.pow(nSize, 3);
        int nSize4 = (int)Math.pow(nSize, 4);
        // TODO: nSize should be a SudokuFileLoader calculated property;
        Cell[] cells = new Cell[nSize4];
        String sudokuProblemString = sudokuSet.problems.get(problemNumber);

        // Building rows:
        for(int r = 1; r <= nSize2; r++) {
            Cell[] rowCells = new Cell[nSize2];
            Row row = new Row(r, cells);
            for (int cl = 0; cl < nSize2; cl++) {
                Cell cell = new Cell(Character.getNumericValue(sudokuProblemString.charAt(((r-1)*(nSize2))+cl)));
                cell.setRow(row);
                row.addCell(cell, cl);
            }
        }
    }
}
