class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        para_map = {")":"(", "]":"[", "}":"{"}
        
        for i in s:
            if i in para_map:
                if stack and stack[-1] == para_map[i]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(i)
                
        return True if not stack else False