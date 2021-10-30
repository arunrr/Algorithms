"""
 Linear search function searches for a given number in a given array of numbers
"""
def linear_search(arr, search_element):
    """
    :param arr[]: An array 
    :param search_element: A number that is to be searched in the array
    :type arr[]: int
    :type search_element: int
    :return: returns -1 if the element is not found 
             returns "index" of array if the element is found
    :rtype: int
    """
    length = len(arr)

    for i in range(0,length):
        if arr[i] == search_element:
            return i
    
    return -1

# Driver function
if __name__ == "__main__":
    array = [19,39,59,68,32,35,12,34]
    search_element = 12
    result = linear_search(array, search_element)

    if result == -1:
        print(f"{search_element} is not present")
    else:
        print(f"{search_element} is present in {result+1}th location")

