#include<iostream>
using namespace std;
class M
{
protected:
int m;
public:
void get_m(int a)
{
m=a;
}
};
class N
{
protected:
int n;
public:
void get_n(int x)
{
n=x;
}
};
class P:public M,public N
{
public:
void display()
{
cout<<"m:"<<m<<endl;
cout<<"n:"<<n<<endl;
cout<<"m*n:"<<m*n<<endl;
}};
int main()
{
P p1;
p1.get_m(100);
p1.get_n(50);
p1.display();
}