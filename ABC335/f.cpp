#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<vector<int>> graph;
vector<int> values;
set<int> visited;

int maxScore;

void dfs(int node, vector<int> &path)
{
    visited.insert(node);
    path.push_back(values[node]);

    bool isIncreasing = true;
    set<int> uniqueValues(path.begin(), path.end());

    if (uniqueValues.size() != path.size())
    {
        // 広義単調増加でない場合
        isIncreasing = false;
    }
    else
    {
        for (int i = 1; i < path.size(); ++i)
        {
            if (path[i] <= path[i - 1])
            {
                isIncreasing = false;
                break;
            }
        }
    }

    if (isIncreasing)
    {
        maxScore = max(maxScore, static_cast<int>(uniqueValues.size()));
    }

    for (int neighbor : graph[node])
    {
        if (visited.find(neighbor) == visited.end())
        {
            dfs(neighbor, path);
        }
    }

    visited.erase(node);
    path.pop_back();
}

int main()
{
    int N, M;
    cin >> N >> M;

    graph.resize(N + 1);
    values.resize(N + 1);

    for (int i = 1; i <= N; ++i)
    {
        cin >> values[i];
    }

    for (int i = 0; i < M; ++i)
    {
        int U, V;
        cin >> U >> V;
        graph[U].push_back(V);
        graph[V].push_back(U);
    }

    maxScore = 0;

    for (int start = 1; start <= N; ++start)
    {
        vector<int> path;
        dfs(start, path);
    }

    cout << maxScore << endl;

    return 0;
}
