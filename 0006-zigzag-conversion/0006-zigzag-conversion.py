class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s
        row = 0
        answer = [""] * numRows
        direction = 1
        for i in range(len(s)):
            answer[row]+=s[i]
            row+=direction
            if row == -1 or row == numRows:
                direction *= -1
                row += (2*direction)
        return ''.join(answer)