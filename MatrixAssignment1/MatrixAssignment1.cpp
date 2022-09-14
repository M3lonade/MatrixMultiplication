/*
Coded by Halil Tanribilen
CPSC 246 Matrix Assignment - 9/14/2022
*/
#include <iostream>
using namespace std;

const int SIZE = 10; //Our global constant variable for matrix sizes

//Prototypes go here
int getSquared(int num);
void initMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int matrix3[SIZE][SIZE]);
void multiplyMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int matrix3[SIZE][SIZE]);
void printMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int matrix3[SIZE][SIZE]);



int main()
{
	int matrix1[SIZE][SIZE]; //I declared my variables and matrixes here
	int matrix2[SIZE][SIZE];
	int matrix3[SIZE][SIZE];
	int val; 
	
	initMatrices(matrix1, matrix2, matrix3); //Calls the function to initialize the matrices
	multiplyMatrices(matrix1, matrix2, matrix3); //Calls the function to multiply the matrices
	printMatrices(matrix1, matrix2, matrix3); //Calls the function to print the matrices
	
	return 0;
	
}

void printMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int matrix3[SIZE][SIZE]) //This function is used for printing the matrices
{
	//Prints out the first matrix
	for (int row = 0; row < SIZE; row++)
	{
		for (int col = 0; col < SIZE; col++)
			cout << matrix1[row][col] << '\t';
		cout << endl;
	}
	cout << endl;

	//Prints out the second matrix
	for (int row = 0; row < SIZE; row++)
	{
		for (int col = 0; col < SIZE; col++)
			cout << matrix2[row][col] << '\t';
		cout << endl;
	}
	cout << endl;

	//Prints out the third matrix, aka the result of the multiplication
	for (int row = 0; row < SIZE; row++)
	{
		for (int col = 0; col < SIZE; col++)
			cout << matrix3[row][col] << '\t';
		cout << endl;
	}
}

void initMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int matrix3[SIZE][SIZE]) //This function initalizes the matrices
{
	int val; //Variable that helps with the pattern for the first matrix

	for (int k = 0; k < SIZE; k++) //Nested for loops to initialize the first matrix
	{
		val = k + 1;
		for (int v = 0; v < SIZE; v++)
		{
			val += 4; //I used this to increment the value of the matrix by 4
			matrix1[k][v] = val; //Assing the value of val to the matrix

		}
		SIZE - 1;
	}

	for (int i = 0; i < SIZE; i++) //Nested for loops to initialize the second matrix
	{
		for (int j = 0; j < SIZE; j++)
		{
			matrix2[i][j] = (i + 1) * getSquared(j + 1); //This is the mathematics to get the value of the second matrix with the specified pattern.
		}
		SIZE - 1;
	}
	
	
}


void multiplyMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int matrix3[SIZE][SIZE]) //This is the multiplication function that I've looked from this source: https://www.geeksforgeeks.org/c-program-multiply-two-matrices/
{
	int i, j, k;
	
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			matrix3[i][j] = 0;
			for (k = 0; k < SIZE; k++)
				matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
		}
	}
}

int getSquared(int num) //This function is used for getting the squared value of the number and it's purely meant for the matrix2 so we can initialize it with the specified pattern.
{
	return num * num;
}