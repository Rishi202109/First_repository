#include <iostream>
using namespace std;

int main()
{
    int** array;
    int row,col, i, j;
    
    cout << "Enter the number of rows" << endl;
    cin >> row;
 for(int i=0;i<row;i++)
 {
 	cout<<"enter the number of elements in row "<<i;
 	cin>>col;
 	    array = new int*[row];
    for(j=0; j<row; j++)
	{
        array[j] = new int[col];
    }
 
    cout << "Enter "<< (row * col) <<" numbers \n";
    for(i=0; i<row; i++){
        for(j=0; j<col; j++)
		{
            cin >> array[i][j];
        }
    }
 }
 

 
    cout << "Matrix is: \n";
    delete [] array;
}
