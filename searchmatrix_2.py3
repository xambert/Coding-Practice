class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        """
        idea = 2d matrix equivalent : i * row + column
        [[1,2,3],[4,5,6]] = [1,2,3,4,5,6]
        1 = 0,0 = 0 * 3 + 0 = 0 = num
        2 = 0,1 = 0 * 3 + 1 = 1
        3 = 0,2 = 0 * 3 + 2 = 2
        4 = 1,0 = 1 * 3 + 0 = 3
        5 = 1,1 = 1 * 3 + 1 = 4
        6 = 1,2 = 1 * 3 + 2 = 5
        row_no =  num//columns
        col_no = num%columns
        as data is stored in row-major order
        """
        low = 0
        high = len(matrix) * len(matrix[0]) -1 
        col = len(matrix[0])
        while low<= high:
            mid = low + (high - low)//2
            if matrix[mid//col][mid%col] == target:
                return True
            elif matrix[mid//col][mid%col] < target:
                low = mid + 1
            else:
                high = mid - 1
        return False
        
        
