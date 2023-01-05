class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int m=0, max1=0;
        if (n==1){
            arr[0]=-1;
            return arr;
        }
        for (int i=0;i<n;++i){
            if (i<m)
                arr[i]=arr[m];
            else{
                for (int j=i+1;j<n;++j){
                    if (arr[j]>=max1){
                        max1=arr[j];
                        m=j;
                    }
                }
                arr[i]=max1;
                max1=-1;
            }
        }
        return arr;
    }
};
