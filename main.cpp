#include <iostream>
#include <vector>
#include "heap.h"

int main(){
	std::vector<int> myArr= {5,3,4,6,7,1,9,8,2};
	std::cout<< "Orginal array: \n";
	for(int i=0;i<myArr.size();i++){
		std::cout<<myArr[i]<<", ";
	}	
	std::cout<<"\n";
	
	
	heapsort(myArr);
	
	std::cout<< "After heapsort array: \n";
	for(int i=0;i<myArr.size();i++){
		std::cout<<myArr[i]<<", ";
	}	
	std::cout<<"\n";
	
	return 0;
}
