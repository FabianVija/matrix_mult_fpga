#define IN_A_ROWS 5
#define IN_A_COLS 5
#define IN_B_ROWS 5
#define IN_B_COLS 5

typedef char mat_a;
typedef char mat_b;
typedef short mat_prod;

// Prototype of top level function for C-synthesis
void matrix_mult(
      mat_a a[IN_A_ROWS][IN_A_COLS],
      mat_b b[IN_B_ROWS][IN_B_COLS],
mat_prod prod[IN_A_ROWS][IN_B_COLS]);
