// #include<iostream>
// using namespace std;
// int main(){

// char ch[100];
// cout<<"enter the name";
// cin>>ch;
// int n;
// cin>>n;
// for(int i=0;i<10;i++){
//     cout<<i<<" "<<ch[i];
    

// // strlen(name);

// }
// }

// #include<iostream>
// using namespace std;
// int main(){

// char name[100];

// cin.getline(name,50);
// cout<<name; 
// }


// char name[100];
// cin>>name;
// cout<<name;


#include<iostream>
#include<string.h>
using namespace std;


// int main(){
//  char ch[1000];
// //  cin>>ch;
// //  cout<<ch<<" ";
// cin.getline(ch,50);
// cout<<ch;
//  for(int i=0;i<15;i++){
//     cout<<" "<<ch[i]<<" "<<endl;
//  }
// //  cout<<ch[3]<<" "<<endl;
// //  cout<<ch[0]<<" "<<endl;
// }
//                                              length of a string
// #include<iostream>
// using namespace std;
// int main(){
//     char name[100];
//     cin>>name;
//     cout<<name;
//     cout<<strlen(name);

// }
// int getLength(char name[]){
//     int length=0;
//     int i=0;
//     while(name[i]!='\0'){
//         length++;
//         i++;

//     }
//     return length;
// }
//                                                          reverse string
// int reversestring(char name[100]){
//     int i=0;
//     int n=getLength(name);
//     int j=n-1;
//     while(i<=j){
//         swap (name[i],name[j]);
//             i++;
//             j--;

//         }
//     }
    


// int main(){
    
// char name[1000];
//  cin>>name;
//  cout<<name<<" ";
// // cin.getline(name,50);
// //  cout<<name;
//   reversestring(name);
//     cout<<name<<endl;
//     cout<<"length is"<<getLength<<" "<<endl;
    
// }4


//                                                 replaces spaces wid@
// void replaceSpaces(char sentence[ ]){
        
//         int i = 0;
//         int n = strlen(sentence);

//         for(int i=0; i<n; i++) {
//                 if(sentence[i] == ' ') {
//                         sentence[i] = '@';
//                 }
//         }
// }


// int main(){
//     // char name[100];
//     // cin>>name;
//     // cout<<name<<endl;
//     // int n=strlen(name);
//     // cout<< n<<endl;

//      char sentence[100];
//         cin.getline(sentence, 100);

//         replaceSpaces(sentence);
//         cout << "printing sentence " << endl << sentence << endl;

// }

//                                                palindrome

//  bool checkPalindrome(char word[]){
//     int i=0;
//     int n= strlen(word);
//     int j=n-1;
//     while(word[i]<=word[j]){
//         if(i!=j){
//            return true;
//         }
//         else{
//             i++;
//             j--;
//         }
//     }
//     return false;
   
// }
// int main(){
//     char word[100];
//     cin>>word;
//     cout<<word;
//  cout<<"palindrome is" <<  checkPalindrome(word);
//     // char word[100] = "hahahahha";
//         // cout << "palindrome check: " << checkPalindrome(word);


// }

//                                                 upper case
// void convertIntoUpperCase(char arr[]) {
//         int n = getLength(arr);

//         for(int i=0; i<n; i++) {
//                 arr[i] = arr[i] -'a' + 'A';
//         }
// }
// int main(){
// char arr[100] = "babbar";
// convertIntoUpperCase(arr);
// cout << arr << endl;
// }

//    
                                                // strings in C 
                                                
bool checkPalindrome(string s,int i,int j){
     i=0;
    int n= s.length();
     j=n-1;
    while(i<=j){
        if(s[i]!=s[j]){
           return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
   
}

bool validPalindrome(string s){
    int i=0;
    int j=s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]){
           
            return checkPalindrome(s,i+1,j)||checkPalindrome(s,i,j-1);

        }
        else{
             i++;
             j--;
        }
    
    }
    return true; 
}

int main(){
    // 
    string s="aba";
    // cin>>s;
    // cout<<s;
 cout<<"palindrome is" <<  validPalindrome(s);
    // string s = "hahahahha";
        cout << "palindrome check: " <<validPalindrome (s);
// validPalindrome(s);

}

    
