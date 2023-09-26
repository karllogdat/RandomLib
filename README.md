# Random Library

A random collection of functions and utilities I may or may not use one day. 

## Functions

### Split

#### Parameters
1. `std::string arg` is the string you want to split.
2. `int num` is the size of the array returned by the function.

#### Use
```cpp
std::string* numString = new std::string[4];
numString = Split("one two three four", 4);

for (int i = 0; i < 4; i++) {
    std::cout << numString[i] << std::endl;
}
```

Output:

```
one
two
three
four
```

