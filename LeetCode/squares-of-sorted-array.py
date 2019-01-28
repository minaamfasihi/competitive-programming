def sortedSquares(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        A[:] = [num * num for num in A]
        A.sort()
        return A
