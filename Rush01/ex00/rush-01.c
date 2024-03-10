#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define GRID_SIZE 4

int isValid(int board[GRID_SIZE][GRID_SIZE], int row, int col, int number) {
    for (int i = 0; i < GRID_SIZE; i++) {
        if (board[row][i] == number || board[i][col] == number) {
            return 0; // Checks for duplicates in the row and column
        }
    }
    return 1; // Return 1 if the number can be placed
}
int checkRowCol(int board[GRID_SIZE][GRID_SIZE], int index, int view1, int view2, int isRow) {
    int visible1 = 0, visible2 = 0, maxHeight = 0;
    // Check visibility from one side
    int i = 0;
    while (i < GRID_SIZE) {
        int value = isRow ? board[index][i] : board[i][index];
        if (value > maxHeight) {
            maxHeight = value;
            visible1++;
        }
        i++;
    }
    // Reset and check visibility from the other side
    maxHeight = 0;
    i = GRID_SIZE - 1;
    while (i >= 0) {
        int value = isRow ? board[index][i] : board[i][index];
        if (value > maxHeight) {
            maxHeight = value;
            visible2++;
        }
        i--;
    }
    return visible1 == view1 && visible2 == view2; // Check if the visible counts match the views
}
int checkViews(int board[GRID_SIZE][GRID_SIZE], int views[GRID_SIZE * 4]) {
    int i = 0;
    while (i < GRID_SIZE) {
        // Check each row and column against the corresponding views
        if (!checkRowCol(board, i, views[i], views[i + 4], 1) ||
            !checkRowCol(board, i, views[i + 8], views[i + 12], 0)) {
            return 0; // Return 0 if any row or column doesn't match the views
        }
        i++;
    }
    return 1; // Return 1 if all rows and columns match the views
}
int solve(int board[GRID_SIZE][GRID_SIZE], int row, int col, int views[GRID_SIZE * 4]) {
    // If the end of the board is reached, check if the board is valid
    while (row == GRID_SIZE - 1 && col == GRID_SIZE) {
        return checkViews(board, views);
    }
    if (col == GRID_SIZE) {
        row++; // Move to the next row
        col = 0; // Reset column index
    }
    // Try placing each number from 1 to 4 in the current cell
    int num = 1;
    while (num <= GRID_SIZE) {
        if (isValid(board, row, col, num)) {
            board[row][col] = num; // Place the number
            if (solve(board, row, col + 1, views)) {
                return 1; // If the placement leads to a solution, return 1
            }
            board[row][col] = 0; // Reset the cell if the placement doesn't lead to a solution
        }
        num++;
    }
    return 0; // Return 0 if no number leads to a solution
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        write(1, "Error\n", 6);
        return 1;
    }
    int input[GRID_SIZE * GRID_SIZE];
    char *token = strtok(argv[1], " ");
    int i = 0;
    while (token != NULL && i < GRID_SIZE * GRID_SIZE) {
        input[i++] = ft_atoi(token);
        token = strtok(NULL, " ");
    }
    if (i != GRID_SIZE * GRID_SIZE) {
        write(1, "Error\n", 6);
        return 1;
    }
    int board[GRID_SIZE][GRID_SIZE] = {0};
    if (!solve(board, 0, 0, input)) {
        write(1, "Error\n", 6);
        return 1;
    }
    int k = 0;
    while (k < GRID_SIZE) {
        int j = 0;
        while (j < GRID_SIZE) {
            printf("%d", board[k][j]);
            // Print space for all but the last column
            if (j < GRID_SIZE - 1) {
            write(1, " ", 1);
            }
            j++;
        }
        write(1, "\n", 1);;
        k++;
    }
    return 0;
}