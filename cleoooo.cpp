#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		string cari;
		vector<pair<pair<int,int>	, pair<int,string> > > nilai;
		cin >> cari;
		for (int i = 0; i < n; i++)
		{
			string a;
			int b,c,d;
			cin >> a >> b >> c >> d;
			nilai.push_back(make_pair(make_pair(d,c), make_pair(b,a) ));
		}
		sort(nilai.begin(), nilai.end());
		int i=n-1, j=m;
		bool cek=0;
		while(j--)
		{
			if(nilai[i].second.second==cari) cek=1;
			i--;
		}
		if(cek)
		{
			cout<<"YA\n";
		}
		else
		{
			cout<<"TIDAK\n";
		}
		
    }
}
