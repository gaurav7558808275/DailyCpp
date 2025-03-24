#include <bits/stdc++.h>

// sliding window algorithm

int main()
{
    std::vector<int> a = {100, 200, 300, 400};

    int n = a.size();
    //std::cout << n;
    int k =2;
    int max_sum;
    if(n <= k)
    {
        std::cout << "Invalid" << std::endl;
        return -1;
    }
#if 0
// naive approach
    for(int i = 0 ;i < n-1 ; ++i)
    {
        int sum = 0;
        for(int j = 0 ; j < k ; j++)
        {
            sum += a[i+j];
        }
        max_sum = std::max(sum,max_sum);
    }
#endif
    int first_window_sum = 0;
    
    for(int i = 0 ; i < k ; i ++)
    {
        first_window_sum += a[i]; 
    }
    int window_sum = 0;
    for(int i = k; i < n ; i++)
    {
        window_sum = window_sum + a[i] /* add the next */ - a[i-k] /* reduce the previous */;  /* for the entire loop*/
    }
    first_window_sum += std::max(first_window_sum,window_sum);

    std::cout << first_window_sum; 
    return 0;
}