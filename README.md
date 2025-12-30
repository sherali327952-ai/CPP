# Electricity Bill Calculator

A lightweight C++ console application designed to calculate electricity costs based on a tiered pricing model. This project demonstrates the use of loops and conditional branching (`if-else`) to handle progressive billing slabs.

## 📝 Project Overview
This program calculates the total bill amount based on the number of units consumed. Instead of using a simple multiplier, it applies different rates for different "slabs" of usage, ensuring that users are charged progressively.



## 💰 Pricing Structure
The calculation is based on the following rate card:

| Consumption Slab | Rate per Unit |
| :--- | :--- |
| **0 - 100 units** | Rs. 5 |
| **101 - 200 units** | Rs. 7 |
| **201 units and above** | Rs. 10 |

## ⚙️ Logic Implementation
The core logic utilizes a `for` loop that iterates through every single unit from 1 to the total input. Inside the loop, an `if-else if-else` structure checks the current unit index ($i$) and adds the corresponding cost to the `bill` variable.

```cpp
for(int i = 1; i <= units; i++) {
    if(i <= 100) {
        bill = bill + 5;
    }
    else if(i <= 200) {
        bill = bill + 7;
    }
    else {
        bill = bill + 10;
    }
}
```

## Author : Sher Ali
