int climbStairs(int n) {
        if(n<3) return n;
        int one=1,two=2,sum=0;
        for(int i=3;i<=n;i++)
        {
            sum = one + two;
            one = two;
            two = sum;
        }
        return sum;
    }
