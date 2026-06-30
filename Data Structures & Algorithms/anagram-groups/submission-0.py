class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anaMap = defaultdict(list)

        for word in strs:
            key = tuple(sorted(word))
            anaMap[key].append(word)
        return list(anaMap.values())