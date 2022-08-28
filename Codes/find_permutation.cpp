void backtrack(vector<string> &res, string &S, int curr, int n)
    	{
    	    if(curr == n)
    	    {
    	        res.push_back(S);
    	        return;
    	    }
    	    for(int next = curr; next < n; next ++)
    	    {
    	        if(next > curr and S[next] == S[curr]) continue;
    	        swap(S[next], S[curr]);
    	        backtrack(res, S, curr + 1, n);
    	        swap(S[next], S[curr]);
    	    }
    	}
	vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> res;
		    int curr = 0;
		    int n = S.length();
		    backtrack(res, S, curr, n);
		    sort(res.begin(), res.end());
		    return res;
		}
