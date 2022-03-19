
If you know how to use CMake then I am including the CMakeLists.txt file just use that otherwise

The main function is in the main.cpp file

so you can compile using
clang++ --std=c++11 *.cpp
And, then you can run it by
./a.out




Output for all the different version of the program
________________________________________________________________________________________________________________________

The version selected is: 1
TIME: 1, Foodorder: 1 arrives -> Expiry: 10 - Meal: Pizza - Ingredients: 3 - prepTime: 9 - Price: $15.99
TIME: 1, Foodorder: 1 is getting prepared by the chef!
TIME: 5, Foodorder: 2 arrives -> Expiry: 20 - Meal: Stew - Ingredients: 4 - prepTime: 11 - Price: $18.99
TIME: 10, Foodorder: 1 has been served! Revenue grew by: $15.99
TIME: 10, Foodorder: 2 is getting prepared by the chef!
TIME: 10, Foodorder: 3 arrives -> Expiry: 30 - Meal: Burger - Ingredients: 4 - prepTime: 8 - Price: $12.99
TIME: 21, Foodorder: 2 has been served! Revenue grew by: $18.99
TIME: 21, Foodorder: 3 is getting prepared by the chef!
TIME: 29, Foodorder: 3 has been served! Revenue grew by: $12.99
TIME: 50, Foodorder: 4 arrives -> Expiry: 60 - Meal: Pizza - Ingredients: 6 - prepTime: 12 - Price: $18.99
TIME: 50, Foodorder: 4 is getting prepared by the chef!
TIME: 60, Foodorder: 5 arrives -> Expiry: 75 - Meal: Stew - Ingredients: 7 - prepTime: 14 - Price: $21.99
TIME: 62, Foodorder: 4 has been served! Revenue grew by: $18.99
TIME: 62, Foodorder: 5 is getting prepared by the chef!
TIME: 76, Foodorder: 5 has been served! Revenue grew by: $21.99
TIME: 100, Foodorder: 6 arrives -> Expiry: 125 - Meal: Salad - Ingredients: 4 - prepTime: 7 - Price: $10.99
TIME: 100, Foodorder: 6 is getting prepared by the chef!
TIME: 105, Foodorder: 7 arrives -> Expiry: 150 - Meal: Stew - Ingredients: 1 - prepTime: 8 - Price: $15.99
TIME: 105, Foodorder: 8 arrives -> Expiry: 150 - Meal: Burger - Ingredients: 1 - prepTime: 5 - Price: $9.99
TIME: 105, Foodorder: 9 arrives -> Expiry: 150 - Meal: Stew - Ingredients: 4 - prepTime: 11 - Price: $18.99
TIME: 105, Foodorder: 10 arrives -> Expiry: 150 - Meal: Salad - Ingredients: 3 - prepTime: 6 - Price: $9.99
TIME: 105, Foodorder: 11 arrives -> Expiry: 150 - Meal: Pizza - Ingredients: 3 - prepTime: 9 - Price: $15.99
TIME: 105, Foodorder: 12 arrives -> Expiry: 150 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 105, Foodorder: 13 arrives -> Expiry: 150 - Meal: Burger - Ingredients: 4 - prepTime: 8 - Price: $12.99
TIME: 105, Foodorder: 14 arrives -> Expiry: 150 - Meal: Pizza - Ingredients: 4 - prepTime: 10 - Price: $16.99
TIME: 105, Foodorder: 15 arrives -> Expiry: 150 - Meal: Pizza - Ingredients: 7 - prepTime: 13 - Price: $19.99
TIME: 105, Foodorder: 16 arrives -> Expiry: 150 - Meal: Stew - Ingredients: 3 - prepTime: 10 - Price: $17.99
TIME: 105, Foodorder: 17 arrives -> Expiry: 150 - Meal: Stew - Ingredients: 5 - prepTime: 12 - Price: $19.99
TIME: 105, Foodorder: 18 arrives -> Expiry: 150 - Meal: Salad - Ingredients: 1 - prepTime: 4 - Price: $7.99
TIME: 105, Foodorder: 19 arrives -> Expiry: 150 - Meal: Burger - Ingredients: 1 - prepTime: 5 - Price: $9.99
TIME: 107, Foodorder: 6 has been served! Revenue grew by: $10.99
TIME: 107, Foodorder: 7 is getting prepared by the chef!
TIME: 115, Foodorder: 7 has been served! Revenue grew by: $15.99
TIME: 115, Foodorder: 8 is getting prepared by the chef!
TIME: 120, Foodorder: 8 has been served! Revenue grew by: $9.99
TIME: 120, Foodorder: 9 is getting prepared by the chef!
TIME: 131, Foodorder: 9 has been served! Revenue grew by: $18.99
TIME: 131, Foodorder: 10 is getting prepared by the chef!
TIME: 137, Foodorder: 10 has been served! Revenue grew by: $9.99
TIME: 137, Foodorder: 11 is getting prepared by the chef!
TIME: 146, Foodorder: 11 has been served! Revenue grew by: $15.99
TIME: 146, Foodorder: 12 is getting prepared by the chef!
TIME: 152, Foodorder: 12 has been served! Revenue grew by: $10.99
TIME: 500, Foodorder: 20 arrives -> Expiry: 520 - Meal: Burger - Ingredients: 1 - prepTime: 5 - Price: $9.99
TIME: 500, Foodorder: 20 is getting prepared by the chef!
TIME: 505, Foodorder: 20 has been served! Revenue grew by: $9.99
TIME: 505, Foodorder: 21 arrives -> Expiry: 525 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 505, Foodorder: 21 is getting prepared by the chef!
TIME: 510, Foodorder: 22 arrives -> Expiry: 520 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 511, Foodorder: 21 has been served! Revenue grew by: $10.99
TIME: 511, Foodorder: 22 is getting prepared by the chef!
TIME: 511, Foodorder: 23 arrives -> Expiry: 525 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 515, Foodorder: 24 arrives -> Expiry: 529 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 517, Foodorder: 22 has been served! Revenue grew by: $10.99
TIME: 517, Foodorder: 23 is getting prepared by the chef!
TIME: 520, Foodorder: 25 arrives -> Expiry: 535 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 521, Foodorder: 26 arrives -> Expiry: 536 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 522, Foodorder: 27 arrives -> Expiry: 538 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 523, Foodorder: 23 has been served! Revenue grew by: $10.99
TIME: 523, Foodorder: 24 is getting prepared by the chef!
TIME: 524, Foodorder: 28 arrives -> Expiry: 540 - Meal: Burger - Ingredients: 4 - prepTime: 8 - Price: $12.99
TIME: 525, Foodorder: 29 arrives -> Expiry: 550 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 529, Foodorder: 24 has been served! Revenue grew by: $10.99
TIME: 529, Foodorder: 25 is getting prepared by the chef!
TIME: 535, Foodorder: 25 has been served! Revenue grew by: $10.99
TIME: 535, Foodorder: 26 is getting prepared by the chef!
TIME: 541, Foodorder: 26 has been served! Revenue grew by: $10.99
TIME: 541, Foodorder: 29 is getting prepared by the chef!
TIME: 547, Foodorder: 29 has been served! Revenue grew by: $10.99
TIME: 700, Foodorder: 30 arrives -> Expiry: 730 - Meal: Pizza - Ingredients: 3 - prepTime: 9 - Price: $15.99
TIME: 700, Foodorder: 30 is getting prepared by the chef!
TIME: 701, Foodorder: 31 arrives -> Expiry: 750 - Meal: Pizza - Ingredients: 1 - prepTime: 7 - Price: $13.99
TIME: 702, Foodorder: 32 arrives -> Expiry: 730 - Meal: Pizza - Ingredients: 1 - prepTime: 7 - Price: $13.99
TIME: 703, Foodorder: 33 arrives -> Expiry: 740 - Meal: Pizza - Ingredients: 2 - prepTime: 8 - Price: $14.99
TIME: 704, Foodorder: 34 arrives -> Expiry: 755 - Meal: Pizza - Ingredients: 3 - prepTime: 9 - Price: $15.99
TIME: 705, Foodorder: 35 arrives -> Expiry: 740 - Meal: Pizza - Ingredients: 10 - prepTime: 16 - Price: $22.99
TIME: 706, Foodorder: 36 arrives -> Expiry: 740 - Meal: Pizza - Ingredients: 1 - prepTime: 7 - Price: $13.99
TIME: 707, Foodorder: 37 arrives -> Expiry: 740 - Meal: Pizza - Ingredients: 1 - prepTime: 7 - Price: $13.99
TIME: 709, Foodorder: 30 has been served! Revenue grew by: $15.99
TIME: 709, Foodorder: 31 is getting prepared by the chef!
TIME: 716, Foodorder: 31 has been served! Revenue grew by: $13.99
TIME: 716, Foodorder: 32 is getting prepared by the chef!
TIME: 723, Foodorder: 32 has been served! Revenue grew by: $13.99
TIME: 723, Foodorder: 33 is getting prepared by the chef!
TIME: 731, Foodorder: 33 has been served! Revenue grew by: $14.99
TIME: 731, Foodorder: 34 is getting prepared by the chef!
TIME: 740, Foodorder: 34 has been served! Revenue grew by: $15.99
TIME: 740, Foodorder: 35 is getting prepared by the chef!
TIME: 756, Foodorder: 35 has been served! Revenue grew by: $22.99
... simulation ended.
- Total number of orders completed: 26
- Total revenue: $366.74

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

The version selected is: 2
TIME: 1, Foodorder: 1 arrives -> Expiry: 10 - Meal: Pizza - Ingredients: 3 - prepTime: 9 - Price: $15.99
TIME: 1, Foodorder: 1 is getting prepared by the chef!
TIME: 5, Foodorder: 2 arrives -> Expiry: 20 - Meal: Stew - Ingredients: 4 - prepTime: 11 - Price: $18.99
TIME: 10, Foodorder: 1 has been served! Revenue grew by: $15.99
TIME: 10, Foodorder: 2 is getting prepared by the chef!
TIME: 10, Foodorder: 3 arrives -> Expiry: 30 - Meal: Burger - Ingredients: 4 - prepTime: 8 - Price: $12.99
TIME: 21, Foodorder: 2 has been served! Revenue grew by: $18.99
TIME: 21, Foodorder: 3 is getting prepared by the chef!
TIME: 29, Foodorder: 3 has been served! Revenue grew by: $12.99
TIME: 50, Foodorder: 4 arrives -> Expiry: 60 - Meal: Pizza - Ingredients: 6 - prepTime: 12 - Price: $18.99
TIME: 50, Foodorder: 4 is getting prepared by the chef!
TIME: 60, Foodorder: 5 arrives -> Expiry: 75 - Meal: Stew - Ingredients: 7 - prepTime: 14 - Price: $21.99
TIME: 62, Foodorder: 4 has been served! Revenue grew by: $18.99
TIME: 62, Foodorder: 5 is getting prepared by the chef!
TIME: 76, Foodorder: 5 has been served! Revenue grew by: $21.99
TIME: 100, Foodorder: 6 arrives -> Expiry: 125 - Meal: Salad - Ingredients: 4 - prepTime: 7 - Price: $10.99
TIME: 100, Foodorder: 6 is getting prepared by the chef!
TIME: 105, Foodorder: 7 arrives -> Expiry: 150 - Meal: Stew - Ingredients: 1 - prepTime: 8 - Price: $15.99
TIME: 105, Foodorder: 8 arrives -> Expiry: 150 - Meal: Burger - Ingredients: 1 - prepTime: 5 - Price: $9.99
TIME: 105, Foodorder: 9 arrives -> Expiry: 150 - Meal: Stew - Ingredients: 4 - prepTime: 11 - Price: $18.99
TIME: 105, Foodorder: 10 arrives -> Expiry: 150 - Meal: Salad - Ingredients: 3 - prepTime: 6 - Price: $9.99
TIME: 105, Foodorder: 11 arrives -> Expiry: 150 - Meal: Pizza - Ingredients: 3 - prepTime: 9 - Price: $15.99
TIME: 105, Foodorder: 12 arrives -> Expiry: 150 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 105, Foodorder: 13 arrives -> Expiry: 150 - Meal: Burger - Ingredients: 4 - prepTime: 8 - Price: $12.99
TIME: 105, Foodorder: 14 arrives -> Expiry: 150 - Meal: Pizza - Ingredients: 4 - prepTime: 10 - Price: $16.99
TIME: 105, Foodorder: 15 arrives -> Expiry: 150 - Meal: Pizza - Ingredients: 7 - prepTime: 13 - Price: $19.99
TIME: 105, Foodorder: 16 arrives -> Expiry: 150 - Meal: Stew - Ingredients: 3 - prepTime: 10 - Price: $17.99
TIME: 105, Foodorder: 17 arrives -> Expiry: 150 - Meal: Stew - Ingredients: 5 - prepTime: 12 - Price: $19.99
TIME: 105, Foodorder: 18 arrives -> Expiry: 150 - Meal: Salad - Ingredients: 1 - prepTime: 4 - Price: $7.99
TIME: 105, Foodorder: 19 arrives -> Expiry: 150 - Meal: Burger - Ingredients: 1 - prepTime: 5 - Price: $9.99
TIME: 107, Foodorder: 6 has been served! Revenue grew by: $10.99
TIME: 107, Foodorder: 19 is getting prepared by the chef!
TIME: 112, Foodorder: 19 has been served! Revenue grew by: $9.99
TIME: 112, Foodorder: 18 is getting prepared by the chef!
TIME: 116, Foodorder: 18 has been served! Revenue grew by: $7.99
TIME: 116, Foodorder: 17 is getting prepared by the chef!
TIME: 128, Foodorder: 17 has been served! Revenue grew by: $19.99
TIME: 128, Foodorder: 16 is getting prepared by the chef!
TIME: 138, Foodorder: 16 has been served! Revenue grew by: $17.99
TIME: 138, Foodorder: 15 is getting prepared by the chef!
TIME: 151, Foodorder: 15 has been served! Revenue grew by: $19.99
TIME: 500, Foodorder: 20 arrives -> Expiry: 520 - Meal: Burger - Ingredients: 1 - prepTime: 5 - Price: $9.99
TIME: 500, Foodorder: 20 is getting prepared by the chef!
TIME: 505, Foodorder: 20 has been served! Revenue grew by: $9.99
TIME: 505, Foodorder: 21 arrives -> Expiry: 525 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 505, Foodorder: 21 is getting prepared by the chef!
TIME: 510, Foodorder: 22 arrives -> Expiry: 520 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 511, Foodorder: 21 has been served! Revenue grew by: $10.99
TIME: 511, Foodorder: 22 is getting prepared by the chef!
TIME: 511, Foodorder: 23 arrives -> Expiry: 525 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 515, Foodorder: 24 arrives -> Expiry: 529 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 517, Foodorder: 22 has been served! Revenue grew by: $10.99
TIME: 517, Foodorder: 24 is getting prepared by the chef!
TIME: 520, Foodorder: 25 arrives -> Expiry: 535 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 521, Foodorder: 26 arrives -> Expiry: 536 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 522, Foodorder: 27 arrives -> Expiry: 538 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 523, Foodorder: 24 has been served! Revenue grew by: $10.99
TIME: 523, Foodorder: 27 is getting prepared by the chef!
TIME: 524, Foodorder: 28 arrives -> Expiry: 540 - Meal: Burger - Ingredients: 4 - prepTime: 8 - Price: $12.99
TIME: 525, Foodorder: 29 arrives -> Expiry: 550 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 529, Foodorder: 27 has been served! Revenue grew by: $10.99
TIME: 529, Foodorder: 29 is getting prepared by the chef!
TIME: 535, Foodorder: 29 has been served! Revenue grew by: $10.99
TIME: 535, Foodorder: 28 is getting prepared by the chef!
TIME: 543, Foodorder: 28 has been served! Revenue grew by: $12.99
TIME: 700, Foodorder: 30 arrives -> Expiry: 730 - Meal: Pizza - Ingredients: 3 - prepTime: 9 - Price: $15.99
TIME: 700, Foodorder: 30 is getting prepared by the chef!
TIME: 701, Foodorder: 31 arrives -> Expiry: 750 - Meal: Pizza - Ingredients: 1 - prepTime: 7 - Price: $13.99
TIME: 702, Foodorder: 32 arrives -> Expiry: 730 - Meal: Pizza - Ingredients: 1 - prepTime: 7 - Price: $13.99
TIME: 703, Foodorder: 33 arrives -> Expiry: 740 - Meal: Pizza - Ingredients: 2 - prepTime: 8 - Price: $14.99
TIME: 704, Foodorder: 34 arrives -> Expiry: 755 - Meal: Pizza - Ingredients: 3 - prepTime: 9 - Price: $15.99
TIME: 705, Foodorder: 35 arrives -> Expiry: 740 - Meal: Pizza - Ingredients: 10 - prepTime: 16 - Price: $22.99
TIME: 706, Foodorder: 36 arrives -> Expiry: 740 - Meal: Pizza - Ingredients: 1 - prepTime: 7 - Price: $13.99
TIME: 707, Foodorder: 37 arrives -> Expiry: 740 - Meal: Pizza - Ingredients: 1 - prepTime: 7 - Price: $13.99
TIME: 709, Foodorder: 30 has been served! Revenue grew by: $15.99
TIME: 709, Foodorder: 37 is getting prepared by the chef!
TIME: 716, Foodorder: 37 has been served! Revenue grew by: $13.99
TIME: 716, Foodorder: 36 is getting prepared by the chef!
TIME: 723, Foodorder: 36 has been served! Revenue grew by: $13.99
TIME: 723, Foodorder: 35 is getting prepared by the chef!
TIME: 739, Foodorder: 35 has been served! Revenue grew by: $22.99
TIME: 739, Foodorder: 34 is getting prepared by the chef!
TIME: 748, Foodorder: 34 has been served! Revenue grew by: $15.99
TIME: 748, Foodorder: 31 is getting prepared by the chef!
TIME: 755, Foodorder: 31 has been served! Revenue grew by: $13.99
... simulation ended.
- Total number of orders completed: 24
- Total revenue: $350.76

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


The version selected is: 3
TIME: 1, Foodorder: 1 arrives -> Expiry: 10 - Meal: Pizza - Ingredients: 3 - prepTime: 9 - Price: $15.99
TIME: 1, Foodorder: 1 is getting prepared by the chef!
TIME: 5, Foodorder: 2 arrives -> Expiry: 20 - Meal: Stew - Ingredients: 4 - prepTime: 11 - Price: $18.99
TIME: 10, Foodorder: 1 has been served! Revenue grew by: $15.99
TIME: 10, Foodorder: 2 is getting prepared by the chef!
TIME: 10, Foodorder: 3 arrives -> Expiry: 30 - Meal: Burger - Ingredients: 4 - prepTime: 8 - Price: $12.99
TIME: 21, Foodorder: 2 has been served! Revenue grew by: $18.99
TIME: 21, Foodorder: 3 is getting prepared by the chef!
TIME: 29, Foodorder: 3 has been served! Revenue grew by: $12.99
TIME: 50, Foodorder: 4 arrives -> Expiry: 60 - Meal: Pizza - Ingredients: 6 - prepTime: 12 - Price: $18.99
TIME: 50, Foodorder: 4 is getting prepared by the chef!
TIME: 60, Foodorder: 5 arrives -> Expiry: 75 - Meal: Stew - Ingredients: 7 - prepTime: 14 - Price: $21.99
TIME: 62, Foodorder: 4 has been served! Revenue grew by: $18.99
TIME: 62, Foodorder: 5 is getting prepared by the chef!
TIME: 76, Foodorder: 5 has been served! Revenue grew by: $21.99
TIME: 100, Foodorder: 6 arrives -> Expiry: 125 - Meal: Salad - Ingredients: 4 - prepTime: 7 - Price: $10.99
TIME: 100, Foodorder: 6 is getting prepared by the chef!
TIME: 105, Foodorder: 7 arrives -> Expiry: 150 - Meal: Stew - Ingredients: 1 - prepTime: 8 - Price: $15.99
TIME: 105, Foodorder: 8 arrives -> Expiry: 150 - Meal: Burger - Ingredients: 1 - prepTime: 5 - Price: $9.99
TIME: 105, Foodorder: 9 arrives -> Expiry: 150 - Meal: Stew - Ingredients: 4 - prepTime: 11 - Price: $18.99
TIME: 105, Foodorder: 10 arrives -> Expiry: 150 - Meal: Salad - Ingredients: 3 - prepTime: 6 - Price: $9.99
TIME: 105, Foodorder: 11 arrives -> Expiry: 150 - Meal: Pizza - Ingredients: 3 - prepTime: 9 - Price: $15.99
TIME: 105, Foodorder: 12 arrives -> Expiry: 150 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 105, Foodorder: 13 arrives -> Expiry: 150 - Meal: Burger - Ingredients: 4 - prepTime: 8 - Price: $12.99
TIME: 105, Foodorder: 14 arrives -> Expiry: 150 - Meal: Pizza - Ingredients: 4 - prepTime: 10 - Price: $16.99
TIME: 105, Foodorder: 15 arrives -> Expiry: 150 - Meal: Pizza - Ingredients: 7 - prepTime: 13 - Price: $19.99
TIME: 105, Foodorder: 16 arrives -> Expiry: 150 - Meal: Stew - Ingredients: 3 - prepTime: 10 - Price: $17.99
TIME: 105, Foodorder: 17 arrives -> Expiry: 150 - Meal: Stew - Ingredients: 5 - prepTime: 12 - Price: $19.99
TIME: 105, Foodorder: 18 arrives -> Expiry: 150 - Meal: Salad - Ingredients: 1 - prepTime: 4 - Price: $7.99
TIME: 105, Foodorder: 19 arrives -> Expiry: 150 - Meal: Burger - Ingredients: 1 - prepTime: 5 - Price: $9.99
TIME: 107, Foodorder: 6 has been served! Revenue grew by: $10.99
TIME: 107, Foodorder: 17 is getting prepared by the chef!
TIME: 119, Foodorder: 17 has been served! Revenue grew by: $19.99
TIME: 119, Foodorder: 15 is getting prepared by the chef!
TIME: 132, Foodorder: 15 has been served! Revenue grew by: $19.99
TIME: 132, Foodorder: 9 is getting prepared by the chef!
TIME: 143, Foodorder: 9 has been served! Revenue grew by: $18.99
TIME: 143, Foodorder: 16 is getting prepared by the chef!
TIME: 153, Foodorder: 16 has been served! Revenue grew by: $17.99
TIME: 500, Foodorder: 20 arrives -> Expiry: 520 - Meal: Burger - Ingredients: 1 - prepTime: 5 - Price: $9.99
TIME: 500, Foodorder: 20 is getting prepared by the chef!
TIME: 505, Foodorder: 20 has been served! Revenue grew by: $9.99
TIME: 505, Foodorder: 21 arrives -> Expiry: 525 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 505, Foodorder: 21 is getting prepared by the chef!
TIME: 510, Foodorder: 22 arrives -> Expiry: 520 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 511, Foodorder: 21 has been served! Revenue grew by: $10.99
TIME: 511, Foodorder: 22 is getting prepared by the chef!
TIME: 511, Foodorder: 23 arrives -> Expiry: 525 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 515, Foodorder: 24 arrives -> Expiry: 529 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 517, Foodorder: 22 has been served! Revenue grew by: $10.99
TIME: 517, Foodorder: 24 is getting prepared by the chef!
TIME: 520, Foodorder: 25 arrives -> Expiry: 535 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 521, Foodorder: 26 arrives -> Expiry: 536 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 522, Foodorder: 27 arrives -> Expiry: 538 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 523, Foodorder: 24 has been served! Revenue grew by: $10.99
TIME: 523, Foodorder: 27 is getting prepared by the chef!
TIME: 524, Foodorder: 28 arrives -> Expiry: 540 - Meal: Burger - Ingredients: 4 - prepTime: 8 - Price: $12.99
TIME: 525, Foodorder: 29 arrives -> Expiry: 550 - Meal: Burger - Ingredients: 2 - prepTime: 6 - Price: $10.99
TIME: 529, Foodorder: 27 has been served! Revenue grew by: $10.99
TIME: 529, Foodorder: 28 is getting prepared by the chef!
TIME: 537, Foodorder: 28 has been served! Revenue grew by: $12.99
TIME: 537, Foodorder: 29 is getting prepared by the chef!
TIME: 543, Foodorder: 29 has been served! Revenue grew by: $10.99
TIME: 700, Foodorder: 30 arrives -> Expiry: 730 - Meal: Pizza - Ingredients: 3 - prepTime: 9 - Price: $15.99
TIME: 700, Foodorder: 30 is getting prepared by the chef!
TIME: 701, Foodorder: 31 arrives -> Expiry: 750 - Meal: Pizza - Ingredients: 1 - prepTime: 7 - Price: $13.99
TIME: 702, Foodorder: 32 arrives -> Expiry: 730 - Meal: Pizza - Ingredients: 1 - prepTime: 7 - Price: $13.99
TIME: 703, Foodorder: 33 arrives -> Expiry: 740 - Meal: Pizza - Ingredients: 2 - prepTime: 8 - Price: $14.99
TIME: 704, Foodorder: 34 arrives -> Expiry: 755 - Meal: Pizza - Ingredients: 3 - prepTime: 9 - Price: $15.99
TIME: 705, Foodorder: 35 arrives -> Expiry: 740 - Meal: Pizza - Ingredients: 10 - prepTime: 16 - Price: $22.99
TIME: 706, Foodorder: 36 arrives -> Expiry: 740 - Meal: Pizza - Ingredients: 1 - prepTime: 7 - Price: $13.99
TIME: 707, Foodorder: 37 arrives -> Expiry: 740 - Meal: Pizza - Ingredients: 1 - prepTime: 7 - Price: $13.99
TIME: 709, Foodorder: 30 has been served! Revenue grew by: $15.99
TIME: 709, Foodorder: 35 is getting prepared by the chef!
TIME: 725, Foodorder: 35 has been served! Revenue grew by: $22.99
TIME: 725, Foodorder: 34 is getting prepared by the chef!
TIME: 734, Foodorder: 34 has been served! Revenue grew by: $15.99
TIME: 734, Foodorder: 33 is getting prepared by the chef!
TIME: 742, Foodorder: 33 has been served! Revenue grew by: $14.99
TIME: 742, Foodorder: 31 is getting prepared by the chef!
TIME: 749, Foodorder: 31 has been served! Revenue grew by: $13.99
... simulation ended.
- Total number of orders completed: 22
- Total revenue: $338.78

________________________________________________________________________________________________________________________
------------------------------------END OF OUTPUT FOR ALL VERSIONS------------------------------------------------------
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^