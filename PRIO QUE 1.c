#include <stdio.h>
int size = 0;

void swap(int *a, int *b){
  int temp = *b;
  *b = *a;
  *a = temp;
}

heapify(int array[],int size,int i){
	int small=i;
	int left=2*i+1;
	int right=left+1;
	
	if(size>left && array[small]>array[left]){
		small=left;
	}
	if(size>right && array[small]>array[right]){
		small=right;
	}
	if(small != i){
		int t=array[i];
		array[i]=array[small];
		array[small]=t;
		heapify(array,size,small);
	}
}

void insert(int array[], int newNum){
  if (size == 0)
  {
    array[0] = newNum;
    size += 1;
  }
  else{
    array[size] = newNum;
    size += 1;
    int i;
    for (i = size / 2 - 1; i >= 0; i--){
      heapify(array, size, i);
    }
  }
}

void deleteRoot(int array[], int num){
  int i;
  for(i = 0; i < size; i++){
    if (num == array[i])
      break;
  }
  swap(&array[i], &array[size - 1]);
  size -= 1;
  for (i = size / 2 - 1; i >= 0; i--){
    heapify(array, size, i);
  }
}

void printArray(int array[], int size){
	int i;
	for (i = 0; i < size; ++i)
		printf("%d ", array[i]);
		printf("\n");
}

int main()
{
  int array[10];
  insert(array, 3);
  insert(array, 4);
  insert(array, 9);
  insert(array, 5);
  insert(array, 2);
  insert(array, 11);
  insert(array, 23);
  insert(array, 13);
  insert(array, 1);

  printf("Min-Heap array: ");
  printArray(array, size);
  deleteRoot(array, 4);
  printf("After deleting an element: ");
  printArray(array, size);
}
