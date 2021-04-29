
#include <iostream>

using namespace std;

void *mymemcpy(void *dst, void *src, int num_bytes) {
    int num_loops = 0, i = 0;
    char *tmp_src = (char *)src;
    char *tmp_dst = (char *)dst;
    
    num_loops = num_bytes/4;
    
    while (i < num_loops) {
        *((int *)tmp_dst) = *((int *)tmp_src);
       
        tmp_src = tmp_src + 4;
        tmp_dst = tmp_dst + 4;
        i++;
    }
    
    num_loops = num_bytes % 4;
    for (int i=0; i < num_loops; i++){
         *tmp_dst++ = *tmp_src++;
    }
    
    return tmp_dst;
}

int main()
{
    cout<<"Hello World\n\n";
    char arr[] = "Hello world";
    char arr1[20]={0};
    
    mymemcpy(arr1, arr, 9);
    
    cout<<arr1<<endl;

    return 0;
}
