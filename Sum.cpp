
//This is c++
#include <iostream>

using namespace std;

int sum(int a , int b){
	int c = a + b;
	return c;
	
	}

int main(int argc, char *argv[])
{
	int a;
	int b;
	cin>> a;
	cin>>b;

	cout<<"This is your value:" << sum(a,b);
}