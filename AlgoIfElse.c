#include <stdio.h>

int main()
{   
    // k mi instan yg dibutuhkan
    // n mi instant yg lili punya
    // m mi instant yg tersisa di toko
    // t test case
    // x jumlah case
    
    int k[50], n[50], m[50], t;
      
    scanf("%d", &t);
    getchar();
    
    for(int i = 0; i < t; i++)
    {
        
    scanf("%d %d %d", &k[i], &n[i], &m[i]);
    }
    
    for(int i  = 0; i < t; i++)
    if(k[i] <= (n[i] + m[i])){
            printf("Case #%d: yes\n", i+1);
        }
        else{
            printf("Case #%d: no\n", i+1);    
        }
    return 0;
}