#include <iostream>

using namespace std;

int main()
{
	int a[] = {16, 19, 11, 15, 10, 12, 14};
	int i,j;
	int size = 7;
	
	i = 0;
	while (i<size)
	{
		
		//find the smallest number in the subarray
		int index_of_smallest = i;
		for (j = i; j<size; j++)
		{
			if (a[j] < a[index_of_smallest])
				index_of_smallest = j;
		}
		
		//swapping action here
		int temp = a[i];
		a[i] = a[index_of_smallest];
		a[index_of_smallest] = temp;
		
		i++;
	}
	
	for (i=0; i<size; i++)
		cout << a[i] << endl;
	
	return 0;
}

