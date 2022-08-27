 def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        """
        
        (target - currpos)/ speed
        
        5
        1 2 3 4 5
        0 0 0 0 0
        
        fleet?
        
        10 8 0 5 3
        2 4 1 1 3
        1 1 12 7 3
        
        1 1 3 7 12
        4 2 3 1 1
        """
        fleets = 0
        curr  = 0
        for time in sorted(zip(position, speed), key = lambda x: x[0], reverse = True):
            if (target - time[0])/ time[1] > curr:
                curr = (target - time[0])/ time[1]
                fleets += 1
        return fleets
