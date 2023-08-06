void main() {
  String name = "urvisha";
  print("name:$name");
  print(reverseString(name));
}

String reverseString(String input) {
  var reverseName = input.split("");
  return reverseName.reversed.join();
}
