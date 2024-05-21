# Dead-Reckoning #

With the given constraints the problem becomes a simple implementation problem , being an alternating sequence we know that the final sequence will consist of only two digits , therefore we can check for all possible combinations **(6 possible - (0,1) , (0,2) , (0,3) , (1,2) , (1,3) , (2,3) )** and check the minimum number of characters to be removed such that an alternating sequence is formed . One of the methods to find the answer is to create the sequence for a particular combiination using stack and returning *N - stack.size()* and taking the minimum answer amongst all the possible combinations . The idea is that for each sequence of a particular combination
subtracting the length of the sequence from the orginal sequence will give us the number of characters we had to exclude inorder to get the sequence . 
Check the solution for the code . 

*Time Complexity* - O(n)

*Space Complexity* - O(n)
