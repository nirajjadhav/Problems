># `Find the Town Judge`
In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.

If the town judge exists, then:

The town judge trusts nobody.
Everybody (except for the town judge) trusts the town judge.
There is exactly one person that satisfies properties 1 and 2.
You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi.

Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.

 

Example 1:

Input: n = 2, trust = [[1,2]]
Output: 2
Example 2:

Input: n = 3, trust = [[1,3],[2,3]]
Output: 3
Example 3:

Input: n = 3, trust = [[1,3],[2,3],[3,1]]
Output: -1
 

Constraints:

1 <= n <= 1000
0 <= trust.length <= 104
trust[i].length == 2
All the pairs of trust are unique.
ai != bi
1 <= ai, bi <= n

Tag: Easy
[Problem link](https://leetcode.com/problems/find-the-town-judge/) 


># `Valid Parentheses`
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.

Tag: Easy
[Problem link](https://leetcode.com/problems/valid-parentheses/) 


># `Search Insert Position`
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104

Tag: Easy
[Problem link](https://leetcode.com/problems/search-insert-position/)


># `Remove Duplicates from Sorted Array`
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

 

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:

0 <= nums.length <= 3 * 104
-100 <= nums[i] <= 100
nums is sorted in non-decreasing order.

Tag: Easy
[Problem link](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)



># `Count total set bits`
You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

Example 1:

Input: N = 4
Output: 5
Explanation:
For numbers from 1 to 4.
For 1: 0 0 1 = 1 set bits
For 2: 0 1 0 = 1 set bits
For 3: 0 1 1 = 2 set bits
For 4: 1 0 0 = 1 set bits
Therefore, the total set bits is 5.
Example 2:

Input: N = 17
Output: 35
Explanation: From numbers 1 to 17(both inclusive), 
the total number of set bits is 35.

Your Task: The task is to complete the function countSetBits() that takes n as a parameter and returns the count of all bits.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 108

Tag: Medium
[Problem link](https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/0/?track=DSASP-BitMagic&batchId=154#)


># `Check whether K-th bit is set or not `
Given a number N and a bit number K, check if Kth bit of N is set or not. A bit is called set if it is 1. Position of set bit '1' should be indexed starting with 0 from LSB side in binary representation of the number.

Example 1:

Input: N = 4, K = 0
Output: No
Explanation: Binary representation of 4 is 100, 
in which 0th bit from LSB is not set. 
So, return false.
Example 2:

Input: N = 4, K = 2
Output: Yes
Explanation: Binary representation of 4 is 100, 
in which 2nd bit from LSB is set. 
So, return true.
Example 3:

Input: N = 500, K = 3
Output: No
Explanation: Binary representation of 500 is 
111110100, in which 3rd bit from LSB is not set. 
So, return false.

Your task:
You don't have to read input or print anything. Your task is to complete the function checkKthbit that takes n and k as parameters and returns either true (if kth bit is set) or false(if kth bit is not set).

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 109
0 ≤ K ≤ floor(log2(N) + 1)


Tag: Easy
[Problem link](https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/0/?track=DSASP-BitMagic&batchId=154#)


># `Binary To Gray Code equivalent`
You are given a decimal number N. You need to find the gray code of the number N and convert it into decimal.
To see how it's done, refer here.

Example 1:

Input: N = 7
Output: 4
Explanation: 7 is represented as 111 in 
binary form. The gray code of 111 is 100, 
in the binary form whose decimal equivalent 
is 4.
Example 2:

Input: N = 10
Output: 15
Explanation: 10 is represented as 1010 in 
binary form. The gray code of 1010 is 1111, 
in the binary form whose decimal equivalent 
is 15.
Example 3:

Input: N = 0
Output: 0
Explanation: Zero is represented as zero 
in binary, gray, and decimal.

Your Task: The task is to complete the function greyConverter() which takes n as a parameter and returns it's equivalent gray code.

Expected Time Complexity: O(1).
Expected Auxiliary Space: O(1).


Tag: Easy
[Problem link](https://practice.geeksforgeeks.org/problems/gray-code-1587115620/0/?track=DSASP-BitMagic&batchId=154#)


># ` Power of 2 `
Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.

Example 1:

Input: N = 1
Output: YES
Explanation:1 is equal to 2 
raised to 0 (20 = 1).
Example 2:

Input: N = 98
Output: NO
Explanation: 98 cannot be obtained
by any power of 2.

Your Task:Your task is to complete the function isPowerofTwo() which takes n as a parameter and returns true or false by checking if the given number can be represented as a power of two or not.

Expected Time Complexity:O(log N).
Expected Auxiliary Space:O(1).

Constraints:
0 ≤N ≤1018

Tag: Easy, Adobe
[Problem link](https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/0/?track=DSASP-BitMagic&batchId=154#)


># ` Swap all odd and even bits`
Given an unsigned integer N. The task is to swap all odd bits with even bits. For example, if the given number is 23 (00010111), it should be converted to 43(00101011). Here, every even position bit is swapped with adjacent bit on the right side(even position bits are highlighted in the binary representation of 23), and every odd position bit is swapped with an adjacent on the left side.

Example 1:

Input: N = 23
Output: 43
Explanation: 
Binary representation of the given number 
is 00010111 after swapping 
00101011 = 43 in decimal.
Example 2:

Input: N = 2
Output: 1
Explanation: 
Binary representation of the given number 
is 10 after swapping 01 = 1 in decimal.

Your Task: Your task is to complete the function swapBits() which takes an integer and returns an integer with all the odd and even bits swapped.


Expected Time Complexity: O(1).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 109

Tag: Easy
[Problem link](https://practice.geeksforgeeks.org/problems/swap-all-odd-and-even-bits-1587115621/0/?track=DSASP-BitMagic&batchId=154#)


># `Maximum AND Value `
Given an array arr[] of N positive elements. The task is to find the Maximum AND Value generated by any pair(arri, arrj) from the array such that i != j.
Note: AND is bitwise '&' operator.


Example 1:

Input: 
N = 4
arr[] = {4, 8, 12, 16}
Output: 8
Explanation:
Pair (8,12) has the Maximum AND Value 8.
Example 2:

Input:
N = 4
arr[] = {4, 8, 16, 2}
Output: 0
Explanation: Any two pairs of the array has 
Maximum AND Value 0.

Your Task: 
You don't need to read input or print anything. Your task is to complete the function maxAND() which takes the array elements and N (size of the array) as input parameters and returns the maximum AND value generated by any pair in the array. 

Expected Time Complexity: O(N * log M), where M is the maximum element of the array.
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 105
1 <= arr[i] <= 105

Tag: Medium, Microsoft
[Problem link](https://practice.geeksforgeeks.org/problems/maximum-and-value-1587115620/0/?track=DSASP-BitMagic&batchId=154#)

># `Speed Typing`
Barbara is a speed typer. In order to check her typing speed, she performs a speed test. She is given a string I that she is supposed to type.

While Barbara is typing, she may make some mistakes, such as pressing the wrong key. As her typing speed is important to her, she does not want to spend additional time correcting the mistakes, so she continues to type with the errors until she finishes the speed test. After she finishes the speed test, she produces a P.

Now she wonders how many extra letters she needs to delete in order to get I from P. It is possible that Barbara made a mistake and P cannot be converted back to I just by deleting some letters. In particular, it is possible that Barbara missed some letters.

Help Barbara find out how many extra letters she needs to remove in order to obtain I or if I cannot be obtained from P by removing letters then output IMPOSSIBLE.

Input
The first line of the input gives the number of test cases, T. T test cases follow.

Each test case has 2 lines. The first line of each test case is an input string I (that denotes the string that the typing test has provided). The next line is the produced string P (that Barbara has entered).

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of extra letters that need to be removed in order to obtain I. If it is not possible to obtain I then output IMPOSSIBLE as y.

Limits
Memory limit: 1 GB.
1≤T≤100.
Both the strings contain letters from a-z and A-Z.
Length of the given strings will be 1≤|I|,|P|≤105.
Test Set 1
Time limit: 20 seconds.
All letters in I are the same.

Test Set 2
Time limit: 40 seconds.
Sample
Note: there are additional samples that are not run on submissions down below.
Sample Input
save_alt
content_copy
2
aaaa
aaaaa
bbbbb
bbbbc
Sample Output
save_alt
content_copy
Case #1: 1
Case #2: IMPOSSIBLE
In the first test case, P contains one extra a, so she needs to remove 1 extra letter in order to obtain I.
In the second test case, Barbara typed only 4 letters b, while I consists of 5 letters b so the answer is IMPOSSIBLE.


Additional Sample - Test Set 2
The following additional sample fits the limits of Test Set 2. It will not be run against your submitted solutions.
Sample Input
save_alt
content_copy
2
Ilovecoding
IIllovecoding
KickstartIsFun
kkickstartiisfun
Sample Output
save_alt
content_copy
Case #1: 2
Case #2: IMPOSSIBLE
In the first test case, P has 2 extra letters, I and l. The other letters are in the order given in I. So she needs to remove 2 letters in order to obtain I.
In the second test case, there is no letter K in P so the answer is IMPOSSIBLE.

Tag: Easy, Google
[Problem link](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb33e/00000000009e7021)


># `Grid Path`
Nutan was given a grid of size N×M. The rows are numbered from 1 to N, and the columns from 1 to M. Each cell of the grid has a value assigned to it; the value of cell (i, j) is Aij. He will perform the following operation any number of times (possibly zero):

He will select any path starting from (1,1) and ending at (N, M), such that if the path visits (i, j), then the next cell visited must be (i + 1, j) or (i, j + 1). Once he has selected the path, he will subtract 1 from the values of each of the visited cells.

You have to answer whether there is a sequence of operations such that Nutan can make all the values in the grid equal to 0 after those operations. If there exists such a sequence, print "YES", otherwise print "NO".
Input
The first line of the input contains a single integer T (1 ≤ T ≤ 10) — the number of test cases. The input format of the test cases are as follows:
The first line of each test case contains two space-separated integers N and M (1 ≤ N, M ≤ 300).
Then N lines follow, the ith line containing M space-separated integers Ai1, Ai2, ... AiM (0 ≤ Aij ≤ 109).
Output
Output T lines — the ith line containing a single string, either "YES" or "NO" (without the quotes), denoting the output of the ith test case. Note that the output is case sensitive.
Example
Sample Input:
3
1 1
10000
2 2
3 2
1 3
1 2
1 2

Sample Output:
YES
YES
NO

Tag: Hard
[Problem link](https://my.newtonschool.co/playground/code/uipo9hkq4p4n/)


># `Length of Last Words`

Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

 

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
 

Constraints:

1 <= s.length <= 104
s consists of only English letters and spaces ' '.
There will be at least one word in s.


Tag: Easy
[Problem link](https://leetcode.com/problems/length-of-last-word/)


># `Longest Substring Without Repeating Characters`

Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.

Tag: Medium
[Problem link](https://leetcode.com/problems/longest-substring-without-repeating-characters/)