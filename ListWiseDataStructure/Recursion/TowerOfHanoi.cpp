#include<iostream>

char TH(int n, char &a,char &b,char &c)
{
    if(n>0)
    {
        TH(n-1,a,c,b);
        std::cout<<"Move (" <<a<<" To "<<c<<")"<<std::endl;
        TH(n-1,b,a,c);
    }
}
 int main()
 {
     char a='A',b='B',c='C';
     std::cout<<"=====For Solving hanoi problem====="<<std::endl<<std::endl;
     TH(2,a,b,c);

 }