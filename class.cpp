#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int i,j;
	public:
		void inputData()
		{
			cout<<"enter data :\t";
			cin>>i;
			cin>>j;
		}
		void dispData()
		{
			cout<<"vale of i :"<<i<<"   value of j :"<<j<<endl;
		}
		void setData(int a,int b)
		{
			i=a;
			j=b;
		}
};
int main()
{
A a0;
a0.inputData();
a0.dispData();
A a1;
a1.inputData();
a1.dispData();
A a2;
a2.inputData();
a2.dispData();
a2.setData(7,8);
a2.dispData();
getch();
return 0;
}

