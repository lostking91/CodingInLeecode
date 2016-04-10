/*
Count the number of prime numbers less than a non-negative number, n.
*/
//solution1
class Solution {
public:
    int countPrimes(int n) {
		int i,j;
		int sum=1;
		int upper=sqrt(n);
		vector<bool> passed(n,false); 
		if(n<=2) return 0;
		for(int i=3;i<n;i=i+2)
		{
			if(!passed[i])
			{
				sum++;
			}
			if(i>upper) continue;
			for(j=i*i;j<n;j=j+i)
			{
				passed[j]=true;
			}
		}
		return sum;
	}
}

//solution2: Don't pass submission
class Solution {
public:
    int countPrimes(int n) {
        int i,j;
        int PrimesSum=0;
        bool m;
        for(int i=2;i<n;i++)
        {
            m=true;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    m=false;
                    break;
                }
            }
            if(m){
               PrimesSum++; 
            } 
        }
        return PrimesSum;
    }
};