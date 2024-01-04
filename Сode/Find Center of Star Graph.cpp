#include<vector>
using namespace std;

int findCenter(vector<vector<int>>& edges) {
    int n = edges.size() + 1; // количество узлов в графе
    vector<int> count(n + 1, 0); // массив для подсчета количества вхождений каждого узла

    for (auto& edge : edges) {
        count[edge[0]]++;
        count[edge[1]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (count[i] == n - 1) {
            return i; // узел является центром
        }
    }

    return -1; // если не найден центр
}
