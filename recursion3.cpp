#include <iostream>
using namespace std;

int num = 0;
void func(){

	if( num == 5 )
		return;

	num++;
	func();
	
	cout<< "Hello world: "<< num <<endl;
}

int main(){
	
	func(  );
	
	return 0;
} 
