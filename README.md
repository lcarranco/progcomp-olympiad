<!-- TOC -->

# Table of Contents
- [Description](#description)
- [Solving Time](#solving-time)
- [Data Structure(s)](#data-structures)
- [Optimizations](#optimizations)
- [Implementation](#implementation)

<!-- /TOC -->

## Description
Determine the number of ways to choose a subset of participants that will receive the diplomas.

## Solving Time
Took me about 1.5 hours to complete which is very slow. 

## Data Structure(s)
I had to learn C++ implementation of a set. A set is a data structure that has keys and values (like a map). One difference between a set and a map is that a set does not contain duplicates.


## Optimizations
At first I wanted to find the minimum number in the set and then count all of the numbers larger than the set. Then I finally realized that all I need to do is insert all of the scores that are not zero and then find the size of the set. My program does the previous statement. Another optimization (I did not implement) is to insert all of the numbers from `cin` into my set (remember that a set does not insert duplicate values) and then insert a zero and take the size of the set minus one.

## Implementation
My program inserts the scores from cin into a set if and only if the score is not zero. Then the program returns the size of the set.