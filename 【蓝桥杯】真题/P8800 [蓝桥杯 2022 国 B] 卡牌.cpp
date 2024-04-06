#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 2e5 + 5;

struct Card
{
    int a;
    int b;
} cards[MAX_SIZE];

bool cmp(Card a, Card b)
{
    return (a.a < b.a);
}

int main()
{
    int n, m, i;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> cards[i].a;
    }
    for (i = 0; i < n; i++)
    {
        cin >> cards[i].b;
    }
    while (m > 0)
    {
        sort(cards, cards + n, cmp);
        if (cards[0].a == cards[0].b)
        {
            break;
        }
        else if (cards[0].a < cards[0].b)
        {
            cards[0].a++;
            m--;
        }
    }
    sort(cards,cards+n,cmp);
    cout << cards[0].a << endl;
    // for (i=0;i<n;i++){
    //     printf("%d ",cards[i].a);
    // }
    return 0;
}

// 逻辑错误
//  int main()
//  {
//      int n, m, i, a[MAX_SIZE], b[MAX_SIZE];
//      int max_val = 0;
//      cin >> n >> m;
//      for (i = 0; i < n; i++)
//      {
//          cin >> a[i];
//          if (max_val < a[i])
//          {
//              max_val = a[i];
//          }
//      }
//      for (int i = 0; i < n; i++)
//      {
//          cin >> b[i];
//      }
//      i = 0;
//      // while (m > 0)
//      // {
//      //     if (i >= n)
//      //     {
//      //         i = 0;
//      //     }
//      //     if (a[i] < b[i] && a[i] < max_val)
//      //     {
//      //         a[i]++;
//      //         i++;
//      //         m--;
//      //     }else{
//      //         i++;
//      //     }
//      //     if (a[i] > max_val)
//      //     {
//      //         max_val = a[i];
//      //     }
//      // }
//      // sort(a, a + n);
//      cout << a[0] << endl;
//      return 0;
//  }
