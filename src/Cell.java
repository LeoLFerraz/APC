public class Cell {
    private int id;
    private int value;
    private Row row;
    private Column column;
    private Quadrant quadrant;
    public Cell(int value) {
        this.value = value;
    }

    public Cell setRow(Row row) {
        // TODO: Set constraints (e.g.: row cannot be larger than n^2 or smaller than 1.);
        this.row = row;
        return this;
    }
}
