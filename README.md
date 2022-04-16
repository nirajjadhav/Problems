# Problems
Code for various problems

*Spiral Matrix*
---------------------------------------------------------------------
Given a 2D array, print it in spiral form. See the following examples.
Input:  1    2   3   4
        5    6   7   8
        9   10  11  12
        13  14  15  16
Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
Explanation: The output is matrix in spiral format. 

Input:  1   2   3   4  5   6
        7   8   9  10  11  12
        13  14  15 16  17  18
Output: 1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11
Explanation :The output is matrix in spiral format.
---------------------------------------------------------------------



*Dam of Candies*
---------------------------------------------------------------------
Currently, it has N books of different heights and unit width. Help him select 2 books such that he can store maximum candies between them by removing all the other books from between the selected books. The task is to find out the area between 2 books that can hold the maximum candies without changing the original position of selected books. 

Example 1:

Input: N = 3, height[] = {1, 3, 4}
Output: 1
Explanation:
1. Area between book of height 1 and book of 
height 3 is 0 as there is no space between 
them.
2. Area between book of height 1 and book of 
height 4 is 1 by removing book of height 3.
3. Area between book of height 3 and book of 
height 4 is 0 as there is no space between them.

Example 2:

Input: N = 6, height[] = {2, 1, 3, 4, 6, 5}
Output: 8
Explanation: We remove the 4 books in the middle 
creating length = 4 for the candy dam. Height 
for dam will be min(2,5) = 2. Area between book 
of height 2 and book of height 5 is 2 x 4 = 8.
---------------------------------------------------------------------




*Tic_Tac_Toe*
---------------------------------------------------------------------
Tic-tac-toe is a game played between two players on a 3×3 grid. In a turn, a player chooses an empty cell and places their symbol on the cell. The players take alternating turns, where the player with the first turn uses the symbol X and the other player uses the symbol O. The game continues until there is a row, column, or diagonal containing three of the same symbol (X or O), and the player with that token is declared the winner. Otherwise if every cell of the grid contains a symbol and nobody won, then the game ends and it is considered a draw.

You are given a tic-tac-toe board A after a certain number of moves, consisting of symbols O, X, and underscore(_). Underscore signifies an empty cell.

Print

1: if the position is reachable, and the game has drawn or one of the players won.
2: if the position is reachable, and the game will continue for at least one more move.
3: if the position is not reachable.
Note:

Starting from an empty board, reachable position means that the grid is possible after a finite number of moves in the game where the players may or may not be playing optimally.
The answer for each testcase should be with respect to the present position and independent of the results in the further successive moves.
Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains 3 lines of input where each line contains a string describing the state of the game in ith row.
Output
For each test case, output in a single line 1, 2 or 3 as described in the problem.

Constraints
1≤T≤39
Aij∈{X,O,_}

Sample Input
3
XOX
XXO
O_O
XXX
OOO
___
XOX
OX_
XO_
Sample Output
2
3
1
Explanation
Test Case 1: The board is reachable, and although no player can win from this position, still the game continues.

Test Case 2: There can't be multiple winners in the game.

Test Case 3: The first player is clearly a winner with one of the diagonals.
----------------------------------------------------------------------------



*Modular Equation*
---------------------------------------------------------------------------
Given integers N and M, find the number of ordered pairs (a,b) such that 1≤a<b≤N and ((M mod a) mod b)=((M mod b) mod a).

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
The only line of each test case contains two integers N, M.
Output
For each testcase, output in a single line the answer to the problem.

Constraints
1≤T≤1000
2≤N≤106
1≤M≤5⋅105
The sum of N over all test cases does not exceed 106.
Note: Multiplier for JAVA for this problem is reduced to 1.25 instead of usual 2.

Subtasks
Subtask #1 (10 points):

1≤T≤10
2≤N≤103
1≤M≤105
Subtask #2 (40 points):

1≤T≤100
2≤N≤105
1≤M≤105
The sum of N over all test cases does not exceed 106.
Subtask #3 (50 points): Original Constraints

Sample Input
3
3 5
3 6
3 10
Sample Output
2
3
2
Explanation
Test Case 1: The valid pairs are {(1,2),(1,3)}.

Test Case 2: The valid pairs are {(1,2),(1,3),(2,3)}.

Test Case 3: The valid pairs are {(1,2),(1,3)}.
--------------------------------------------------------------------


*Tom and Jerry 1*
---------------------------------------------------------------------
There is a grid of size 105×105, covered completely in railway tracks. Tom is riding in a train, currently in cell (a,b), and Jerry is tied up in a different cell (c,d), unable to move. The train has no breaks. It shall move exactly K steps, and then its fuel will run out and it shall stop. In one step, the train must move to one of its neighboring cells, sharing a side. Tom can’t move without the train, as the grid is covered in tracks. Can Tom reach Jerry’s cell after exactly K steps?

Note: Tom can go back to the same cell multiple times.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, five integers a,b,c,d,K.
Output
For each testcase, output in a single line "YES" if Tom can reach Jerry's cell in exactly K moves and "NO" if not.

You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤105
0≤a,b,c,d≤105
(a,b)≠(c,d)
1≤K≤2⋅105


Sample Input
3
1 1 2 2 2
1 1 2 3 4
1 1 1 0 3
Sample Output
YES
NO
YES
Explanation
Test Case 1: A possible sequence of moves is (1,1)→(1,2)→(2,2).

Test Case 2: There is a possible sequence in 3 moves, but not in exactly 4 moves.

Test Case 3: A possible sequence of moves is (1,1)→(1,0)→(0,0)→(1,0).

-----------------------------------------------------------------------


*Vaccine Drive*
-----------------------------------------------------------------------
Suppose the population is divided into the age groups [1,10],[11,20],[21,30],…,[91,∞). The age groups are numbered from 1 to 10 and there are Xi people in age group i.

The COVID vaccine drive has started and people will be vaccinated in the decreasing order of their age groups. Suppose P people are vaccinated per day and if less than P people are left in an age group, then the remaining doses for that day are given to the people of immediate lower age group and the process for that day continues until the vaccines for that day are finished or the entire population has been vaccinated. The selection of a person from a given age group is done randomly.

Given X, P, and Chef’s age group G, tell the minimum and the maximum number of days will it take for Chef to get vaccinated.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, twelve integers G, P, X1,X2,…,X10.
Output
For each test case, output in a single line two space-separated integers, the minimum and maximum time required for Chef to get vaccinated.

Constraints
1≤T≤104
1≤G≤10
1≤P,Xi≤105
Sample Input
3
5 2 2 2 2 2 2 2 2 2 2 2
5 2 2 2 2 2 2 3 2 2 2 2
9 4 2 2 2 2 3 2 2 2 2 2
Sample Output
6 6
6 7
1 1
Explanation
Test Case 1: It takes one day for every age group to get vaccinated.

Test Case 2: Age groups 10−7 get vaccinated in a total of 4 days. On the 5-th day, 2 out of 3 people of age group 6 get vaccinated. On the 6-th day, the last person of the 6-th age group and one random person of the 5-th age group gets vaccinated. So if the person is Chef, the minimum time required for him to get vaccinated will be 6 days, and if not, Chef will get vaccinated on the 7-th day.

Test Case 3: The last 2 age groups get vaccinated on the same day.
-------------------------------------------------------------------------


*Javelin Qualification*
-------------------------------------------------------------------------
There are N players with IDs from 1 to N, who are participating in the Javelin throw competition which has two rounds. The first is the qualification round, followed by the final round. The qualification round has gotten over, and you are given the longest distance that each of the N players has thrown as A1,A2,…,AN. Now, the selection process for the final round happens in the following two steps:

1) If the longest throw of a player in the qualification round is greater than or equal to the qualification mark of M cm, they qualify for the final round.

2) If after step 1, less than X players have qualified for the finals, the remaining spots are filled by players who have thrown the maximum distance among the players who have not qualified yet.

You are given the best throws of the N players in the qualification round A1,A2,…,AN and the integers M and X. Print the list of the players who will qualify for the finals in increasing order of their IDs.

Input Format
The first line of input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains three space-separated integers N,M,X.
The second line of each test case contains N space-separated integers A1,A2,…,AN.
Output Format
For each test case, print a single line containing K+1 space-separated integers, where K is the number of players qualified.
First, print the integer K, then followed by a space, print K space-separated integers ID1,ID2,…,IDK where IDi denotes the players' ID who qualified for the finals.
You have to print the IDs of the qualified players in increasing order.
Constraints
1≤T≤1000
2≤X≤N≤30
5000≤Ai≤8000
7000≤M≤8000
All Ai-s are distinct
Sample Input 1 
3
3 8000 2
5000 5001 5002
3 5000 2
7999 7998 8000
4 6000 3
5999 5998 6000 6001
Sample Output 1 
2 2 3
3 1 2 3
3 1 3 4
Explanation
Test Case 1: Since no player crosses the qualification mark, they are chosen based on the distance thrown. So player 3 who has thrown the maximum distance gets selected followed by the player 2. Now since we have got the required number of players, player 1 isn't selected.

Test Case 2: Since all the players cross the qualification mark, they all are selected.

Test Case 3: The player 3 and player 4 cross the qualification mark. So for the third and final spot in the final, the player 1 is selected since he has the maximum distance thrown amongst the remaining two players.
----------------------------------------------------------------------------------------------


*Chef and Bulb Invention*
----------------------------------------------------------------------------------------------
Chef is trying to invent the light bulb that can run at room temperature without electricity. So he has N gases numbered from 0 to N−1 that he can use and he doesn't know which one of the N gases will work but we do know it.

Now Chef has worked on multiple search algorithms to optimize search. For this project, he uses a modulo-based search algorithm that he invented himself. So first he chooses an integer K and selects all indices i in increasing order such that imodK=0 and test the gases on such indices, then all indices i in increasing order such that imodK=1, and test the gases on such indices, and so on.

Given N, the index of the gas p that will work, and K, find after how much time will he be able to give Chefland a new invention assuming that testing 1 gas takes 1 day.

For example, consider N=5,p=2 and K=3.

On the 1st day, Chef tests gas numbered 0 because 0mod3=0.
On the 2nd day, Chef tests gas numbered 3 because 3mod3=0.
On the 3rd day, Chef tests gas numbered 1 because 1mod3=1.
On the 4th day, Chef tests gas numbered 4 because 4mod3=1.
On the 5th day, Chef tests gas numbered 2 because 2mod3=2.
So after 5 days, Chef will be able to give Chefland a new invention

Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers N, p, and K.
Output Format
For each test case, print a single line containing one integer — after how much time Chef will be able to give Chefland a new invention assuming that testing 1 gas takes 1 day.

Constraints
1≤T≤105
1≤N,K≤109
0≤p<N
Subtasks
Subtask #1 (100 points): Original constraints

Sample Input 1 
4
10 5 5
10 6 5
10 4 5
10 8 5
Sample Output 1 
2
4
9
8
Explanation
Test case 1: On the day 1 Chef will test gas numbered 0 and on the day 2 Chef will test gas numbered 5.

Test case 2: On the day 1 Chef will test gas numbered 0, on the day 2 Chef will test gas numbered 5, on the day 3 Chef will test gas numbered 1, and on the day 4 Chef will test gas numbered 6.

Test case 3: On the day 1 Chef will test gas numbered 0, on the day 2 Chef will test gas numbered 5, on the day 3 Chef will test gas numbered 1, on the day 4 Chef will test gas numbered 6, on the day 5 Chef will test gas numbered 2, on the day 6 Chef will test gas numbered 7, on the day 7 Chef will test gas numbered 3, on the day 8 Chef will test gas numbered 8, and on the day 9 Chef will test gas numbered 4.

Test case 4: On the day 1 Chef will test gas numbered 0, on the day 2 Chef will test gas numbered 5, on the day 3 Chef will test gas numbered 1, on the day 4 Chef will test gas numbered 6, on the day 5 Chef will test gas numbered 2, on the day 6 Chef will test gas numbered 7, on the day 7 Chef will test gas numbered 3, and on the day 8 Chef will test gas numbered 8.
----------------------------------------------------------------------------------------------

Dummy edit
