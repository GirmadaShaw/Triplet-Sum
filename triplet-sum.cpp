/*
Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. 
If there is such a triplet present in array, then print the triplet and return true. Else return false.
Input: array = {12, 3, 4, 1, 6, 9}, sum = 24; 
Output: 12, 3, 9 
*/
#include <iostream>
#include <algorithm>


int main()
{
    //int arr[] = {2,9,4,1,6,3}, sum = 9 ;// {1,2,3,4,6,9}
    int arr[] =  {12, 3, 4, 1, 6, 9}, sum = 24; 
    int size = sizeof(arr)/sizeof(int) ; 
    int count_pairs = 0 , target , left , right ;

    std :: sort ( arr , arr + size );

    for ( int i=0 ; i<size-2 ; i++ )
    {
        target = sum - arr[i] ;
        left = i+1 , right= size-1 ;

        while ( left<right )
        {
            if ( arr[left] + arr[right] == target )
            {
                count_pairs ++ ;
                left ++ ; 
                right -- ;
            }

            else if ( arr[left] + arr[right] < sum )
                left ++ ;

            else
                right -- ;
        }
    
    }
    std :: cout << "Total Pairs: " << count_pairs ;
}