#include <iostream>
#include "heap.h"

void heapsort(std::vector <int> &arr){
	int size = arr.size();
	
	//turn array into heap first
	buildHeap(arr,size);
	
	//now we sort
}
void buildHeap(std::vector <int> &arr, int size){
	for( int index = (size/2)-1; index >= 0; index--){
		heapify(arr, size, index);
	}
}
void heapify(std::vector<int> &arr, int size, int rdex){
	int largest = rdex;
	int left = (2*rdex)+1;
	int right=(2*rdex)+2;
	
	if(left < size && arr[left] > arr[rdex]){
		largest = left;
	}
	if(right <size && arr[right] > arr[largest]){
		largest = right;
	}
	if(largest!=rdex){
		//means we have to swap
		std::swap(arr[rdex],arr[largest]);
		heapify(arr, size, largest);
			
	}
}

