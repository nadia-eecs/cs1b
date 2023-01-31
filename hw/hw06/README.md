# HW 05: Overloading and Templates

## Firstname Lastname

TODO - Update your name in this readme

## Problem Statement

Write a program to help a local stock trading company automate its systems. The company invests only in the stock market. At the end of each trading day, the company would like to generate and post the listing of its stocks so that investors can see how their holdings performed that day. We assume that the company invests in say, 10 different stocks. The desired output is to produce two listings, one sorted by stock symbol and another sorted by percent gain from highest to lowest.
`                                           
The input data is provided in a file in the following format:

```
symbol openingPrice closingPrice todayHigh todayLow prevClose volume

```
For example, the sample data is:
```
MSMT 112.50 115.75 116.50 11.75 113.50 6723823
CBA 67.50 75.50 78.75 67.50 65.75 378233
.
.
.
```
The first line indicates that the stock symbol is `MSMT`, today's opening price was `112.50`, the closing price was `115.75`, today's high price was `116.50`, today's low price `111.75`, yesterday's closing price was `113.50`, and the number of shares currently being held is `6723823`.

The listing is sorted by stock symbols must be of the following form:
```
*********    First Investor's Heaven    *********
*********       Financial Report        *********
Stock             Today                    Previous   Percent
Symbol    Open    Close    High    Low     Close      Gain      Volume
------    -----   -----   -----   -----   --------   -------   ------
   ABC    123.45  130.95  132.00  125.00   120.50    8.67%    10000
  AOLK     80.00   75.00   82.00   74.00    83.00   -9.64%     5000
  CSCO    100.00  102.00  105.00   98.00   101.00    0.99%    25000
   IBD     68.00   71.00   72.00   67.00    75.00   -5.33%    15000
  MSET    120.00  140.00  145.00  140.00   115.00   21.74%    30920
  Closet Assets: $9628300.00
-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
```
Develop this programming exercise in two steps. In the first step (part a), design and implement a stock object. In the second step (part b), design and implement an object to maintain a list of stocks.

### A. Stock Object 

Design and implement the stock object. Call the class that captures the various characteristics of a stock object `stockType`.

The main components of a stock are the stock symbol, stock price, and number of shares. Moreover, we need to output the opening price, closing price, high price, low price, previous price, and the percent gain/loss for the day. These are also all the characteristics of a stock. Therefore, the stock object should store all this information.

Perform the following operations on each stock object:

1. Set the stock information.
2.  Print the stock information.
3. Show the different prices.
4. Calculate and print the percent gain/loss.
5. Show the number of shares.
  1. The natural ordering of the stock list is by stock symbol. Overload the relational operators to compare two stock objects by their symbols.
  2. Overload the insertion operator, `<<`, for easy output.
  3. Because the data is stored in a file, overload the stream extraction operator, `>>`, for easy input.

For example, suppose `infile` is an `ifstream` object and the input file was opened using the object `infile`. Further suppose that `myStock` is a stock object. Then, the statement

`infile >> myStock;`

reads the data from the input file and stores it in the object `myStock`. (Note that this statement reads and stores the data in the relevant components of `myStock`.)

### B. List of Stock Objects 

Now that you have designed and implemented the `class stockType` to implement a stock object in a program, it is time to create a list of stock objects.

Let us call the class to implement a list of stock objects `stockListType`.

The class `stockListType` must be derived from the `class listType`, which you designed and implemented in the previous exercise. However, the `class stockListType` is a very specific class, designed to create a list of stock objects. Therefore, the `class stockListType` is no longer a template.

Add and/or overwrite the operations of the `class listType` to implement the necessary operations on a stock list.

The following statement derives the `class stockListType` from the `class listType`.

```
class stockListType: public listType<stockType> {
  // member list

};
```

The member variables to hold the list elements, the length of the list, and the maximum size of the list were declared as `protected` in the `class listType`. Therefore, these members can be directly accessed in the `class stockListType`.

Because the company also requires you to produce the list ordered by the percent gain/loss, you need to sort the stock list by this component. However, you are not to physically sort the list by the component percent gain/loss. Instead, you will provide a logical ordering with respect to this component.

To do so, add a member variable, an array, to hold the indices of the stock list ordered by the component percent gain/loss. Call this array `sortIndicesGainLoss`. When printing the list ordered by the component percent gain/loss, use the array `sortIndicesGainLoss` to print the list. The elements of the array `sortIndicesGainLoss` will tell which component of the stock list to print next.

## C. Automation
Write a program that uses these two classes to automate the company's analysis of stock data.

## NOTE:

To receive full credit you must complete the following in `src`:

- `stock.h`
- `stock.cpp`
- `listType.h`
- `listType.cpp`
- `stockList.h`
- `stockList.cpp`
- `main.cpp`
- `Makefile`

You may also include an `stock_data.txt` to ensure that your code compiles and runs with the main function you write.

Please make sure to push all final changes prior to the deadline. Realize that this code does not include test cases.

## EXTRA CREDIT (20)

You may receive extra credit of up to 20 points (5 points per test case) if you write your own test cases using `gtest`. To review how write test cases you may reference lecture slides presented in class and/or the [GoogleTest Primer](http://google.github.io/googletest/primer.html). Realize this will change how you write the driver code in `main.cpp`. As an alternative to `gtest` you may also use `cassert`.
