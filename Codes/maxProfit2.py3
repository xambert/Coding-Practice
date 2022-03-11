class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        st = []
        ans = 0
        mint = int(1e5+5)
        for i,x in enumerate(prices):
            
            if len(st) and x<st[-1]:
                ans += st[-1] - mint
                mint = x
                st = []
                
            elif x< mint:
                mint = x
            """
            Reordering the above statement for test case:
            2,4,1
            """
                
            else:
                st.append(x)
        if len(st) and st[-1] > mint:
            ans += st[-1] - mint
        return ans
                
        
