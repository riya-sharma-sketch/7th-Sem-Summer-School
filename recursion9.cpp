#include <iostream>

void sum(int num){
	
	// static is a storage class which is makes variable as global. 
	static int s=0;	
	
	if( num == 0 ){
		
		std::cout<< "sum is: "<<s;
		return;
	}
		
	s += num;
	sum( num-1 );
}

int main(){
	
	sum( 5 );
	
//	std::cout<< "Sum is: "<< s;
	
	return 0;
}
