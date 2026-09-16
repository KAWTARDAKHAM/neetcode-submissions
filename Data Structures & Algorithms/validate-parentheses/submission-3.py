class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        ref = ['}',']',')']
        r = {'}': '{',
            ']': '[',
            ')': '('}
        for char in s:
            if char not in ref:
                st.append(char)
            else:
                if(not st or st.pop() != r[char]):
                    return False
        return len(st) == 0






        