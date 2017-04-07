#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;


ll _sieve_size;
bitset<10000010> bs;
vi primes;



void sieve(ll upperbound)
{
    _sieve_size = upperbound + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= _sieve_size; i++) if (bs[i])
        {

            for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
            primes.push_back((int)i);
        }
}
ll numDiffPF(ll N)
{
    ll PF_idx = 0, PF = primes[PF_idx], ans = 0;
    while (N != 1 && (PF * PF <= N))
    {
        if (N % PF == 0) ans++;
        while (N % PF == 0) N /= PF;
        PF = primes[++PF_idx];
    }
    if (N != 1) ans++;
    return ans;
}
int main()
{


    sieve(100000);

    long long int arra[10000];

    int k=1;

    for(int i=30; i<10000; i++)
    {


        if(numDiffPF(i)>=3)
            arra[k++] = i;


    }

    int test;
    scanf("%d",&test);

    while(test--)
    {
        int a;

        scanf("%d",&a);

        printf("%lld\n",arra[a]);
    }

    return 0;
}