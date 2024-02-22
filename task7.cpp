#include<iostream>

void bubble(int * arr,int size) {
   for (int i = 0; i < size - 1;++i) {
      for (int j = 0; j < size - 1 -i; ++j) {
           if (arr[j]  < arr[j + 1]) {
	      std::swap(arr[j],arr[j + 1]);
	   }
      }
   }
}

void selection(int * arr,int size ) {
   int minIndex;
   for (int i = 0;i < size; ++i) {
        minIndex = i;
	for (int j = i + 1; j < size; ++j) {
	    if (arr[j] < arr[minIndex]) {
	        minIndex = j;
	    }
	    if (minIndex != i) {
	       std::swap(arr[minIndex],arr[i]);
	    }
	}
   }
}

void print (int *arr,int size) {
   for (int i = 0; i < size; ++i) {
     std::cout << arr[i] << std::endl;
   }
 }

int main()
{
   const int size = 5;
   int arr[size];
   std::cout << "enter the array:" << std::endl;
   for (int i = 0; i < size; ++i) {
      std::cin >> arr[i];
   }

   int a;
   std::cout<< "press 1 if u wan t to use bubble sort  or  press 2 if u want to use selection sort :";
   std::cin >> a;
   void (*fptr)(int *,int); 
   if (a == 1) {
      fptr  = bubble; 
   } else if(a == 0) {
       fptr  = selection;
   }

   fptr(arr,size);
   print(arr,size);
}
