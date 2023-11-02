vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int temp=0;
    vector <int> b;
    for(int i=0;i<n;i++)
    {
        std::sort(a.begin(),a.end(),greater<int>());
    }
  
    b.push_back(a[1]);
  b.push_back(a[n-2]);

  
  return b;   
}
