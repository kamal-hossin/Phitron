#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int val)
{
    v.push_back(val);
    int cur_idx = v.size() - 1;

    while (cur_idx != 0)
    {
        int par_idx = (cur_idx - 1) / 2;
        if (v[par_idx] < v[cur_idx])
            swap(v[par_idx], v[cur_idx]);
        else
            break;
        cur_idx = par_idx;
    }
}
void print_heap(vector<int> v)
{
    for (x : v)
        cout << x << " ";
    cout << endl;
}
void delete_heap(vector<int> &v)
{
    v[0] = v.back();
    v.pop_back();
    int cur_idx = 0;
    while (true)
    {
        int left_idx = cur_idx * 2 + 1;
        int right_idx = cur_idx * 2 + 2;

        int left_val = INT_MIN, right_val = INT_MIN;
        if (left_val < v.size())
            left_val = v[left_val];

        if (right_val < v.size())
            right_val = v[right_val];

        if (left_val > right_val && left_val > v[cur_idx])
        {
            swap(v[left_idx], v[cur_idx]);
            cur_idx = left_idx;
        }
        else if (right_val > left_val && right_val > v[cur_idx])
        {
            swap(v[right_idx], v[cur_idx]);
            cur_idx = right_idx;
        }
        else
            break;
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_heap(v, val);
    }
    delete_heap(v);

    return 0;
}