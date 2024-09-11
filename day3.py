def findDuplicate(arr):
    # Step 1: Initialize two pointers
    slow = arr[0]
    fast = arr[0]
    
    # Step 2: Move slow pointer by one step and fast pointer by two steps
    while True:
        slow = arr[slow]
        fast = arr[arr[fast]]
        if slow == fast:
            break
    
    # Step 3: Find the entry point of the cycle (duplicate number)
    slow = arr[0]
    while slow != fast:
        slow = arr[slow]
        fast = arr[fast]
    
    return slow

# Test cases
print(findDuplicate([1, 3, 4, 2, 2])) # Output: 2
print(findDuplicate([3, 1, 3, 4, 2])) # Output: 3
print(findDuplicate([1, 1]))           # Output: 1
print(findDuplicate([1, 4, 4, 2, 3]))  # Output: 4
print(findDuplicate([i for i in range(1, 100000)] + [50000])) # Output: 50000
