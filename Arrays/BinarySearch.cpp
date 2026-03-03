#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = 10;
	// binary search only works on sorted array

	int key = 7;
	int low = 0;
	int high = n-1;
	bool found = false;
	while(low <= high)
	{
		int mid = low + (high - low) / 2;

		if(arr[mid] == key)
		{
			found = true;
			cout<<"Element found at index : "<<mid<<endl;
			break;
		}
		else if(arr[mid] < key)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
		
	}
	if (!found)
	{
		cout<<"Element not found in the array."<<endl;
	}
   
}