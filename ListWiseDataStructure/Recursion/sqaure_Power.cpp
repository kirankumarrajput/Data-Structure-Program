#include<iostream>
using namespace std;
float Pow(float m, float n)
{
    
    if(m<0 || n<0)
    cout<<"=======================Invalid value======================"<<endl;
    else 
     {if(n==0)
     return 1;
     else
     for(int i=1,i<n;i++)
     m=m*m;
    //  return Pow(m,n-1)*m;
    return m;
     }

}
int main()
{
    float square ,m=2 ,n=5;
    square=Pow(m,n);
    cout<<m<<" Power "<<n<<" is : "<<square<<endl;
}