List getAllSubsets(l)=> l.fold<List>([[ ]],(subLists,element){
    return subLists.map((subList) =>[subList,subList+[element]]).expand((element)=>element).toList();
  });
void main(){
  ///String str="hello world";
  List<int> l=[1,2,3];
  print(getAllSubsets(l));
}