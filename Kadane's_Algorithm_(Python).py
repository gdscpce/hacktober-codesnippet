""" Maximum Subarray Sum """

# Function to find the maximum sum of contiguous non-empty subarray within an array A of length N.
def Max_Subarray(List: [int]) -> [int]:
    current_sum = 0     # current_sum starts from 0
    best_sum = -1e15    # best_sum starts from the least minimum number possible

    # for loop for iteratng through the elements of the array or List (Python).
    for num in List:
        current_sum = max(num, current_sum + num)   # Here we see for the maximum number between the List element and current sum
        best_sum = max(best_sum, current_sum)       # Here we see for the maximum sum between the current sum and the best sum so to get the maximum sum

    return best_sum                                 # return the maximum sum