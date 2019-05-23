long long binarySearch(long long arr[], long long l, long long r, long long v) 
{ 
    if (r >= l) { 
        long long mid = l + (r - l) / 2; 
        if (arr[mid] == v) 
            return mid; 
 
        if (arr[mid] > v) 
            return binarySearch(arr, l, mid - 1, v); 
  
        return binarySearch(arr, mid + 1, r, v); 
    } 
    return -1; 
} 
