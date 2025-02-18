class Solution:
    def addStack(self, data):
        self.stack.append(data)
    def stackDrain(self):
        drain = list(reversed(self.stack))
        self.stack = []
        return drain

    def smallestNumber(self, pattern: str) -> str:
        self.stack = []
        final = []
        for i in range(len(pattern)+1):
            print(i)
            if (i == len(pattern) or pattern[i] == 'I'):
                if self.stack:
                    final.append(i+1)
                    final.extend(self.stackDrain())
                else:
                    final.append(i+1)
            elif pattern[i] == 'D': 
                self.addStack(i+1)
        if self.stack:
            final.extend(self.stackDrain())
        print(final)
        return ''.join(map(str, final))

