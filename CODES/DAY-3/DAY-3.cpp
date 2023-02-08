#include<iostream>
using namespace std;

int main(){
//If - Else 
/*
    int bronum ;
    cin>>bronum;

    if(bronum==0){
        cout<<"baath banjayegi";
    }
    else{
        cout<<"baath nahi banjayegi";
    }
*/

//LOOPS
//for loop
/*
for(int i;i<=10;i=i+1){
    cout<<i*2<<endl;
}
*/
/*
for(int i=100;i>0;i=i/2){
    cout<<i<<endl;
}
*/

/*
int n;
if(cin>>n){
    cout<<"love babber"<<endl;
}       
*/

//patterns



//SOLID RECTANGLE
for(int row=0;row<4;row=row+1){
    for(int col=0;col<5;col=col+1){
        cout<<" * ";
    }
    cout<<endl;
}
cout<<endl;
cout<<endl;


/*
//SOLID SQUARE
for(int row=0;row<=4;row=row+1){
    for(int col=0;col<=4;col=col+1){
        cout<<" * ";
    }
    cout<<endl;
}
cout<<endl;
cout<<endl;
*/

/*
//HOLLOW RECTANGLE
for(int row=0;row<4;row=row+1){
    for(int col=0;col<5;col=col+1){
        if(row==0 || row==3){
            for(int col=0;col<5;col=col+1){}
            cout<<" * ";
        }
        else{
            for(col=0)
        }
    }
    cout<<endl;
}

cout<<endl;
cout<<endl;

*/



}