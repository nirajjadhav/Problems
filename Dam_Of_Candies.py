#User function Template for python3

#Back-end complete function Template for Python 3

 
class Solution:
    def maxCandy(self, height, n): 
    	ans = 0
    	s = 0
    	e = n-1

    	while e-s > 1:

    		max_area = min(height[s],height[e])*(e-s-1)
    		ans = max(max_area,ans)
    		if height[s]<height[e]:
    			s+=1
    		else:
    			e-=1
    	return ans


        # Your code goes here




#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        obj = Solution()
        print(obj.maxCandy(arr,n))



# } Driver Code Ends