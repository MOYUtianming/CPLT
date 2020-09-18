>the Protocol for Coding Pseudo Code.

# the general Protocol

1. Same indentation means same block.
2. while for and repeat-until sentence have the same meaning with those corresponding conception in C/C++,Python or Java.
    1. for "for" sentence,the general structure is here:
        >for flag = < S-num > to/downto < E-num > by < step-length >  
        >>    < the loop sentences >  
        
        >1. downto operator is used to explain the decrease process.
        >2. the flag hold it's value after the loop.
3. // head means comments.
4. the sentence like j=i=e means multiple assignment(do i=e first then do j=i)
5. variables are limited to it's corresponding block.
6. the element of array is used by type:<arrayName>[serialNumber] (Tip : the serial number is starting from 1)
   >e.g. A[2] refer to the second element in A
7. the multiple data is structured to be "Object" , and "Object" is composed by "attributes".
    1. if we want to use an Object , just use it's name;
    2. if we want to use an attribute of an Object , just use "ObjectName.AttributeName" structure.
8. the name of an array or an object is treated as a point towards their data.
    1. it means in operation "y=x", y.f is changed by x.f too , in other words , after this assignment , y and x towards same data block.
9. the dot mark "." can be used consequently , it means the sentence "y.j.k" is legal.
10. when a point don't toward to any realized data , it should be assigned by "NIL".
11. the method of transferring data to a function is "Value transformation" , it means the function get a copy of the input variable , not use the variable itself.
12. 
