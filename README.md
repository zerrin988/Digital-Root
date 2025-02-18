# **Digital Root**  

## **Overview**  
This program finds the **Digital Root** of an integer by recursively summing its digits until a **single-digit result** is obtained.  

## Input
You have to manually change the input from the code as there is no Input mechanism impletmented

## **How It Works**  

### **1. Summing the Digits**  
- Extracts each digit using `% 10` and adds it to `sum`.  
- Removes the last digit using `/ 10`.  

### **2. Checking the Result**  
- If `sum` is a **single digit**, return it.  
- Otherwise, call `DigitalRoot(sum, size)` recursively.  

## **Example Run**  
```plaintext
Input: 998
Step 1: 9 + 9 + 8 = 26
Step 2: 2 + 6 = 8
Output: The Digital Root of 998 is: 8
```

## **Main Components**  

### **Digit Extraction & Summing**  
```c
while (UGV > 0)
{
    int InsertValue = UGV % 10;
    sum += InsertValue;
    UGV = UGV / 10;
}
```
- Extracts digits and adds them to `sum`.  

### **Recursive Check**  
```c
if (NewSize == 1)
{
    return sum;
}

else
{
    return DigitalRoot(sum, NewSize);
}
```
- Calls itself until a **single-digit sum** is reached.  

## **Notes**  
- **Inefficient recursion**: This code uses an inefficient mehtod here but this can be optimized using modulo:  
  ```c
  digital_root = 1 + (UGV - 1) % 9;
  ```

## **Compilation & Execution**  
```sh
gcc digital_root.c -o digital_root  
./digital_root  
```

## **Example Output**  
```sh
The Digital Root of 998 is: 8
```
-------------
## License
This project is open-source and available under the [MIT License](LICENSE).
