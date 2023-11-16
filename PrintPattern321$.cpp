/*You are required to complete this method*/
void printPat(int n)
{
//Your code here
    for(int i = n; i >= 1; i--) {
        int j = i;
        int temp = n;
        while(temp > 0) {
            for(int k = 1; k <= j; k++) {
                cout << temp << " ";
            }
            temp--;
        }
        cout <<"$";
    }
}