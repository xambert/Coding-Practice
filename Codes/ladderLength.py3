def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        """
        
        hit
        
        1..
        """
        
        d = dict()
        q = []
        q.append(beginWord)
        d[beginWord] = 1
        if endWord not in wordList:
            return 0
        par = dict()
        wordset = set(wordList)
        n = len(beginWord)
        par[beginWord] = -1
        add = ord('a')
        while q:
            s = len(q)
            for _ in range(s):
                u = q.pop(0)
                for i in range(26):
                    for j in range(n):
                        v = u[:j] + chr(i + add) + u[j+1:]
                        if v in d:
                            continue
                        if v in wordset:
                            wordset.remove(v)
                            par[v] = u
                            d[v] = d[u] + 1
                            if v == endWord:
                                return d[v]
                            q += [v]
        return 0
