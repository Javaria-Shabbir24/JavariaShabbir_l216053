//#include<iostream>
//#include<fstream>
//#include<windows.h>
//using namespace std;
// void display()
//{
//cout << "\t\t Welcome to the word search puzzle ";
//cout << endl << "\t   You are given different words in the grid find them :)" << endl;
//}
//void bltr(string word, char array[10][10], int row, int row1, int col, int col1)
//{
//	int k = 0;
//	int count = 0;
//	int length = word.length();
//	int l2 = row - row1 + 1;
//	if (l2 > length || l2 < length)
//	{
//		cout << "Word not found ! " << endl;
//	}
//	else
//	{
//		for (int i = row, j = col; i >= row1 ; i--, j++)
//		{
//
//			if (array[i][j] != word[k])
//			{
//				count++;
//				break;
//			}
//			k++;
//
//		}
//		if (count != 0)
//		{
//			cout << "Word not found ! " << endl;
//		}
//		else
//		{
//			cout << "Congrats,Word is found !" << endl;
//		}
//	}
//
//}
//void trbl(string word, char array[10][10], int row, int row1, int col, int col1)
//{
//	int k = 0;
//	int count = 0;
//	int length = word.length();
//	int l2 = col - col1 + 1;
//	if (l2 > length || l2 < length)
//	{
//		cout << "Word not found ! " << endl;
//	}
//	else
//	{
//		for (int i = row, j = col; i < row1+1; i++, j--)
//		{
//
//			if (array[i][j] != word[k])
//			{
//				count++;
//				break;
//			}
//			k++;
//
//		}
//		if (count != 0)
//		{
//			cout << "Word not found ! " << endl;
//		}
//		else
//		{
//			cout << "Congrats,Word is found !" << endl;
//		}
//	}
//
//}
//void brtl(string word, char array[10][10], int row, int row1, int col, int col1)
//{
//	int k = 0;
//	int count = 0;
//	int length = word.length();
//	int l2 = row - row1 + 1;
//	if (l2 > length || l2 < length)
//	{
//		cout << "Word not found ! " << endl;
//	}
//	else
//	{
//		for (int i = row1, j = col1; i >= row ; i--, j--)
//		{
//
//			if (array[i][j] != word[k])
//			{
//				count++;
//				break;
//			}
//			k++;
//
//		}
//		if (count != 0)
//		{
//			cout << "Word not found ! " << endl;
//		}
//		else
//		{
//			cout << "Congrats,Word is found !" << endl;
//		}
//	}
//
//}
//void tlbr(string word, char array[10][10], int row, int row1, int col, int col1)
//{
//	int k = 0;
//	int count = 0;
//	int length = word.length();
//	int l2 = row1 - row + 1;
//	if (l2 > length || l2 < length)
//	{
//		cout << "Word not found ! " << endl;
//	}
//	else
//	{
//		for (int i = row, j = col; i < row1 + 1; i++,j++)
//		{
//
//			if (array[i][j] != word[k])
//			{
//				count++;
//				break;
//			}
//			k++;
//
//		}
//		if (count != 0)
//		{
//			cout << "Word not found ! " << endl;
//		}
//		else
//		{
//			cout << "Congrats,Word is found !" << endl;
//		}
//	}
//
//}
//void ttb(string word, char array[10][10], int row, int row1, int col, int col1)
//{
//	int k = 0;
//	int count = 0;
//	int length = word.length();
//	int l2 = row1 - row + 1;
//	if (l2 > length || l2 < length)
//	{
//		cout << "Word not found ! " << endl;
//	}
//	else
//	{
//		for (int i = row, j = col; i <row1 + 1; i++)
//		{
//
//			if (array[i][j] != word[k])
//			{
//				count++;
//				break;
//			}
//			k++;
//
//		}
//		if (count != 0)
//		{
//			cout << "Word not found ! " << endl;
//		}
//		else
//		{
//			cout << "Congrats,Word is found !" << endl;
//		}
//	}
//
//}
//void btt(string word, char array[10][10], int row, int row1, int col, int col1)
//{
//	int k = 0;
//	int count = 0;
//	int length = word.length();
//	int l2 = row - row1 + 1;
//	if (l2 > length || l2 < length)
//	{
//		cout << "Word not found ! " << endl;
//	}
//	else
//	{
//		for (int i = row1, j = col; i > row + 1; i++)
//		{
//
//			if (array[i][j] != word[k])
//			{
//				count++;
//				break;
//			}
//			k++;
//
//		}
//		if (count != 0)
//		{
//			cout << "Word not found ! " << endl;
//		}
//		else
//		{
//			cout << "Congrats,Word is found !" << endl;
//		}
//	}
//
//}
//void ltr(string word,char array[10][10],int row,int row1,int col,int col1)
//{
//	int k = 0;
//	int count = 0;
//	int length = word.length();
//	int l2 = col1-col+1;
//	if (l2 > length || l2 < length)
//	{
//		cout << "Word not found ! " << endl;
//	}
//	else
//	{
//		for (int i = row, j = col; j < col1+1; j++)
//		{
//			
//				if (array[i][j] != word[k])
//				{
//					count++;
//					break;
//				}
//				k++;
//
//		}
//		if (count != 0)
//		{
//			cout << "Word not found ! " << endl;
//		}
//		else
//		{
//			cout << "Congrats,Word is found !" << endl;
//		}
//	}
//	
//}
//void rtl(string word, char array[10][10], int row, int row1, int col, int col1)
//{
//	int k = 0;
//	int count = 0;
//	int length = word.length();
//	int l2 = 0;
//	l2=col - col1+1 ;
//	if (l2 > length || l2 < length)
//	{
//		cout << "Word not found ! " << endl;
//	}
//	else
//	{
//		for (int i = row1, j = col1; j>=col;  j--)
//		{
//			
//				if (array[i][j] != word[k])
//				{
//					count++;
//					break;
//				}
//				k++;
//
//		}
//		if (count != 0)
//		{
//			cout << "Word not found ! " << endl;
//		}
//		else
//		{
//			cout << "Congrats,Word is found !" << endl;
//		}
//	}
//
//}
//int main()
//{
// display();
//	ifstream fin;
//	fin.open("input1.txt");
//	ofstream fout;
//	fout.open("output.txt");
//	char array[10][10];
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			fin >> array[i][j];
//		}
//	}
//	
//	char input;
//	int row, col, row1, col1;
//	char word[]="o";
//	do
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 10; j++)
//			{
//				cout << array[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << "Enter the word you found : ";
//		cin >> word;
//		cout << endl;
//		cout << "Enter the starting row : ";
//		cin >> row;
//		cout << "Enter the starting column : ";
//		cin >> col;
//		cout << "Enter the ending row : ";
//		cin >> row1;
//		cout << "Enter the ending column : ";
//		cin >> col1;
//		int num = 0;
//		cout << "SELECT THE PATTERN IN WHICH THE WORD IS WRITTEN ";
//		cout << endl << "1. left to right" << endl << "2. right to left" << endl << "3.top to bottom";
//		cout << endl << "4.bottom to top" << endl << "5.diagonal top right to bottom left" << endl;
//		cout << "6.diagonal bottom left to top right " << endl;
//		cout << "7.diagonal top left to bottom right" << endl;
//		cout << "8.diagonal bottom right to top left " << endl;
//		cin >> num;
//		if (num == 1)
//		{
//			ltr(word, array, row, row1, col, col1);
//		}
//		else if (num == 2)
//		{
//			rtl(word, array, row, row1, col, col1);
//		}
//		else if (num == 3)
//		{
//			ttb(word, array, row, row1, col, col1);
//		}
//		else if (num == 4)
//		{
//			btt(word, array, row, row1, col, col1);
//		}
//		else if (num == 7)
//		{
//			tlbr(word, array, row, row1, col, col1);
//		}
//		else if (num == 8)
//		{
//			brtl(word, array, row, row1, col, col1);
//		}
//		else if (num == 5)
//		{
//			trbl(word, array, row, row1, col, col1);
//		}
//		else if (num == 6)
//		{
//			bltr(word, array, row, row1, col, col1);
//		}
//		cout << endl << "Do you want to play again ?" << endl;
//		cout << "Press y for yes and n for no " << endl;
//		cout << "y/n"<<endl;
//		cin >> input;
//		system("cls");
//
//	} while (input != 'n');
//		
//	system("pause");
//	return 0;
//}