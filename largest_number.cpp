#include<iostream>
using namespace std;
 int largest(int n1,int n2,int n3)
 {
    if(n1>=n2)
    {
        if(n1>=n3)
        {
            return n1;
        }
        else
        {
            return n3;
        }
    }
    else
    {
        if(n2>=n3)
        {
           return n2;

        }
        else
        {
            return n3;
        }
    }
 }
int main()
{
    int n1,n2,n3;
    cout<<"Enter three no";
    cin>>n1>>n2>>n3;

    cout<<"largest number is"<<largest(n1,n2,n3);
    return 0;
}