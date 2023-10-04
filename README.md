# ds-algo-practices
Data Structures and Algorithms Practices in C++ 

## Abstraction in C++

    + Delivering only essential information to the outer world while masking the background details
    + It is a design and programming method that separates the interface from the implementation.
    + Real life e.g. various functiolities of AirPods but don't know the actual implementation

## Abstraction in Header file
    + Function's implementation is hidden in header files.
    + We could use the same program without knowing its inside working. 
    + E.g. Sort(), for example, is used to sort an array, a list, or a collection of items, and we know that if we give a container to sort, it will sort it, but we don't which sorting algorithm it uses to sort that container.

## Abstraction using Classes
    + Grouping data members and member functions into classes using access specifiers.
    + A class can choose which data members are visible to the outside world and which are hidden
    + Abstract class is a Class that contains at lease one pure virtual function, and threse classes cannot be instantiated.