class Solution:

    def longestCommonPrefix(self, strs: List[str]) -> str:

        tiento = strs[0]  # tiento= "bat"
        for i in range(1, len(strs)): # duyệt từ 1 đến hết mảng
            j = 0
            while j < min(len(tiento), len(strs[i])):
                if tiento[j] != strs[i][j]:
                    break
                j += 1 # xét các chữ trong các tiền tố từ 1 đến hết, nếu khác thì break
            tiento = tiento[:j]
        return tiento