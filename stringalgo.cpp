#include<iostream>
using namespace std;
int main()
{
    char *t ="ABCAADABC";
    char *p ="AADh";
    
    int flag=0;
    int n=9;
    int m=4;

    for(int i=0;i<=n-m;i++)
    {
        int j=0;
        while(j<m && t[i+j]==p[j])
        {
            j++;
        }
        if(m==j)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"Pattern found"<<endl;
    }
    else
    {
        cout<<"Pattern not found"<<endl;
    }

    

}