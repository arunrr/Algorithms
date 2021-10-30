#include<iostream>

using namespace std;

// This function performs linear search based on the given input
/* Parameters:
   arr[] -> array of type int
   arr_length -> the length of the array
   search_item -> the number to be searched
*/
// This function returns an integer value
// -1 if search item not found
// index of the array where the search item is found
int linear_search(int arr[], int arr_length, int search_item){

  for(int i = 0; i <= arr_length; i++){
    if(arr[i] == search_item)
      return i;
  }
  return -1;

}
// Driver function
int main(){
  
  // declare an array
  int arr[] = {19,39,59,68,32,35,12,34};
  // find array length
  int arr_len = sizeof(arr)/sizeof(arr[0]);
  // get a number to search
  int search_element = 12;

  int result = linear_search(arr, arr_len, search_element);

  if(result == -1)
    cout << search_element << " is not found in the array"; 
  else
    cout << search_element <<" is found at " <<  result + 1 << "th position in the array" ; 

  return 0;

}
