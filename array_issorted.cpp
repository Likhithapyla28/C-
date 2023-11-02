int isSorted(int n, vector<int> a) {
    // Write your code here.
    int count=0;
    for(int i=0;i<(a.size()-1);i++)
    {
        if(a[i]<=a[i+1])
        {
           count++; 
        }
        else{
            count=0;
            break;
        }
        
    }
    if(count==0)
    {
        return 0;
    }
    else{
        return 1;
    }
}
