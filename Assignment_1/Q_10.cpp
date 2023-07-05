/*Write a program to read and print a matrix of size m x n. Also find the row sum and the
column sum, and print the column number and row number that has the largest sum. Keep
your code modular.*/

#include <iostream>

void read_matrix(int **mat, int m, int n)
{
    std::cout << "Enter elements of matrix" << std::endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> mat[i][j];
        }
    }
}

void print_matrix(int **mat, int m, int n)
{
    std::cout << "\nMATRIX" << std::endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << mat[i][j] << '\t';
        }
        std::cout << std::endl;
    }
}

void colomn_max(int **mat, int m, int n)
{
    int cmax;
    int coloumn;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += mat[j][i];
        }
        if (i == 0)
        {
            cmax = sum;
            coloumn = i + 1;
        }
        else if (cmax < sum)
        {
            cmax = sum;
            coloumn = i + 1;
        }
    }
    std::cout << coloumn << " has the largest coloumn sum" << std::endl;
}

void row_max(int **mat, int m, int n)
{
    int rmax;
    int row;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += mat[j][i];
        }
        if (i == 0)
        {
            rmax = sum;
            row = i + 1;
        }
        else if (rmax < sum)
        {
            rmax = sum;
            row = i + 1;
        }
    }
    std::cout << row << " has the largest row sum" << std::endl;
}

int main()
{
    int **A;
    int m, n;
    std::cout << "Enter size of matrix: ";
    std::cin >> m >> n;
    A = new int *[m];
    for (int i = 0; i < m; i++)
        A[i] = new int[n];
    read_matrix(A, m, n);
    print_matrix(A, m, n);
    colomn_max(A, m, n);
    row_max(A, m, n);
    return 0;
}
/*Enter size of matrix: 3 3
Enter elements of matrix
1 2 1
2 1 2
1 2 1

MATRIX
1       2       1
2       1       2
1       2       1
2 has the largest coloumn sum
2 has the largest row sum*/