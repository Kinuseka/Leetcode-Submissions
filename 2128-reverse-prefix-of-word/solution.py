class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        revPrefix = []
        for i in range(len(word)):
            revPrefix.append(word[i])
            if word[i] == ch:
                revPrefix = list(reversed(revPrefix))
                # print(revPrefix)
                revPrefix.extend(word[i+1:])
                break
        return ''.join(revPrefix)
