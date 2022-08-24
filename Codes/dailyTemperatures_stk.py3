def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        """
        
        1,2,3
        1,1,0
        
        2,1,1
        0,0,0
        
        1,5,2,3,4,6
        1,4,1,1,1,0
        
        1,1,5,3,2,4,6
        2,1,4,2,1,1,0
        Brute:
        1 - 5 2
        1 - 5 1
        5 - 6 4
        3 - 4 2
        
        result = [0]*n
        stack
        0, 1, 
        1
        2-i = 1
        a[1] = 1
        a[0] = 2
        5  
        5 3 2
        2 - 1
        3 - 2
        5 4 
        4 - 1
        5 - 4
        6
        ==0
        5,4,3,2,1,6
        5,4,3,2,1,6
        n = o(n) space (n)
        """
        stack = []
        n = len(temperatures)
        result = [0]*n
        for i, val in enumerate(temperatures):
            while stack and val > temperatures[stack[-1]]:
                result[stack[-1]] = i - stack[-1]
                stack.pop(-1)
            stack.append(i)
        return result
