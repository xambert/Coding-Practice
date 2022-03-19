def trap(self, height: List[int]) -> int:

        left =0

        right =len(height)-1

        maxl=maxr=-1

        ans =0

        while left <= right:

            maxl=max(maxl,height[left])

            maxr=max(maxr,height[right])

            if maxl<maxr:

                ans+=maxl-height[left]

                left+=1

            else:

                ans+=maxr-height[right]

                right-=1

        return ans

        
