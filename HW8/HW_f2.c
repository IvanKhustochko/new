void sort_even_odd(int n, int a[]) 
{
    int even_count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] % 2 == 0)
        {
            even_count++;
        }
    }
    int even[even_count];
    int odd[n - even_count];   
    int e = 0, o = 0;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] % 2 == 0) 
        {
            even[e++] = a[i];
        } else 
        {
            odd[o++] = a[i];
        }
    }
    for (int i = 0; i < even_count; i++) 
    {
        a[i] = even[i];
    }
    for (int i = 0; i < n - even_count; i++) 
    {
        a[even_count + i] = odd[i];
    }
}
