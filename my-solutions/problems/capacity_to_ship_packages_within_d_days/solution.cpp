class Solution {
public:

    int canShip(vector<int>& weights, int days, int capacity)
    {
        int needDays= 1;
        int load=0;
        for(int w:weights)
        {
            if(load+w>capacity)
            {
                needDays++;
                load= w;
            }
            else
            {
                load+= w;
            }
        }
        return needDays<= days;
    }

    int shipWithinDays(vector<int>& weights, int days) 
    {
        int high = accumulate(weights.begin(), weights.end(), 0);
        int low = *max_element(weights.begin(), weights.end());
        while (low< high)
        {
            int mid= low+ (high- low)/ 2;

            if (canShip(weights,days,mid))
                high= mid;
            else
                low= mid + 1;
        }
        return low;
    }
};