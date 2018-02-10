///Name: MD.Shamim Jahan Sohag
///University: Dhaka International University
///Fb: fb.com/sohagmahin
///Email: sohagmahin@yahoo.com
#include<iostream>
using namespace std;
int matrix[6][6];
int main()
{
    int node,Edge;
    cin>>Edge;
    for(int i=0;i<Edge;i++){
        int n,m;
        cin>>n>>m;
        matrix[n][m]=1;
        matrix[m][n]=1;
    }
    cout<<"Adjacent Matrix: "<<endl;
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
            cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
            }
    return 0;
}
//Input: 
//5
//1 4
//4 5
//4 2
//2 5
//3 5
