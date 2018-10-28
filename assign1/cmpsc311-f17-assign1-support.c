// Project Includes
#include <cmpsc311-f17-assign1-support.h>
#include <stdio.h>

//Problem 1
//function to recursively print an array
void printArray(int array[], unsigned int low, unsigned int high)
{
   printf("%d  ",array[low]);
   if(low<high)
   printArray(array,low+1,high);
}

//Problem 2
// function to reverse a string
void stringReverse(char strArray[])
{
   ///Hint Check for special conditions and be recursive
   //if pointer points to a none empty location
   if(*strArray)
   {
   //recursively move pointer to next location till reaching NULL character
   stringReverse(strArray+1);     
   printf("%c",*strArray);
   }
}

//Problem 3
// function to recursively find minimum array element
int recursiveMinimum(int array[], unsigned int low, unsigned int high)
{
    //Hint Check for special conditions and be recursive
    //if the number in current postition is smaller than the next one, replace the next number with current number
    if(array[low]<array[low+1])
    {
      array[low+1]=array[low];
    }
    //if all numbers in the array have been checked and replaced, return the last number which should be the smallest one
    if(low+1==high)
    return array[high];
    //increase index by 1
    recursiveMinimum(array, low+1, high);
}

//Problem 4
// calculate average of all response values
double mean(int answer[], int SIZE)
{  
   int sum=0;
   double mean;
   for(int i=0; i<SIZE; i++)
   {
     sum=sum+answer[i];
   }
   mean = (double)sum/(double)SIZE;
   return mean;
}

// sort an array and determine median element's value
double median(int answer[], int SIZE)
{ 
   int temp=0;
   for(int i=0;i<SIZE-1;i++)
   {
    int j=0;
    for(;j<SIZE;j++)
    {
      if(answer[j]>answer[j+1])
      {
       temp=answer[j];
       answer[j]=answer[j+1];
       answer[j+1]=temp;
      }
    }
   }
   
   
   return  answer[SIZE/2];
}


