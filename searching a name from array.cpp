#include <iostream>
using namespace std;
main(){
	string arr[3]={"Jack Frost","Dumbledor","Tooth Fairy"};
	int i ;
	string sname;
	int loc=-1;
	cout<<"Enter name to search : ";
	getline(cin,sname);
	for(i=0;i<=2;i++)
	if(arr[i]==sname)
	loc=i;
	if(loc==-1)
	cout<<"The name was not found ";
	else
	cout<<"The name found at index : "<<loc+1;
	
}
