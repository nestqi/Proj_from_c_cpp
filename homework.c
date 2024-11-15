#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Iscolumnnorm(int matrix[][100], int rows, int col)
{
    for (int i = 0; i < rows - 1; i++)
    {
        if (matrix[i][col] >= matrix[i + 1][col]) { // строгое возрастание
            return 0;
        }
    }
    return 1;
}

int main()
{
    int rows, cols;

    printf("Размеры матрицы: ");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];

    // Ввод элементов матрицы
    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Вывод матрицы
    printf("\nМатрица:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Основная часть
    printf("\nСтолбцы, элементы которых расположены по возрастанию:\n");
    int Iscolumn = 0;
    for (int col = 0; col < cols; col++)
    {
        if (Iscolumnnorm(matrix, rows, col))
        {
            printf("%d ", col + 1);  // Индексация с 1
            Iscolumn = 1;
        }
    }

    if (!Iscolumn)
    {
        printf("Нет столбцов с элементами по возрастанию.");
    }

    return 0;
}
