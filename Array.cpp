#include <iostream>
using namespace std;
main(){
	//Array
	//A group of consective memory location with same name and data type.
	//The memory location in the array are known as elements of array.
	//Length of array... no. of elements
	//Elements are accessed with respect to its position in array 
	//Index or subscript .... position of elements
	//First element has zero index and so on
	//Value of index is written in bracket with array name
	int x[5];
	cout<<"Enter five values :\n";
	cin>>x[0];
	cin>>x[1];
	cin>>x[2];
	cin>>x[3];
	cin>>x[4];
	cout<<"\nYour Entered values are : \n";
	cout<<x[0]<<"\n";
	cout<<x[1]<<"\n";
	cout<<x[2]<<"\n";
	cout<<x[3]<<"\n";
	cout<<x[4]<<"\n";
	}
