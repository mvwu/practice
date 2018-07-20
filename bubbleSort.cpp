#include <iostream>

using namespace std;


int main()
{
	int size = 7;
	int a[] = {16, 19, 11, 15, 10, 12, 14};
	int i, j;
	
	for(j=0; j<size; j++)
	{
		//initially swapped is false
		int swapped = 0;
		i = 0;
		while (i<size-1)
		{
			//compare adjacent elements
			if (a[i] > a[i+1])
			{
				//swapping
				int temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
				//changing swapped to true
				swapped = 1;
			}
			i++;
		}
		//if swapped is false, then the array is sorted
		//we can break the loop
		if (!swapped)
			break;
	}
	
	for(i=0; i<size; i++)
		cout << a[i] << endl;
	
	return 0;
}
