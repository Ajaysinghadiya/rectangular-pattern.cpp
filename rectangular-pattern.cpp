#include<iostream>//header
using namespace std;//standard

int main ()//execution will begin from here
{
    int raws,colums;//declaring number of raws and colums
    cout<<"Please enter the number of raws"<<endl;//printing a line
    cin>>raws;//taking number of raws as input from user
    cout<<"Please enter the number of colums"<<endl;//printing a line
    cin>>colums;//taking number of colums as input from user
    for(int i=1;i<=raws;i++)//outer loop begins for printing number of raws
    {
        for(int j=1;j<=colums;j++)//inner loop begins for printing number of colums 
        {
            cout<<" * ";//printing the character inside the loop
        }
        cout<<endl;//changing the line after completing the 1st raw
    }
    return 0;
}
