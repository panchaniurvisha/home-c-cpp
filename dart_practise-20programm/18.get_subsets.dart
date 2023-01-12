/*List getAllSubsets(l)=> l.fold<dynamic>([[ ]],(subLists,element){
    return subLists.map((subList) =>[subList,subList+[element]]).expand((element)=>element).toList();
  });
void main(){
  ///String str="hello world";
  List<int> l=[1,2,3];
  print(getAllSubsets(l));
}*/
import 'dart:io';
void subset(List arr[], int data[], int start, int end, int index, int r)
{
    int j, i;
    if (index == r) {
        for (j = 0; j < r; j++)
            print(%$data[j]);
        print("\n");
        return;
    }
    for (i = start; i <= end && end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        subset(arr, data, i+1, end, index+1, r);
    }
}
void printsubset(List arr, int n, int r)
{
    List data=[r];
    subset(arr, data, 0, n - 1, 0, r);
}
int main()
{
    int ?k, n;
    List arr=[1,2,3];
    print("Enter the number of input : ");
    n=int.parse(stdin.readLineSync()!);//scanf("%d", &n);
    /*print("\nEnter the integers: \n");
    for (  i = 0; i !< n; i++)
    {
	    int.parse(stdin.readLineSync()!);//scanf("%d", &arr[i]);
    }*/
    print("Enter value of k: ");
    k=int.parse(stdin.readLineSync()!);
    printsubset(arr, n, k);
    return 0;
}