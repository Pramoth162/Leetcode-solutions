class Solution {
public:
    int canPlaceBalls(int x,vector<int>position,int m)
    {
        int prevBallPos=position[0];
        int ballsPlaced=1;

        for(int i=1;i<position.size();i++)
        {
           if(position[i] - prevBallPos >= x)
            {
            prevBallPos=position[i];
            ballsPlaced++;
            }
        }
        return ballsPlaced >= m;
    }
    int maxDistance(vector<int>& position, int m) 
    {
        int answer=0;
        int n=position.size();
        sort(position.begin(),position.end());
        int low=1;
        int high=position[n-1]-position[0];
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(canPlaceBalls(mid, position, m))
            {
                answer=mid;
                low=mid+1;
            }
            else
            high=mid-1;
        } 
        return answer; 
    }
};