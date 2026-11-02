class Solution:
    def reverseVowels(self, s: str) -> str:
        vowels = ['a','e','i','o','u','A','E','I','O','U']
        vowels_present = []
        s1=""

        for i in range(len(s)):
            if s[i] in vowels:
                vowels_present.append(i)
        vowels_present.reverse()
        k=0
        for j in range(len(s)):
            if s[j] in vowels:
                s1+=s[vowels_present[k]]
                k+=1
            else:
                s1+=s[j]
        return s1




        