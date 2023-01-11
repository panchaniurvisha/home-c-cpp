 dynamic getLongestWord([str]){
  int i,maxLength=0;
  dynamic longestWord ='';
  dynamic words=str.split(' ');
  for ( i = 0; i < words. length; i++) {
      if (words[i]. length > maxLength) {
        maxLength = words[i]. length;
        longestWord = words[i];
        return longestWord;
    }
  }
 }
void main(){
  dynamic str = "web development tutorial";
  print("Longest word Name--------------");
  print(getLongestWord([str]));

}