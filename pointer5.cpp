#include <iostream>
using namespace std;

int main(){
	
	int *ptr = nullptr;
	
	{
		int num = 20;
		ptr = &num;
		
		cout<< num <<endl;	// 20
		cout<<ptr << endl;	// address of num
		
		cout<< *ptr <<endl;	// 20
	}
	
	// ptr is now become dangling pointer
	cout<<ptr <<endl;	// address of num
	cout<< *ptr <<endl;	// 
	
	return 0;
}
