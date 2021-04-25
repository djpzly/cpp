#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {0};
    cout << "请输入数组（）10\n";
    for (int  i = 0; i < 10; i++)
    {
        cin >> arr[i];
        cout << "arr is " << arr[i] << endl;
    }

    cout << "请输入查找数字\n";
    int t = 0;
    cin >> t;

    int low = 0;
    int high = 9;

    while (low <= high)
    {
        int mid = (low + high)/2;

        if(t < arr[mid])
         {
            return mid;
            cout << mid << endl ;
         }else if(t < arr[mid]){
             high = mid -1;
         }else{
             low = mid+1;
         }
         return -1;
    }

}