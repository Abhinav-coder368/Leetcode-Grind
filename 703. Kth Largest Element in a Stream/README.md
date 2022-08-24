<h2><a href="https://leetcode.com/problems/kth-largest-element-in-a-stream/">703. Kth Largest Element in a Stream</a></h2><h3>Hard</h3><hr><div>

<p>Design a class to find the kth largest element in a stream. Note that it is the kth largest element in the sorted order, not the kth distinct element.

Implement KthLargest class:

- **KthLargest(int k, int[] nums) Initializes the object with the integer k and the stream of integers nums.**
- **int add(int val) Appends the integer val to the stream and returns the element representing the kth largest element in the stream.**</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong>  Input
["KthLargest", "add", "add", "add", "add", "add"]
[[3, [4, 5, 8, 2]], [3], [5], [10], [9], [4]]
<strong>Output:</strong> [null, 4, 5, 5, 8, 8]
</pre>

<p><strong>Explaination:</strong></p>

<p>KthLargest kthLargest = new KthLargest(3, [4, 5, 8, 2]);</p>
<p>kthLargest.add(3);   // return 4</p>
<p>kthLargest.add(5);   // return 5</p>
<p>kthLargest.add(10);  // return 5</p>
<p>kthLargest.add(9);   // return 8</p>
<p>kthLargest.add(4);   // return 8</p>
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>


- **1 <= k <= 104**
- **0 <= nums.length <= 104**
- **-104 <= nums[i] <= 104**
- **-104 <= val <= 104**
- **At most 104 calls will be made to add.**
- **It is guaranteed that there will be at least k elements in the array when you search for the kth element.**

</div>
