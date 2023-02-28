#include <stdio.h>
#include <stdlib.h>
// Access array elements using pointers

int main()
{
	int data[5], i;
	printf("Enter elements: ");

	for(i = 0; i < 5; ++i)
	scanf("%d", data + i);
   
	printf("memory addresses:\n");   
	for(i = 0; i < 5; ++i)
	printf("%d\n", data + i);  

	printf("You entered: \n");
   	for(i = 0; i < 5; ++i)
	printf("in address %d there is %d\n", &data[i], *(data + i));

    return 0;
}


