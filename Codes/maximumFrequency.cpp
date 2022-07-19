string maximumFrequency(string s){
        // Complete the function
        
        int i, mxfrq;
        i = 0;
        mxfrq = 0;
        string word="", ans;
        s = s + " ";
        map<string , int> mp;
        //skip ws
        while(s[i] == ' ' and s[i]!='\0') i++;
        //extract
        while(s[i]!='\0')
        {
            if(s[i]==' ' and word!="")
            {

                mp[word]++;
                //cout<<word<<" "<<mp[word]<<"\n";
                if(mp[word] > mxfrq) 
                {
                    mxfrq = mp[word];
                }
                word="";
            }
            else
                word = word + s[i];
            i++;
        }
        i = 0;
        word = "";
        while(s[i] == ' ' and s[i]!='\0') i++;
        while(s[i]!='\0')
        {
            if(s[i]==' ' and word!="")
            {
                //cout<<word<<"\n";
                if(mp[word] == mxfrq) 
                {
                    ans = word; 
                    break;
                }
                word = "";
            }
            else
                word = word + s[i];
            i++;
        }

        return ans+" "+to_string(mxfrq);
}
