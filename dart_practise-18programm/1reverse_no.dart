import 'dart:io';
int main() {
  int n, reverse = 0, remainder;
  print("Enter an integer: ");
  n = int.parse(stdin.readLineSync()!);
  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n =n~/ 10;
  }
  print("Reversed number = $reverse");
  return 0;
}
/*void main() {
  var nums = [3, 2, 2, 4, 3];
  var reversed = nums.reversed;
  print(nums);
  print(reversed);
}*/