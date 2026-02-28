class Solution {
public:
    void solve(vector<int>&primes,int n){
        //seives method t.c = n(lon(logn))
        for(int i=2;i<=n;i++){
            if(!primes[i]){
                continue;
            }
            for(int j=2*i;j<=n;j+=i){
                primes[j] = 0;
            }
        }
    }
    int largestPrime(int n) {
        vector<int>primes(n+1,1);
        primes[1] = 0;
        solve(primes,n);
        vector<int>p;
        for(int i=2;i<=n;i++){
            if(primes[i]){
                p.push_back(i);
            }
        }
        int maxi = 0;
        int sum = 0;
        for(int i=0;i<p.size();i++){
            sum+=p[i];
            if(sum>n){
                break;
            }if(primes[sum]){
                maxi = max(sum,maxi);
            }
        }
        return maxi;
    }
};