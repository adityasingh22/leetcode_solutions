class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> v(num_people);
        int i=0, j=1;
        while (candies>0){
            if (candies < j)
                v[(i%num_people)] += candies;
            else
                v[(i%num_people)] += j;
            candies-=j;
            i++;
            j++;
        }
        return v;
    }
};
