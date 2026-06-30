class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        pMap = {")" : "(", "]":"[", "}": "{"}
        for char in s:
            if char in pMap:
                top = stack.pop() if stack else "#"
                if pMap[char] != top:
                    return False
            else:
                stack.append(char)
        return not stack
