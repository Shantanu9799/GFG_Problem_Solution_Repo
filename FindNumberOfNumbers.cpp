/*Complete the function given below*/
int num(int a[], int n, int k)
{
     //add code here.
     int count = 0;
     
     for(int i = 0; i < n; i++) {
         
         int num = a[i];
         int cnt = 0;
         
         while(num) {
             if(num%10 == k) cnt++;
             num /= 10;
         }
         
         count += cnt;
         
     }
     
     return count;
}