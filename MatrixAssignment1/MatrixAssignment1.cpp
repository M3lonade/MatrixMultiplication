/*
Coded by Halil Tanribilen
CPSC 246 Matrix Assignment - 9/14/2022
*/
#include <iostream>
using namespace std;

int getSquared(int num);

const int SIZE = 10;

int main()
{
	int matrix1[SIZE][SIZE]; //I declared my variables and matrixes here
	int matrix2[SIZE][SIZE];
	int matrix3[SIZE][SIZE];
	int val;
	

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
	
	//Nested for loops to multiply the two matrixes
	for (int row = 0; row < SIZE; row++) 
	{
		for (int col = 0; col < SIZE; col++)
		{
			matrix3[row][col] = 0;
			for (int k = 0; k < SIZE; k++)
			{
				matrix3[row][col] += matrix1[row][k] * matrix2[k][col];
			}
		}
	}
	
	/*
	
	!!!UNCOMMENT TO PRINT OUT THE MATRICES FOR DEBUGGING!!!
	
	for (int row = 0; row < SIZE; row++) 
	{
		for (int col = 0; col < SIZE; col++)
			cout << matrix1[row][col] << '\t';
		cout << endl;
	}
	cout << endl;
	
	
	for (int row = 0; row < SIZE; row++) 
	{
		for (int col = 0; col < SIZE; col++)
			cout << matrix2[row][col] << '\t';
		cout << endl;
	}
	cout << endl;
	
	
	for (int row = 0; row < SIZE; row++) 
	{
		for (int col = 0; col < SIZE; col++)
			cout << matrix3[row][col] << '\t';
		cout << endl;
	}
	
	!!!UNCOMMENT TO PRINT OUT THE MATRICES FOR DEBUGGING!!!
	
	*/
	
	return 0;
	
}

int getSquared(int num) //This function is used for getting the squared value of the number and it's purely meant for the matrix2
{
	return num * num;
}