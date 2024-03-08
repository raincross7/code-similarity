#include <bits/stdc++.h>
const int maxn = int(1e5) + 7;
int x, y, h, w, n;
long long ans[17], base = int(1e9) + 7, zero, node[maxn << 4], tot_node;
int main(void) {
    scanf("%d%d%d", &h, &w, &n);
    zero = 1ll * (h - 2) * (w - 2);
    while (n--) {
        scanf("%d%d", &x, &y);
        for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++)
                if (1 <= x - i && x - i <= h - 2 && 1 <= y - j && y - j <= w - 2)
                    node[tot_node++] = base * (x - i) + (y - j);
    }
    std::sort(node, node + tot_node);
    for (int i = 0, cnt = 1; i < tot_node; i++) {
        if (node[i] == node[i + 1]) cnt++;
        else ans[cnt]++, cnt = 1, zero--;
    }
    printf("%lld\n", zero);
    for (int i = 1; i < 10; i++) printf("%lld\n", ans[i]);
    return 0;
}