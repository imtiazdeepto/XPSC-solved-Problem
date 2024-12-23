    #include <bits/stdc++.h>
    #define Code ios_base::sync_with_stdio(false);
    #define By cin.tie(NULL);
    #define ImtiazDeepto cout.tie(NULL);
    using namespace std;
    #define all(x) (x).begin(), (x).end()
    #define int long long
    #define tc    \
        int x;    \
        cin >> x; \
        while (x--)
    const int N = 1e8;

    signed main()
    {
        Code By ImtiazDeepto

            tc
        {
            int n, m, k;
            cin >> n >> m >> k;
            vector<int> mq(m);
            for (int i = 0; i < m; i++)
            {
                cin >> mq[i];
            }
            vector<int> easy(k);
            map<int, bool> mp, mq2;
            for (int i = 0; i < k; i++)
            {
                cin >> easy[i];
                mp[easy[i]] = true;
            }
            for (int i = 1; i <= n; i++)
            {
                if (!mp[i] == true)
                    mq2[i] = true;
            }
            if (mq2.empty())
            {
                for (int i = 0; i < m; i++)
                {
                    cout << 1;
                }
                cout << endl;
                continue;
            }

            if(mq2.size()>1){
                for (int i = 0; i < m; i++)
                {
                    cout << 0;
                }
                cout << endl;
                continue;
            }
            for (auto el : mq)
            {
                if (mq2[el])
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            cout << endl;
        }

        return 0;
    }