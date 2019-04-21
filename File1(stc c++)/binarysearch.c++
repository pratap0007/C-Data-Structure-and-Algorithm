binary_search(a,a+n,elemrnt)
sort(starting address,ending address) // for sorting togiven vector
reverse(firsr_iterator,last _iterator) // to reverse a vector
*max_element(1st iterator,last iterator) - to find maximum element of a vector
*min_element(firstiterator,lastiterator) 
accumulate(first_iterator,last_iterator,initial value of sum)
does the summation of vector element
#include<numeric>// for accumulate operaztion

/// converting array into vector 
int a[10]={,,,,};
vector<int> v(a,a+10);
///////
count(first_iterator,last_iterator,x) -- for counting occurence of x in vector

lower_bound(1st iterator,last iterator,x)  -ist occurance of x in vector
upper_bound(1st,lst)  -- last occurance of x in vector

