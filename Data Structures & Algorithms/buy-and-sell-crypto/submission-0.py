class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minPrice = float('inf')
        maxPrice = 0

        for price in prices:
            if price < minPrice:
                minPrice = price
            else:
                profit = price - minPrice
                maxPrice= max(maxPrice, profit)
        return maxPrice