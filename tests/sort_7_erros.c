int minloc(int a[], int low, int high)
{ 
    int i; int k;
    k = low;
    x = a[low];
    i = low + 1;
    while (i < high)
    { 
        if (a[i] < x)
        { 
            x = a[i];
            k = i;
        }
        else
        {
            i = i + 1;
        }
    }
    return k;
}

void sort(int a[], int low, int high)
{ 
    int i; int k; 
    i = low;
    func2();
    while (i < high-1)
    { 
        int t;
        k = minloc(a,i,high);
        t = a[k];
        a[k] = a[i];
        a[i] = t;
        i = i + 1;
    }
}

void func(){

}

void main()
{
    int c;
    int func;
    void a;
    int i;
    int i;
    i = 0;
    while (i < 10)
    {
        x[i] = input();
        i = i + 1;
    }
    bb = 5;
    sort(x,0,10);
    i = 0;
    while (i < 10)
    {
        output();
        i = i + 1;
    }
}