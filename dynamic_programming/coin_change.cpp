#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

void coinChange(int coins[], int n, int amount)
{
  vector<int> dp(amount + 1, INT_MAX);
  dp[0] = 0;

  for (int i = 1; i <= amount; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i - coins[j] >= 0)
        dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
    }
  }
  if (dp[amount] != INT_MAX)
  {
    cout << "Coin Change: " << dp[amount] << endl;
  }
  else
  {
    cout << "Coin Change not possible with given amount." << endl;
  }
}

int main()
{
  int coins[] = {1, 3, 4, 5};
  int n = sizeof(coins) / sizeof(coins[0]);
  int amount = 7;
  coinChange(coins, n, amount);

  return 0;
}
