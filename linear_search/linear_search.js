// This program uses linear search algorithm to search an element in an arrau

function linear_search(arr, search_element) {
  /*
    @param:   arr             "An array"                                   int
    @param:   search_element  "Element to be searched with"                int
    @return: -1               "If the element is not found"                int
    @return:  i               "Index of array where the element is found"  int
    */

  let arr_len = arr.length;

  for (let i = 0; i < arr_len; i++) {
    if (arr[i] === search_element) {
      return i;
    }
  }
  return -1;
}

// Driver function
const arr = [19, 39, 59, 68, 32, 35, 12, 34];
const search_item = 12;
let result = linear_search(arr, search_item);

if (result === -1) {
  console.log(`${search_item} is not found`);
} else {
  console.log(`${search_item} is found at ${result + 1}th positon`);
}
