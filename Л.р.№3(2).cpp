#include <iostream>
using namespace std;

void main(){
  int a,c,d,i;
	cout<<"Vvedite kol-vo chisel v posledovatelnosti"<<endl;
	cin>>i;
	cout<<"Vv posledovatelnost'"<<endl;
	int x[100];
	for (a=0;a<i;a++) {cin>>x[a];};
	for (a=0;a<i;a++) {cout<<x[a]<<" ";}
	do {cout<<"Vv predeli otrezka:"<<endl;
		cin>> c>>d;} 
	while (d<c); 
	int b;
	for (b=0;b<i;b++)
	if (x[b]<c) cout<<x[b]<<" ";
	cout<<endl;
	for (b=0;b<i;b++)
		if ((x[b]>=c)&&(x[b]<=d)) cout<<x[b]<<" ";
	cout<<endl;
	for (b=0;b<i;b++)
		if (x[b]>d) cout<<x[b]<<" ";
	cout<<endl;
	cin.get();
	cin.get();
}
