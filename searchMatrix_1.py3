class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        """
        TC : O(N)
        SC : O(1)
        """
        low = 0
        high = len(matrix[0]) - 1
        index = len(matrix) - 1
        
        for i, row in enumerate(matrix):
            if target <= row[-1]:
                index =  i
                break
        
        
        array = matrix[index]
        while(low <= high):
            mid = (low + high) //2
            if array[mid] == target:
                return True
            elif array[mid] < target:
                low = mid + 1
            else:
                high = mid - 1
                
        return False
    
        
        
        
