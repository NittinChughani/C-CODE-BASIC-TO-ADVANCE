#include <stdio.h>

    void generate_magic_square(int square[4][4]);
    void input_square(int square[4][4]);
    int is_magic_square(int square[4][4]);
    void print_square(int square[4][4]);

    int main() {
    int magic[4][4];
    int user_square[4][4];


    printf("=== Part A: Generated 4x4 Magic Square ===\n");
    generate_magic_square(magic);
    print_square(magic);
    if (is_magic_square(magic)) {
        printf("Verification: This is a magic square. (All sums = 34)\n");
    } else {
        printf("Verification: This is not a magic square.\n");
    }


    printf("\n=== Part B: User Input Verification ===\n");
    input_square(user_square);
    print_square(user_square);
    if (is_magic_square(user_square)) {
        printf("Verification: This is a magic square.\n");
    } else {
        printf("Verification: This is not a magic square.\n");
    }

    return 0;
}

void generate_magic_square(int square[4][4]) {
    int count = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            square[i][j] = count++;
        }
    }


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (!((i == j) || (i + j == 3))) {
                square[i][j] = 17 - square[i][j];
            }
        }
    }
}

    void input_square(int square[4][4]) {
    printf("Enter your 4x4 matrix row by row (16 integers):\n");
    for (int i = 0; i < 4; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &square[i][j]);
        }
    }
}

    int is_magic_square(int square[4][4]) {
    int target = 34;
    int sum_diag1 = 0, sum_diag2 = 0;

    for (int i = 0; i < 4; i++) {
        int row_sum = 0, col_sum = 0;
        for (int j = 0; j < 4; j++) {
            row_sum += square[i][j];
            col_sum += square[j][i];
        }
        if (row_sum != target || col_sum != target) return 0;

        sum_diag1 += square[i][i];
        sum_diag2 += square[i][3 - i];
    }

    if (sum_diag1 != target || sum_diag2 != target) return 0;

    return 1;
}

    void print_square(int square[4][4]) {
    printf("\nMatrix content:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", square[i][j]);
        }
        printf("\n");
    }
    }
