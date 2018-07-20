#include <iostream>

using namespace std;

int main()
{
	int a[] = {16, 19, 11, 15, 10, 12, 14};
	int i,j;
	int size = 7;
	
	for (i=0; i<size; i++)
	{
		j = i;
		
		//i is not the first element
		while(j>0)
		{
			//check if not in order
			if(a[j-1] > a[j])
			{
				//swapping
				int temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
			//in order
			else
			{
				break;
			}
			j--;
		}
	}
	
	for(i=0; i<size; i++)
		cout << a[i] << endl;
	
	return 0;
}
