#include <iostream>
using namespace std;

void main(){
  int a,b,c,d;
	do{cout<<"Vv predeli promezhutka:"<<endl;
		cin>>c>>d;}
	while (c>=d);
	do {cout<<"Vv predeli otrezka:"<<endl;
		cin>> a>>b;} 
	while (a>=b);
if ((a>=c)&&(b<=d)) 
	{int i=0;
	for (i=c;i<a;i++) cout<<i<<"  ";
	cout<<endl;
	for (i=a;i<=b;i++) cout<<i<<"  ";
	cout<<endl;
	for (i=b+1;i<=d;i++) cout<<i<<"  ";
	cout<<endl;}
else cout<<"Nepravilnii promezhutok!";
	cin.get();
	cin.get();
}
