#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxProfit2(vector<int> prices) {
  unordered_map<int, int> pr;

  for(int i = 0; i < prices.size(); i++) {
    pr[prices[i]];
  }

  for(auto x : pr) {
    cout << x.first << " " << x.second << endl;
  }
}

/// brute force solution
/// TC: O(n ^ 2)
/// SC: O(n)
int maxProfit(vector<int> prices) {
  vector<int> profit;

  for(int i = 0; i < prices.size(); i++) {
    for(int j = i + 1; j < prices.size(); j++) {
      if(prices[j] > prices[i]) {
        profit.push_back(prices[j] - prices[i]);
      }
    }
  }

  int min = -1;

  for(int i = 0; i < profit.size(); i++) {
    if(profit[i] > min) {
      min = profit[i];
    }

    cout << profit[i] << " " << endl;
  }

  return min < 0 ? 0 : min;
}

int main() {
  vector<int> prices = {7,6,4,3,1};

  int profit = maxProfit2(prices);

  cout << profit;
  return 0;
}


/*
    You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

*/