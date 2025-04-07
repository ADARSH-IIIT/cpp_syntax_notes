
/////// i want to save some keys in ds and want to acces whether they exist or not , then we use set , 
/// for non sorted use unordered set 
///  set =====>>>>>>>  all element will be unique and save ones only



#include<iostream>
#include<unordered_set>

using namespace std ; 

int main(){


      
unordered_set<char> mySet = { 'a' , 'b' , 'c' , 'd' } ;
mySet.insert('m');

mySet.erase('b');  // erase b if it exist , else nothing will happen 


if (mySet.count('b')) {
    std::cout << "'b' exists in the set\n";
} else {
    std::cout << "'b' does NOT exist in the set\n";
}

// count(c) returns 1 if c exists, 0 otherwise.

mySet.insert('k');
mySet.insert('k');

cout << mySet.count('k') ;    /// one as k exist , it do not save same k twicce , only one k is there is set 

cout << mySet.size()  ; 



    return 0 ; 
}
