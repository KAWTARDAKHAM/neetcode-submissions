class Solution:
    def isPalindrome(self, s: str) -> bool:
        right = 0
        left = len(s) - 1
        while(right < left):
            while(right < left and not s[right].isalnum()) :
                right += 1
            while(right < left and not s[left].isalnum()) :
                left -=1  
            if(s[right].lower() == s[left].lower()):
                right +=1
                left -=1
            elif (right > left):
                return True
            else:
                return False

        return True

        