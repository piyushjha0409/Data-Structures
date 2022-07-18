class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float

        nums1 = [2,3,4,5,5]
        nums2 = [3,4,5,6,7]
        median = mid element(nums1 + nums2)

        """
        #we have to add these two list and make a new list
        myList = nums1 + nums2
        target = myList(len(myList)//2)
        print(target)
        
nums1 = [1,2,3,4]
nums2 = [4,5,6,7]

output = Solution()
output.findMedianSortedArrays(nums1, nums2)