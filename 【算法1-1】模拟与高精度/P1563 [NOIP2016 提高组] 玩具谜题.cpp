#include <bits/stdc++.h>

using namespace std;

int main() {
    int bot_direction[100005];
    char bot_name[100005][11];
    int bot_amount = 0, command_amount = 0;
    int target_bot = 0;
    int temp1, temp2;
    scanf("%d %d", &bot_amount, &command_amount);
    for (int i = 0; i < bot_amount; i++) {
        scanf("%d %s", &bot_direction[i], bot_name[i]);
    }
    for (int i = 0; i < command_amount; i++) {
        scanf("%d %d", &temp1, &temp2);
        if (temp1 == bot_direction[target_bot]) {
            target_bot = (target_bot - temp2 + bot_amount) % bot_amount;
            // target_bot = (target_bot + temp2) % bot_amount;
        } else {
            // target_bot = (target_bot - temp2 + bot_amount) % bot_amount;
            target_bot = (target_bot + temp2) % bot_amount;
        }
    }
    printf("%s\n", bot_name[target_bot]);
    return 0;
}
