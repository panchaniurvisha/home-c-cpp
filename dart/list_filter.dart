void main() {
  List data = [
    "urvisha",
    "vaidehi",
    "piyush",
    "abhay",
    "skill_qode",
    "creative",
    "mohil"
  ];

  var name = data.where((element) => element == "urvisha");
  print(name);
}
