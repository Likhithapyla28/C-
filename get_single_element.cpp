#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int count;
	for(int i=0;i<arr.size();i=i+2)
	{
		if(arr[i]!=arr[i+1])
		{
			count=arr[i];
			break;
		}
	}
	return count;


}
