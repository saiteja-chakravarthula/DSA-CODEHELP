#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    /*
    //FULL PYRAMID
    for(int row=0;row<n;row++){
        //for spaces
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        //for *
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;

    }
    */
    /*
        // INVERTED FULL PYRAMID
        for (int row = 0; row < n; row++)
        {
            // for spaces
            for (int col = 0; col < row; col++)
            {
                cout << " ";
            }
            // for *
            for (int col = 0; col < n - row; col++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    */

    /*

    // hollow diamond
    //PART-1
    //UPPER PART
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n - row - 1; col++)
            {
                cout << " ";
            }
            for (int col = 0; col < 2 * row + 1; col++){
                if (col == 0 || col == 2 * row)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    //PART-2
    //LOWER PART

        for(int row=0;row<n;row++){
            for(int col=0;col<row;col++){
                cout<<" ";
            }
            for(int col=0;col<2*n-2*row-1;col++){
                if(col==0 || col==2*n-2*row-2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }

            }
            cout<<endl;

        }


    */
    /*
    //FLIPPED SOLID DIAMOND
        for(int row=0; row<n; row = row + 1) {
            for(int col =0; col<n-row; col = col + 1) {
                cout << "* ";
            }
            for(int col=0; col<2*row+1; col++) {
                cout <<"  ";
            }
            for(int col =0; col<n-row; col++) {
                cout << "* ";
            }

            cout << endl;
        }
        for(int row=0;row<n;row++){
            for(int col =0; col<row+1; col++) {
                cout << "* ";
            }
            for(int col=0; col<2*n-2*row-1; col++) {
                cout <<"  ";
            }
            for(int col =0; col<row+1; col++) {
                cout << "* ";
            }
            cout<<endl;
        }
    */
/*
    // Fancy Pattern
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < row + 1; col++)
        {
            cout << row + 1;
            if (col != row)
                cout << "*";
        }
        cout << endl;
    }

    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < n - row; col++)
        {
            cout << n - row;
            if (col != n - row - 1)
                cout << "*";
        }
        cout << endl;
    }
*/
//Alphabet Palindrome Pyramid
	for(int row=0; row<n; row=row+1) {
		
		int col;
		for( col=0; col<row+1; col=col+1) {
			int ans = col + 1;
			char ch = ans + 'A' -1;
			cout << ch;
		}
		
		//reverse counting printing
		for(int col=row; col>=1; col=col-1) {
			int ans = col;
			char ch = ans + 'A' -1;
			cout << ch;
		}
		cout << endl;
	}
}