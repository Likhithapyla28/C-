vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int temp,j;
    for (j = k; j > 0; j--)
    {
        for(int i=0;i<(arr.size()-1);i++)
       {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
    return arr;
}
