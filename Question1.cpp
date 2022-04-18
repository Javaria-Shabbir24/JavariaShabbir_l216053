#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
void display()
{
	cout << "\t\t Welcome to the word search puzzle ";
	cout << endl << "\t   You are given different words in the grid find them :)" << endl;
}
void ltr(string word,char matrix[10][10])
{
	
	int length = 0;
	int size1 = 0;
	/*word length*/
	length = word.size();
	/*array size minus word length,,,,,, 9 is used because col start from 0 */
	size1 = 9 - length;
	
	int k = 0;
	int row = rand() % 9;
	int column = rand() % size1;

	for (int i = 0, j = 0; word[k] != '\0'; i++, column++)
	{
		matrix[row][column] = word[k];
		k++;
	}
}
void rtl (string word, char matrix[10][10])
{
	
	int length = 0;
	int size1 = 0;
	/*word length*/
	length = word.size();
	/*array size minus word length,,,,,, 9 is used because col start from 0 */
	size1 = 9 - length;

	int k = 0;
	int row = rand() % 9;
	int column = length;
	for (int i = 0, j = 0; word[k] != '\0'; i++, column--)
	{
		matrix[row][column] = word[k];
		k++;
	}
	
}
void ttb(string word, char matrix[10][10])
{
	
	int length = 0;
	int size1 = 0;
	/*word length*/
	length = word.size();
	int k = 0;
	/*array size minus word length,,,,,, 9 is used because col start from 0 */
	size1 = 9 - length;
	int row = rand() % size1;
	int column = rand() % 9;
	for (int i = 0; word[k] != '\0'; i++, row++)
	{
		matrix[row][column] = word[k];
		k++;
	}
}
void btt(string word, char matrix[10][10])
{
	
	int length = 0;
	/*word length*/
	length = word.size();
	int k = 0;
	/*array size minus word length,,,,,, 9 is used because col start from 0 */
	int row = length;
	int column = rand() % 9;
	for (int i = 0; word[k] != '\0'; i++, row--)
	{
		matrix[row][column] = word[k];
		k++;

	}
}
void tlbr (string word, char matrix[10][10])
{
	
	int length = 0;
	/*word length*/
	length = word.size();
	int k = 0;
	for (int i = 0, j = 0; word[k] != '\0'; i++, j++)
	{
		matrix[i][j] = word[k];
		k++;
	}
}
void brtl(string word, char matrix[10][10])
{

	int length = 0;
	/*word length*/
	length = word.size();
	int k = 0;
	for (int i = 10, j = 10; word[k] != '\0'; i--, j--)
	{
		matrix[i][j] = word[k];
		k++;
	}
}
void trbl(string word, char matrix[10][10])
{

	int length = 0;
	/*word length*/
	length = word.size();
	int k = 0;
	for (int i = 0, j = 10; word[k] != '/0'; i++, j--)
	{
		matrix[i][j] = word[k];
		k++;
	}
}
void bltr(string word, char matrix[10][10])
{

	int length = 0;
	/*word length*/
	length = word.size();
	int k = 0;
	for (int i = 10, j = 0; word[k] != '/0'; i--, j++)
	{
		matrix[i][j] = word[k];
		k++;
	}
}
int main()
{
	char matrix[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			 matrix[i][j] ='*';
		}
		
	}
	display();
	int l = 6;/*reads a random word from input file*/
	char word[] = "*";
	
	ifstream fin;
	fin.open("input.txt");
	do
	{
		fin >> word;
		int num = rand() % 5;
		if (num == 0)/*placing the word from left to right*/
		{

			ltr(word,matrix);
		}
		else if (num == 1)/*placing the word from top to bottom*/
		{
			ttb(word,matrix);
		}
		else if (num == 2)/*placing the word from right to left*/
		{
			rtl(word,matrix);
			
		}
		else if (num == 3)/*placing the word from bottom to top*/
		{
			btt(word, matrix);
			
		}
		else if (num == 4)/*placing word from diagonal top left to bottom right*/
		{
			tlbr(word, matrix);
			
		}
		else if (num == 5)/*placing word from bottom right to diagonal top left */
		{
			brtl(word, matrix);
			
		}
		else if (num == 6)/*placing the word from diagonal top right to bottom left*/
		{
			trbl(word, matrix);
			
		}
		else if (num == 7)/*placing the word from diagonal bottom left to top right */
		{
			bltr(word, matrix);
			
		}

	} while (--l >= 0);

	ofstream fout;
	fout.open("output.txt");
	
	int random;
	char letter;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (matrix[i][j] == '*')
			{
				random = rand() % 26;
				letter = 'a' + random;/*selects a random alphabet*/
				matrix[i][j] = letter;
			}
			
		}
		
		cout << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{

			cout << matrix[i][j] << " ";

		}
		cout << endl;

	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			
			fout << matrix[i][j] << " ";
			
		}
		fout << endl;
		
	}
	
	fin.close();
	fout.close();
	system("pause");
	return 0;
}