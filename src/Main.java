public class Main {
	public static void main(String[] args) {
		SudokuFileLoader loader = 
				new SudokuFileLoader("..\\Sudoku-Java\\files\\sudoku.csv", true);
		System.out.println(loader.problems.get(1));

	    // Exemplo: problema e solucao da linha 3 arquivo .csv:
	    // loader.problems.get(3);
	    // loader.solutions.get(3);
	    
	}
}
